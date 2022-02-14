
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nregs; int regs; scalar_t__ base; } ;
struct vc4_hvs {TYPE_1__ regset; int mitchell_netravali_filter; int lbm_mm; int dlist_mm; int mm_lock; scalar_t__ regs; scalar_t__ dlist; struct platform_device* pdev; } ;
struct vc4_dev {struct vc4_hvs* hvs; } ;
struct platform_device {int dev; } ;
struct drm_device {struct vc4_dev* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (int,int ) ;
 struct drm_device* FUNC_10 (struct device*) ;
 struct vc4_hvs* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (struct device*,int ,int ,int ,char*,struct drm_device*) ;
 int FUNC_13 (int *,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (struct platform_device*,int ) ;
 int FUNC_15 (int *) ;
 struct platform_device* FUNC_16 (struct device*) ;
 int FUNC_17 (struct drm_device*,char*,int ,int *) ;
 int FUNC_18 (struct drm_device*,char*,TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (struct vc4_hvs*,int *,int ) ;
 scalar_t__ FUNC_20 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_21(struct device *VAR_17, struct device *VAR_18, void *VAR_19)
{
 struct platform_device *VAR_20 = FUNC_16(VAR_17);
 struct drm_device *VAR_21 = FUNC_10(VAR_18);
 struct vc4_dev *VAR_22 = VAR_21->dev_private;
 struct vc4_hvs *VAR_23 = ((void*)0);
 int VAR_24;
 u32 VAR_25;

 VAR_23 = FUNC_11(&VAR_20->dev, sizeof(*VAR_23), VAR_1);
 if (!VAR_23)
  return -VAR_0;

 VAR_23->pdev = VAR_20;

 VAR_23->regs = FUNC_20(VAR_20, 0);
 if (FUNC_3(VAR_23->regs))
  return FUNC_4(VAR_23->regs);

 VAR_23->regset.base = VAR_23->regs;
 VAR_23->regset.regs = VAR_13;
 VAR_23->regset.nregs = FUNC_0(VAR_13);

 VAR_23->dlist = VAR_23->regs + VAR_12;

 FUNC_15(&VAR_23->mm_lock);






 FUNC_13(&VAR_23->dlist_mm,
      VAR_2,
      (VAR_11 >> 2) - VAR_2);






 FUNC_13(&VAR_23->lbm_mm, 0, 96 * 1024);




 VAR_24 = FUNC_19(VAR_23,
        &VAR_23->mitchell_netravali_filter,
        VAR_14);
 if (VAR_24)
  return VAR_24;

 VAR_22->hvs = VAR_23;

 VAR_25 = FUNC_1(VAR_3);

 VAR_25 |= VAR_7;
 VAR_25 |= FUNC_5(0) |
      FUNC_5(1) |
      FUNC_5(2);




 VAR_25 &= ~VAR_6;
 VAR_25 &= ~(VAR_4 |
        VAR_10 |
        VAR_9 |
        FUNC_6(0) |
        FUNC_6(1) |
        FUNC_6(2) |
        FUNC_7(0) |
        FUNC_7(1) |
        FUNC_7(2) |
        FUNC_8(0) |
        FUNC_8(1) |
        FUNC_8(2) |
        VAR_8);
 VAR_25 |= FUNC_9(2, VAR_5);

 FUNC_2(VAR_3, VAR_25);

 VAR_24 = FUNC_12(VAR_17, FUNC_14(VAR_20, 0),
          VAR_16, 0, "vc4 hvs", VAR_21);
 if (VAR_24)
  return VAR_24;

 FUNC_18(VAR_21, "hvs_regs", &VAR_23->regset);
 FUNC_17(VAR_21, "hvs_underrun", VAR_15,
        ((void*)0));

 return 0;
}
