
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nregs; int regs; int * base; } ;
struct vc4_v3d {TYPE_1__ regset; int * clk; struct vc4_dev* vc4; int * regs; struct platform_device* pdev; } ;
struct vc4_dev {struct vc4_v3d* v3d; } ;
struct platform_device {int dev; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,char*,int) ;
 struct drm_device* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct vc4_v3d*) ;
 int * FUNC_10 (struct device*,int *) ;
 struct vc4_v3d* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (struct drm_device*,int ) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*,int) ;
 int FUNC_17 (struct device*) ;
 struct platform_device* FUNC_18 (struct device*) ;
 struct vc4_dev* FUNC_19 (struct drm_device*) ;
 int VAR_9 ;
 int FUNC_20 (struct drm_device*,char*,int ,int *) ;
 int FUNC_21 (struct drm_device*,char*,TYPE_1__*) ;
 int * FUNC_22 (struct platform_device*,int ) ;
 int VAR_10 ;
 int FUNC_23 (struct drm_device*) ;

__attribute__((used)) static int FUNC_24(struct device *VAR_11, struct device *VAR_12, void *VAR_13)
{
 struct platform_device *VAR_14 = FUNC_18(VAR_11);
 struct drm_device *VAR_15 = FUNC_8(VAR_12);
 struct vc4_dev *VAR_16 = FUNC_19(VAR_15);
 struct vc4_v3d *VAR_17 = ((void*)0);
 int VAR_18;

 VAR_17 = FUNC_11(&VAR_14->dev, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 FUNC_9(VAR_11, VAR_17);

 VAR_17->pdev = VAR_14;

 VAR_17->regs = FUNC_22(VAR_14, 0);
 if (FUNC_2(VAR_17->regs))
  return FUNC_3(VAR_17->regs);
 VAR_17->regset.base = VAR_17->regs;
 VAR_17->regset.regs = VAR_9;
 VAR_17->regset.nregs = FUNC_0(VAR_9);

 VAR_16->v3d = VAR_17;
 VAR_17->vc4 = VAR_16;

 VAR_17->clk = FUNC_10(VAR_11, ((void*)0));
 if (FUNC_2(VAR_17->clk)) {
  int VAR_19 = FUNC_3(VAR_17->clk);

  if (VAR_19 == -VAR_1) {

   VAR_19 = 0;
   VAR_17->clk = ((void*)0);
  } else {
   if (VAR_19 != -VAR_3)
    FUNC_7(VAR_11, "Failed to get V3D clock: %d\n",
     VAR_19);
   return VAR_19;
  }
 }

 if (FUNC_4(VAR_8) != VAR_7) {
  FUNC_1("V3D_IDENT0 read 0x%08x instead of 0x%08x\n",
     FUNC_4(VAR_8), VAR_7);
  return -VAR_0;
 }

 VAR_18 = FUNC_6(VAR_17->clk);
 if (VAR_18 != 0)
  return VAR_18;




 FUNC_5(VAR_5, 0);
 FUNC_5(VAR_6, 0);

 FUNC_23(VAR_15);

 VAR_18 = FUNC_12(VAR_15, FUNC_13(VAR_14, 0));
 if (VAR_18) {
  FUNC_1("Failed to install IRQ handler\n");
  return VAR_18;
 }

 FUNC_15(VAR_11);
 FUNC_17(VAR_11);
 FUNC_16(VAR_11, 40);
 FUNC_14(VAR_11);

 FUNC_20(VAR_15, "v3d_ident", VAR_10, ((void*)0));
 FUNC_21(VAR_15, "v3d_regs", &VAR_17->regset);

 return 0;
}
