
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_3__ {int num_regs; } ;
typedef TYPE_1__ OnigRegion ;


 int FUNC_0 (int *,int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state* VAR_1, mrb_value VAR_2) {
  OnigRegion* VAR_3;
  FUNC_0(VAR_1, VAR_2, &VAR_0, VAR_3);
  return FUNC_1(VAR_3->num_regs);
}
