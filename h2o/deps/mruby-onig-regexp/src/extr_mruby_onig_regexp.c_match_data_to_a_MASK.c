
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_3__ {int num_regs; scalar_t__* beg; scalar_t__* end; } ;
typedef TYPE_1__ OnigRegion ;


 int FUNC_0 (int *,int ,int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_1 ;
 int FUNC_9 (int *,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state* VAR_2, mrb_value VAR_3) {
  mrb_value VAR_4 = FUNC_6(VAR_2, VAR_3, FUNC_5(VAR_2, "cache"));
  if(!FUNC_7(VAR_4)) {
    return VAR_4;
  }

  mrb_value VAR_5 = FUNC_6(VAR_2, VAR_3, FUNC_5(VAR_2, "string"));
  OnigRegion* VAR_6;
  FUNC_0(VAR_2, VAR_3, &VAR_1, VAR_6);

  mrb_value VAR_7 = FUNC_1(VAR_2, VAR_6->num_regs);
  int VAR_8, VAR_9 = FUNC_4(VAR_2);
  for(VAR_8 = 0; VAR_8 < VAR_6->num_regs; ++VAR_8) {
    if(VAR_6->beg[VAR_8] == VAR_0) {
      FUNC_2(VAR_2, VAR_7, FUNC_8());
    } else {
      FUNC_2(VAR_2, VAR_7, FUNC_9(VAR_2, VAR_5, VAR_6->beg[VAR_8], VAR_6->end[VAR_8] - VAR_6->beg[VAR_8]));
    }
    FUNC_3(VAR_2, VAR_9);
  }
  return VAR_7;
}
