
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {char* compatible; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,struct of_device_id const*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static void FUNC_3(void)
{
 static const struct of_device_id VAR_0[] = {
  { .compatible = "nvidia,tegra30-ahb", },
  { }
 };
 struct device_node *VAR_1;

 VAR_1 = FUNC_0(((void*)0), VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
 }
}
