
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rot_variant {int num_formats; int formats; } ;
struct rot_context {int clock; int regs; struct device* dev; int num_formats; int formats; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,struct resource*) ;
 struct rot_context* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,int ,int ,struct rot_context*) ;
 struct rot_variant* FUNC_9 (struct device*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct rot_context*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*,int ) ;
 int FUNC_17 (struct device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct resource *VAR_8;
 struct rot_context *VAR_9;
 const struct rot_variant *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_7(VAR_7, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_9(VAR_7);
 VAR_9->formats = VAR_10->formats;
 VAR_9->num_formats = VAR_10->num_formats;
 VAR_9->dev = VAR_7;
 VAR_8 = FUNC_11(VAR_6, VAR_2, 0);
 VAR_9->regs = FUNC_6(VAR_7, VAR_8);
 if (FUNC_0(VAR_9->regs))
  return FUNC_1(VAR_9->regs);

 VAR_11 = FUNC_10(VAR_6, 0);
 if (VAR_11 < 0) {
  FUNC_3(VAR_7, "failed to get irq\n");
  return VAR_11;
 }

 VAR_12 = FUNC_8(VAR_7, VAR_11, VAR_5, 0, FUNC_4(VAR_7),
          VAR_9);
 if (VAR_12 < 0) {
  FUNC_3(VAR_7, "failed to request irq\n");
  return VAR_12;
 }

 VAR_9->clock = FUNC_5(VAR_7, "rotator");
 if (FUNC_0(VAR_9->clock)) {
  FUNC_3(VAR_7, "failed to get clock\n");
  return FUNC_1(VAR_9->clock);
 }

 FUNC_17(VAR_7);
 FUNC_16(VAR_7, VAR_3);
 FUNC_15(VAR_7);
 FUNC_12(VAR_6, VAR_9);

 VAR_12 = FUNC_2(VAR_7, &VAR_4);
 if (VAR_12)
  goto err_component;

 return 0;

err_component:
 FUNC_14(VAR_7);
 FUNC_13(VAR_7);
 return VAR_12;
}
