
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct RProc {int flags; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_8__ {int proc_class; } ;
typedef TYPE_1__ mrb_state ;
typedef int mrb_method_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct RProc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*,int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (struct RProc*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ,char*) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_3, mrb_value VAR_4)
{
  struct RProc *VAR_5;
  mrb_method_t VAR_6;
  mrb_sym VAR_7;
  mrb_value VAR_8 = FUNC_5();

  FUNC_3(VAR_3, "n&", &VAR_7, &VAR_8);
  if (FUNC_4(VAR_8)) {
    FUNC_9(VAR_3, VAR_0, "no block given");
  }
  VAR_5 = (struct RProc*)FUNC_6(VAR_3, VAR_2, VAR_3->proc_class);
  FUNC_7(VAR_5, FUNC_8(VAR_8));
  VAR_5->flags |= VAR_1;
  FUNC_0(VAR_6, VAR_5);
  FUNC_2(VAR_3, FUNC_1(FUNC_10(VAR_3, VAR_4)), VAR_7, VAR_6);
  return FUNC_11(VAR_7);
}
