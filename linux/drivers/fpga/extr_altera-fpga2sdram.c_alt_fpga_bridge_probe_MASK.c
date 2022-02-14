
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct fpga_bridge {int dummy; } ;
struct alt_fpga2sdram_data {char* mask; struct regmap* sdrctl; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 int FUNC_2 (struct alt_fpga2sdram_data*,int) ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,char*) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct fpga_bridge* FUNC_6 (struct device*,int ,int *,struct alt_fpga2sdram_data*) ;
 struct alt_fpga2sdram_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct fpga_bridge*) ;
 int FUNC_9 (struct fpga_bridge*) ;
 int FUNC_10 (int ,char*,int*) ;
 int FUNC_11 (struct platform_device*,struct fpga_bridge*) ;
 int FUNC_12 (struct regmap*,int ,char**) ;
 void* FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct alt_fpga2sdram_data *VAR_7;
 struct fpga_bridge *VAR_8;
 u32 VAR_9;
 struct regmap *VAR_10;
 int VAR_11 = 0;

 VAR_7 = FUNC_7(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_6;

 VAR_7->sdrctl = FUNC_13("altr,sdr-ctl");
 if (FUNC_0(VAR_7->sdrctl)) {
  FUNC_3(VAR_6, "regmap for altr,sdr-ctl lookup failed.\n");
  return FUNC_1(VAR_7->sdrctl);
 }

 VAR_10 = FUNC_13("altr,sys-mgr");
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_6, "regmap for altr,sys-mgr lookup failed.\n");
  return FUNC_1(VAR_10);
 }


 FUNC_12(VAR_10, VAR_3, &VAR_7->mask);

 VAR_8 = FUNC_6(VAR_6, VAR_1,
         &VAR_4, VAR_7);
 if (!VAR_8)
  return -VAR_0;

 FUNC_11(VAR_5, VAR_8);

 VAR_11 = FUNC_8(VAR_8);
 if (VAR_11)
  return VAR_11;

 FUNC_4(VAR_6, "driver initialized with handoff %08x\n", VAR_7->mask);

 if (!FUNC_10(VAR_6->of_node, "bridge-enable", &VAR_9)) {
  if (VAR_9 > 1) {
   FUNC_5(VAR_6, "invalid bridge-enable %u > 1\n", VAR_9);
  } else {
   FUNC_4(VAR_6, "%s bridge\n",
     (VAR_9 ? "enabling" : "disabling"));
   VAR_11 = FUNC_2(VAR_7, VAR_9);
   if (VAR_11) {
    FUNC_9(VAR_8);
    return VAR_11;
   }
  }
 }

 return VAR_11;
}
