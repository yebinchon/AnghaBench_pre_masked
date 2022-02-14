
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct RProc {int dummy; } ;
struct TYPE_10__ {int object_class; } ;
typedef TYPE_1__ mrb_state ;
typedef int mrb_irep ;


 int FUNC_0 (struct RProc*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (struct RProc*) ;
 struct RProc* FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int *,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_9(mrb_state *VAR_0, mrb_irep *VAR_1)
{
  int VAR_2;
  struct RProc *VAR_3;




  VAR_3 = FUNC_5(VAR_0, VAR_1);
  FUNC_3(VAR_0, VAR_1);
  FUNC_0(VAR_3, VAR_0->object_class);

  VAR_2 = FUNC_2(VAR_0);
  FUNC_7(VAR_0, FUNC_4(VAR_3), 0, ((void*)0), FUNC_6(VAR_0), VAR_0->object_class);
  FUNC_1(VAR_0, VAR_2);
}
