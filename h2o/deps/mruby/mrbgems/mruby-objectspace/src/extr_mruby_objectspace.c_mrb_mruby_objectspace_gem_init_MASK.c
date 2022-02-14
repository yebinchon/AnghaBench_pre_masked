
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(mrb_state *VAR_2)
{
  struct RClass *VAR_3 = FUNC_2(VAR_2, "ObjectSpace");
  FUNC_1(VAR_2, VAR_3, "count_objects", VAR_0, FUNC_0(1));
  FUNC_1(VAR_2, VAR_3, "each_object", VAR_1, FUNC_0(1));
}
