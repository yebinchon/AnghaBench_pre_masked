
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RData {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_data_type ;


 struct RClass* FUNC_0 (int ) ;
 struct RData* FUNC_1 (int *,struct RClass*,void*,int const*) ;
 int FUNC_2 (struct RData*) ;

mrb_value FUNC_3(mrb_state *VAR_0, mrb_value VAR_1, void *VAR_2, const mrb_data_type *VAR_3)
{
    struct RClass *VAR_4 = FUNC_0(VAR_1);
    struct RData *VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
    return FUNC_2(VAR_5);
}
