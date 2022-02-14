
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct dtoa_context {TYPE_1__* p5s; } ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_1__ Bigint ;


 int FUNC_0 (struct dtoa_context*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct dtoa_context*,int) ;
 void* FUNC_2 (struct dtoa_context*,TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct dtoa_context*,TYPE_1__*,int const,int ) ;

__attribute__((used)) static Bigint *
FUNC_4
 (struct dtoa_context* VAR_0, Bigint *VAR_1, int VAR_2)
{
 Bigint *VAR_3, *VAR_4, *VAR_5;
 int VAR_6;
 static const int VAR_7[3] = { 5, 25, 125 };

 if ((VAR_6 = VAR_2 & 3))
  VAR_1 = FUNC_3(VAR_0, VAR_1, VAR_7[VAR_6-1], 0);

 if (!(VAR_2 >>= 2))
  return VAR_1;
 if (!(VAR_4 = VAR_0->p5s)) {

  VAR_4 = VAR_0->p5s = FUNC_1(VAR_0, 625);
  VAR_4->next = 0;
  }
 for(;;) {
  if (VAR_2 & 1) {
   VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_4);
   FUNC_0(VAR_0, VAR_1);
   VAR_1 = VAR_3;
   }
  if (!(VAR_2 >>= 1))
   break;
  if (!(VAR_5 = VAR_4->next)) {
   VAR_5 = VAR_4->next = FUNC_2(VAR_0, VAR_4,VAR_4);
   VAR_5->next = 0;
   }
  VAR_4 = VAR_5;
  }
 return VAR_1;
 }
