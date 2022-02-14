
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_firmware {int dummy; } ;
struct raspberrypi_clk {int cpufreq; struct rpi_firmware* firmware; struct device* dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct raspberrypi_clk* FUNC_1 (struct device*,int,int ) ;
 struct device_node* FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device*,char*,int,int *,int ) ;
 int FUNC_5 (struct platform_device*,struct raspberrypi_clk*) ;
 int FUNC_6 (struct raspberrypi_clk*) ;
 int FUNC_7 (struct raspberrypi_clk*) ;
 struct rpi_firmware* FUNC_8 (struct device_node*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct device_node *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;
 struct rpi_firmware *VAR_7;
 struct raspberrypi_clk *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_2(((void*)0), ((void*)0),
     "raspberrypi,bcm2835-firmware");
 if (!VAR_5) {
  FUNC_0(VAR_6, "Missing firmware node\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_8(VAR_5);
 FUNC_3(VAR_5);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = VAR_6;
 VAR_8->firmware = VAR_7;
 FUNC_5(VAR_4, VAR_8);

 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9) {
  FUNC_0(VAR_6, "Failed to initialize pllb, %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8->cpufreq = FUNC_4(VAR_6, "raspberrypi-cpufreq",
           -1, ((void*)0), 0);

 return 0;
}
