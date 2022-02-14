
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int frequency; } ;
struct TYPE_3__ {void* cpu_clk; void* ddr_clk; void* powersave_clk; int * dev; void* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,struct resource*) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 void* FUNC_8 (struct device_node*,char*) ;
 struct device_node* FUNC_9 (int ) ;
 int FUNC_10 (struct device_node*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct device_node *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_4.dev = &VAR_5->dev;

 VAR_7 = FUNC_11(VAR_5, VAR_1, 0);
 VAR_4.base = FUNC_7(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_4.base))
  return FUNC_1(VAR_4.base);

 VAR_6 = FUNC_9(0);
 if (!VAR_6) {
  FUNC_6(&VAR_5->dev, "failed to get cpu device node\n");
  return -VAR_0;
 }

 VAR_4.cpu_clk = FUNC_8(VAR_6, "cpu_clk");
 if (FUNC_0(VAR_4.cpu_clk)) {
  FUNC_6(VAR_4.dev, "Unable to get cpuclk\n");
  VAR_8 = FUNC_1(VAR_4.cpu_clk);
  goto out_node;
 }

 VAR_8 = FUNC_4(VAR_4.cpu_clk);
 if (VAR_8) {
  FUNC_6(VAR_4.dev, "Unable to prepare cpuclk\n");
  goto out_node;
 }

 VAR_3[0].frequency = FUNC_3(VAR_4.cpu_clk) / 1000;

 VAR_4.ddr_clk = FUNC_8(VAR_6, "ddrclk");
 if (FUNC_0(VAR_4.ddr_clk)) {
  FUNC_6(VAR_4.dev, "Unable to get ddrclk\n");
  VAR_8 = FUNC_1(VAR_4.ddr_clk);
  goto out_cpu;
 }

 VAR_8 = FUNC_4(VAR_4.ddr_clk);
 if (VAR_8) {
  FUNC_6(VAR_4.dev, "Unable to prepare ddrclk\n");
  goto out_cpu;
 }
 VAR_3[1].frequency = FUNC_3(VAR_4.ddr_clk) / 1000;

 VAR_4.powersave_clk = FUNC_8(VAR_6, "powersave");
 if (FUNC_0(VAR_4.powersave_clk)) {
  FUNC_6(VAR_4.dev, "Unable to get powersave\n");
  VAR_8 = FUNC_1(VAR_4.powersave_clk);
  goto out_ddr;
 }
 VAR_8 = FUNC_4(VAR_4.powersave_clk);
 if (VAR_8) {
  FUNC_6(VAR_4.dev, "Unable to prepare powersave clk\n");
  goto out_ddr;
 }

 VAR_8 = FUNC_5(&VAR_2);
 if (VAR_8) {
  FUNC_6(VAR_4.dev, "Failed to register cpufreq driver\n");
  goto out_powersave;
 }

 FUNC_10(VAR_6);
 return 0;

out_powersave:
 FUNC_2(VAR_4.powersave_clk);
out_ddr:
 FUNC_2(VAR_4.ddr_clk);
out_cpu:
 FUNC_2(VAR_4.cpu_clk);
out_node:
 FUNC_10(VAR_6);

 return VAR_8;
}
