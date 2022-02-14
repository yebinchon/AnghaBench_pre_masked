
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; scalar_t__ ptr; scalar_t__ type; } ;
typedef TYPE_2__ packet_t ;
struct TYPE_8__ {int npfilter; TYPE_1__* pfilter; } ;
typedef TYPE_3__ channel_t ;
struct TYPE_6__ {int start; int end; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_1(channel_t *VAR_1, packet_t *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2->type);
 if (VAR_3 == VAR_0) {
  if (VAR_2->len < 4)
   return 0;

  VAR_3 = FUNC_0(VAR_2->ptr + 2);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->npfilter; VAR_4++) {
  if (VAR_1->pfilter[VAR_4].start <= VAR_3
      && VAR_1->pfilter[VAR_4].end >=VAR_3)
   return 1;
 }

 return 0;
}
