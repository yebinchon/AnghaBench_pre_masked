
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int len; int* ptr; int extlist; int chan; } ;
typedef TYPE_1__ packet_t ;
struct TYPE_8__ {size_t* ptr; size_t len; } ;
typedef TYPE_2__ exthdr_t ;



 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 size_t FUNC_2 (int ,size_t*,size_t,int) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,size_t) ;

__attribute__((used)) static bool
FUNC_6(packet_t *VAR_1)
{
 exthdr_t *VAR_2;
 size_t VAR_3, VAR_4;
 uint8_t VAR_5;

 do {
  if (VAR_1->len < 2)
   return 0;

  VAR_5 = VAR_1->ptr[0];
  VAR_4 = VAR_1->ptr[1];

  if (VAR_1->len < VAR_4 + 2)
   return 0;

  switch (VAR_5) {
  case 128:
   VAR_3 = FUNC_2(VAR_1->chan, VAR_1->ptr + 2, VAR_4, 1);
   if (VAR_3 != VAR_4)
    FUNC_3("ignored spurious data in exthdr");

   break;

  default:





   VAR_2 = FUNC_4(sizeof(exthdr_t));
   if (VAR_2 == ((void*)0)) {
    FUNC_3("exthdr malloc() failed: %m");
    break;
   }

   VAR_2->ptr = VAR_1->ptr;
   VAR_2->len = VAR_4;
   FUNC_1(&VAR_1->extlist, VAR_2, VAR_0);
   break;
  }

  FUNC_5(VAR_1, VAR_4 + 2);
 } while (FUNC_0(VAR_5));

 return 1;
}
