
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int,char*) ;
 struct device_node* FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (struct device_node*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct device_node *VAR_1 = FUNC_1(((void*)0), ((void*)0),
        "snps,dw-apb-wdg");
 if (FUNC_0(!VAR_1, "unable to setup watchdog restart"))
  return;

 VAR_0 = FUNC_2(VAR_1, 0);
 FUNC_0(!VAR_0, "failed to remap watchdog regs");
}
