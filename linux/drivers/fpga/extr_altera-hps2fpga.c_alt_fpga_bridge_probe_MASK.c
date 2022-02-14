
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct fpga_bridge {int dummy; } ;
struct altera_hps2fpga_data {int clk; int name; int l3reg; scalar_t__ remap_mask; int bridge_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct altera_hps2fpga_data*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,char*) ;
 int FUNC_7 (struct device*,char*,int) ;
 int FUNC_8 (struct device*,int *) ;
 struct fpga_bridge* FUNC_9 (struct device*,int ,int *,struct altera_hps2fpga_data*) ;
 int FUNC_10 (struct fpga_bridge*) ;
 struct of_device_id* FUNC_11 (int ,struct device*) ;
 int FUNC_12 (int ,char*,int*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct platform_device*,struct fpga_bridge*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct altera_hps2fpga_data *VAR_7;
 const struct of_device_id *VAR_8;
 struct fpga_bridge *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_8 = FUNC_11(VAR_3, VAR_6);
 if (!VAR_8) {
  FUNC_5(VAR_6, "failed to match device\n");
  return -VAR_1;
 }

 VAR_7 = (struct altera_hps2fpga_data *)VAR_8->data;

 VAR_7->bridge_reset = FUNC_13(VAR_6->of_node,
             0);
 if (FUNC_0(VAR_7->bridge_reset)) {
  FUNC_5(VAR_6, "Could not get %s reset control\n", VAR_7->name);
  return FUNC_1(VAR_7->bridge_reset);
 }

 if (VAR_7->remap_mask) {
  VAR_7->l3reg = FUNC_15("altr,l3regs");
  if (FUNC_0(VAR_7->l3reg)) {
   FUNC_5(VAR_6, "regmap for altr,l3regs lookup failed\n");
   return FUNC_1(VAR_7->l3reg);
  }
 }

 VAR_7->clk = FUNC_8(VAR_6, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_5(VAR_6, "no clock specified\n");
  return FUNC_1(VAR_7->clk);
 }

 VAR_11 = FUNC_4(VAR_7->clk);
 if (VAR_11) {
  FUNC_5(VAR_6, "could not enable clock\n");
  return -VAR_0;
 }

 if (!FUNC_12(VAR_6->of_node, "bridge-enable", &VAR_10)) {
  if (VAR_10 > 1) {
   FUNC_7(VAR_6, "invalid bridge-enable %u > 1\n", VAR_10);
  } else {
   FUNC_6(VAR_6, "%s bridge\n",
     (VAR_10 ? "enabling" : "disabling"));

   VAR_11 = FUNC_2(VAR_7, VAR_10);
   if (VAR_11)
    goto err;
  }
 }

 VAR_9 = FUNC_9(VAR_6, VAR_7->name,
         &VAR_4, VAR_7);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto err;
 }

 FUNC_14(VAR_5, VAR_9);

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11)
  goto err;

 return 0;

err:
 FUNC_3(VAR_7->clk);

 return VAR_11;
}
