
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;
struct TYPE_3__ {int * beg; } ;
typedef TYPE_1__ OnigRegion ;


 int FUNC_0 (int *,int ,int *,TYPE_1__*) ;
 size_t FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (size_t const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state* VAR_1, mrb_value VAR_2) {
  mrb_value VAR_3;
  FUNC_4(VAR_1, "o", &VAR_3);
  OnigRegion* VAR_4;
  FUNC_0(VAR_1, VAR_2, &VAR_0, VAR_4);
  mrb_int const VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
  FUNC_2(VAR_5);
  return FUNC_3(VAR_4->beg[VAR_5]);
}
