
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct property {int length; int * value; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct cpufreq_frequency_table {int frequency; } ;
typedef int __be32 ;
struct TYPE_2__ {int clk; struct cpufreq_frequency_table* freq_tbl; int transition_latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct cpufreq_frequency_table* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct cpufreq_frequency_table*) ;
 struct device_node* FUNC_8 (int ) ;
 struct property* FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (struct device_node*) ;
 scalar_t__ FUNC_11 (struct device_node*,char*,int *) ;
 int FUNC_12 (char*,...) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct device_node *VAR_8;
 const struct property *VAR_9;
 struct cpufreq_frequency_table *VAR_10;
 const __be32 *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_8 = FUNC_8(0);
 if (!VAR_8) {
  FUNC_12("No cpu node found\n");
  return -VAR_2;
 }

 if (FUNC_11(VAR_8, "clock-latency",
    &VAR_5.transition_latency))
  VAR_5.transition_latency = VAR_0;

 VAR_9 = FUNC_9(VAR_8, "cpufreq_tbl", ((void*)0));
 if (!VAR_9 || !VAR_9->value) {
  FUNC_12("Invalid cpufreq_tbl\n");
  VAR_14 = -VAR_2;
  goto out_put_node;
 }

 VAR_12 = VAR_9->length / sizeof(u32);
 VAR_11 = VAR_9->value;

 VAR_10 = FUNC_6(VAR_12 + 1, sizeof(*VAR_10), VAR_4);
 if (!VAR_10) {
  VAR_14 = -VAR_3;
  goto out_put_node;
 }

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  VAR_10[VAR_13].frequency = FUNC_2(VAR_11++);

 VAR_10[VAR_13].frequency = VAR_1;

 VAR_5.freq_tbl = VAR_10;

 FUNC_10(VAR_8);

 VAR_5.clk = FUNC_3(((void*)0), "cpu_clk");
 if (FUNC_0(VAR_5.clk)) {
  FUNC_12("Unable to get CPU clock\n");
  VAR_14 = FUNC_1(VAR_5.clk);
  goto out_put_mem;
 }

 VAR_14 = FUNC_5(&VAR_6);
 if (!VAR_14)
  return 0;

 FUNC_12("failed register driver: %d\n", VAR_14);
 FUNC_4(VAR_5.clk);

out_put_mem:
 FUNC_7(VAR_10);
 return VAR_14;

out_put_node:
 FUNC_10(VAR_8);
 return VAR_14;
}
