
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* dl_prm_ptr ;
struct TYPE_9__ {int a; int b; int len; int y; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__**,TYPE_1__*) ;
 int FUNC_3 () ;

void FUNC_4 (dl_prm_ptr VAR_0, dl_prm_ptr *VAR_1, dl_prm_ptr *VAR_2, int VAR_3, dl_prm_ptr *VAR_4) {
  VAR_3 += VAR_0->a;
  if (VAR_3 == VAR_0->a) {
    *VAR_1 = ((void*)0);
    *VAR_2 = VAR_0;
  } else if (VAR_3 == VAR_0->b) {
    *VAR_1 = VAR_0;
    *VAR_2 = ((void*)0);
  } else if (VAR_0->a < VAR_3 && VAR_3 < VAR_0->b) {
    *VAR_2 = FUNC_1();
    (*VAR_2)->a = VAR_3;
    (*VAR_2)->b = VAR_0->b;
    (*VAR_2)->y = FUNC_3();
    (*VAR_2)->len = (*VAR_2)->b - (*VAR_2)->a;

    *VAR_1 = VAR_0;
    (*VAR_1)->b = VAR_3;
    (*VAR_1)->len = (*VAR_1)->b - (*VAR_1)->a;

    FUNC_2 (VAR_4, *VAR_2);
  } else {
    FUNC_0 (0);
  }
}
