
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_3__ {int * beg; } ;
typedef TYPE_1__ OnigRegion ;


 int FUNC_0 (int *,int ,int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state* VAR_1, mrb_value VAR_2) {
  OnigRegion* VAR_3;
  FUNC_0(VAR_1, VAR_2, &VAR_0, VAR_3);
  mrb_value VAR_4 = FUNC_2(VAR_1, VAR_2, FUNC_1(VAR_1, "string"));
  return FUNC_3(VAR_1, VAR_4, 0, VAR_3->beg[0]);
}
