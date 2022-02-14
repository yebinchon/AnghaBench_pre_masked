
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_3__ {scalar_t__ last_len; int * rootseg; scalar_t__ size; } ;
typedef TYPE_1__ iv_tbl ;


 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static iv_tbl*
FUNC_1(mrb_state *VAR_0)
{
  iv_tbl *VAR_1;

  VAR_1 = (iv_tbl*)FUNC_0(VAR_0, sizeof(iv_tbl));
  VAR_1->size = 0;
  VAR_1->rootseg = ((void*)0);
  VAR_1->last_len = 0;

  return VAR_1;
}
