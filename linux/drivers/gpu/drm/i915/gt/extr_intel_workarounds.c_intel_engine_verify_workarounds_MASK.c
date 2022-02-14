
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int wa_list; int kernel_context; } ;


 int FUNC_0 (int ,int *,char const*) ;

int FUNC_1(struct intel_engine_cs *VAR_0,
        const char *VAR_1)
{
 return FUNC_0(VAR_0->kernel_context,
         &VAR_0->wa_list,
         VAR_1);
}
