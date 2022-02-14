
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct pl111_drm_dev_private {int * variant; int variant_display_disable; int variant_display_enable; int ctrl; int ienb; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef enum versatile_clcd { ____Placeholder_versatile_clcd } versatile_clcd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;







 int FUNC_2 (struct device*,char*) ;
 struct regmap* FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*) ;
 struct platform_device* FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int *,int ,struct of_device_id const**) ;
 int FUNC_7 (struct device_node*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct device*,struct pl111_drm_dev_private*,struct regmap*) ;
 int FUNC_9 (struct platform_device*) ;
 struct regmap* FUNC_10 (struct device_node*) ;
 int VAR_12 ;
 struct regmap* VAR_13 ;
 int FUNC_11 () ;

int FUNC_12(struct device *VAR_14, struct pl111_drm_dev_private *VAR_15)
{
 const struct of_device_id *VAR_16;
 enum versatile_clcd VAR_17;
 struct device_node *VAR_18;
 struct regmap *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_6(((void*)0), VAR_12,
          &VAR_16);
 if (!VAR_18) {

  return 0;
 }
 VAR_17 = (enum versatile_clcd)VAR_16->data;


 if (VAR_17 == 128) {
  struct platform_device *VAR_21;


  VAR_20 = FUNC_11();
  if (VAR_20) {
   FUNC_2(VAR_14, "unable to initialize muxfpga driver\n");
   FUNC_7(VAR_18);
   return VAR_20;
  }


  VAR_21 = FUNC_5(VAR_18);
  if (!VAR_21) {
   FUNC_2(VAR_14, "can't find the sysreg device, deferring\n");
   FUNC_7(VAR_18);
   return -VAR_2;
  }
  VAR_19 = FUNC_3(&VAR_21->dev);
  if (!VAR_19) {
   FUNC_2(VAR_14, "sysreg has not yet probed\n");
   FUNC_9(VAR_21);
   FUNC_7(VAR_18);
   return -VAR_2;
  }
 } else {
  VAR_19 = FUNC_10(VAR_18);
 }
 FUNC_7(VAR_18);

 if (FUNC_0(VAR_19)) {
  FUNC_2(VAR_14, "no Versatile syscon regmap\n");
  return FUNC_1(VAR_19);
 }

 switch (VAR_17) {
 case 135:
  VAR_13 = VAR_19;
  VAR_15->variant = &VAR_3;
  VAR_15->variant_display_enable = VAR_5;
  FUNC_4(VAR_14, "set up callbacks for Integrator PL110\n");
  break;
 case 129:
  VAR_13 = VAR_19;

  VAR_15->variant = &VAR_4;
  VAR_15->variant_display_enable = VAR_10;
  VAR_15->variant_display_disable = VAR_9;





  VAR_15->ienb = VAR_1;
  VAR_15->ctrl = VAR_0;
  FUNC_4(VAR_14, "set up callbacks for Versatile PL110\n");
  break;
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_13 = VAR_19;
  VAR_15->variant = &VAR_6;
  VAR_15->variant_display_enable = VAR_8;
  VAR_15->variant_display_disable = VAR_7;
  FUNC_4(VAR_14, "set up callbacks for RealView PL111\n");
  break;
 case 128:
  VAR_15->variant = &VAR_11;
  FUNC_4(VAR_14, "initializing Versatile Express PL111\n");
  VAR_20 = FUNC_8(VAR_14, VAR_15, VAR_19);
  if (VAR_20)
   return VAR_20;
  break;
 default:
  FUNC_4(VAR_14, "unknown Versatile system controller\n");
  break;
 }

 return 0;
}
