
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct RProc {int dummy; } ;
typedef int mrb_value ;
struct TYPE_12__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
typedef int mrb_int ;
struct TYPE_11__ {TYPE_1__* ci; } ;
struct TYPE_10__ {int target_class; } ;


 int FUNC_0 (struct RProc*) ;
 int FUNC_1 (struct RProc*,int ) ;
 struct RProc* FUNC_2 (TYPE_3__*,char*,int,int ,char*,int) ;
 int FUNC_3 (TYPE_3__*,int ,struct RProc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,char*,char**,...) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  mrb_int VAR_3; mrb_value *VAR_4;

  FUNC_6(VAR_0, "*!&", &VAR_4, &VAR_3, &VAR_2);

  if (FUNC_7(VAR_2)) {
    char *VAR_5;
    mrb_int VAR_6;
    char *VAR_7 = ((void*)0);
    mrb_int VAR_8 = 1;
    mrb_value VAR_9;
    struct RProc *VAR_10;

    FUNC_6(VAR_0, "s|zi", &VAR_5, &VAR_6, &VAR_7, &VAR_8);
    VAR_9 = FUNC_10(VAR_0, VAR_1);
    VAR_10 = FUNC_2(VAR_0, VAR_5, VAR_6, FUNC_8(), VAR_7, VAR_8);
    FUNC_1(VAR_10, FUNC_5(VAR_9));
    FUNC_4(!FUNC_0(VAR_10));
    VAR_0->c->ci->target_class = FUNC_5(VAR_9);
    return FUNC_3(VAR_0, VAR_1, VAR_10);
  }
  else {
    FUNC_6(VAR_0, "&", &VAR_2);
    return FUNC_9(VAR_0, VAR_1);
  }
}
