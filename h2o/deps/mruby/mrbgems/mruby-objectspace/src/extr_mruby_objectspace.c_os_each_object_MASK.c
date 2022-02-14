
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_each_object_data {scalar_t__ count; int * target_module; int block; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,struct os_each_object_data*) ;
 int FUNC_6 (int *,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4 = FUNC_4();
  struct os_each_object_data VAR_5;
  FUNC_2(VAR_2, "&|C", &VAR_5.block, &VAR_4);

  if (FUNC_3(VAR_5.block)) {
    FUNC_6(VAR_2, VAR_0, "Expected block in ObjectSpace.each_object.");
  }

  VAR_5.target_module = FUNC_3(VAR_4) ? ((void*)0) : FUNC_0(VAR_4);
  VAR_5.count = 0;
  FUNC_5(VAR_2, VAR_1, &VAR_5);
  return FUNC_1(VAR_5.count);
}
