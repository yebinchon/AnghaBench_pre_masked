
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device_info {char* name; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct clk*,int *) ;
 struct device* FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 struct device_node* FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct platform_device_info*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(void)
{
 struct platform_device_info VAR_3 = { .name = "cpufreq-dt", };
 struct device *VAR_4;
 struct clk *VAR_5;
 struct device_node *VAR_6;
 int VAR_7;

 if ((!FUNC_5("calxeda,highbank")) &&
  (!FUNC_5("calxeda,ecx-2000")))
  return -VAR_0;

 VAR_4 = FUNC_4(0);
 if (!VAR_4) {
  FUNC_9("failed to get highbank cpufreq device\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_6(VAR_4->of_node);
 if (!VAR_6) {
  FUNC_9("failed to find highbank cpufreq node\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_2(VAR_4, ((void*)0));
 if (FUNC_0(VAR_5)) {
  VAR_7 = FUNC_1(VAR_5);
  FUNC_9("failed to get cpu0 clock: %d\n", VAR_7);
  goto out_put_node;
 }

 VAR_7 = FUNC_3(VAR_5, &VAR_2);
 if (VAR_7) {
  FUNC_9("failed to register clk notifier: %d\n", VAR_7);
  goto out_put_node;
 }


 FUNC_8(&VAR_3);

out_put_node:
 FUNC_7(VAR_6);
 return VAR_7;
}
