
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_9__ {int object_class; struct RClass* kernel_module; struct RClass* array_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct RClass*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 struct RClass* FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,struct RClass*,int ,int *) ;
 int FUNC_8 (struct RClass*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_9(mrb_state *VAR_9)
{
  struct RClass *VAR_10;
  struct RClass *VAR_11 = VAR_9->array_class;

  FUNC_5(VAR_9, VAR_9->kernel_module, "rand", VAR_4, FUNC_0(1));
  FUNC_5(VAR_9, VAR_9->kernel_module, "srand", VAR_5, FUNC_0(1));

  VAR_10 = FUNC_3(VAR_9, "Random", VAR_9->object_class);
  FUNC_1(VAR_10, VAR_0);
  FUNC_4(VAR_9, VAR_10, "rand", VAR_4, FUNC_0(1));
  FUNC_4(VAR_9, VAR_10, "srand", VAR_5, FUNC_0(1));

  FUNC_5(VAR_9, VAR_10, "initialize", VAR_6, FUNC_0(1));
  FUNC_5(VAR_9, VAR_10, "rand", VAR_7, FUNC_0(1));
  FUNC_5(VAR_9, VAR_10, "srand", VAR_8, FUNC_0(1));

  FUNC_5(VAR_9, VAR_11, "shuffle", VAR_2, FUNC_0(1));
  FUNC_5(VAR_9, VAR_11, "shuffle!", VAR_3, FUNC_0(1));
  FUNC_5(VAR_9, VAR_11, "sample", VAR_1, FUNC_0(2));

  FUNC_2(VAR_9, FUNC_8(VAR_10), FUNC_6(VAR_9, "DEFAULT"),
          FUNC_7(VAR_9, VAR_10, 0, ((void*)0)));
}
