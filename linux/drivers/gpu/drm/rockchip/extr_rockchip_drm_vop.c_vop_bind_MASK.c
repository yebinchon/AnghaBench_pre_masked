
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_data {int feature; int win_size; } ;
struct vop {unsigned int irq; int rgb; struct drm_device* drm_dev; int crtc; struct vop_data const* data; int vop_lock; int irq_lock; int reg_lock; void* regsbak; int len; int regs; struct device* dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,struct vop*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int ,int ) ;
 int FUNC_7 (struct device*,unsigned int,int ,int ,int ,struct vop*) ;
 int FUNC_8 (int *) ;
 struct vop_data* FUNC_9 (struct device*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (struct device*,int *,struct drm_device*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct vop*,int ,int ) ;
 struct platform_device* FUNC_18 (struct device*) ;
 int FUNC_19 (struct vop*) ;
 int FUNC_20 (struct vop*) ;
 int FUNC_21 (struct vop*) ;
 int VAR_6 ;
 int FUNC_22 (struct vop*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_23(struct device *VAR_8, struct device *VAR_9, void *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_18(VAR_8);
 const struct vop_data *VAR_12;
 struct drm_device *VAR_13 = VAR_10;
 struct vop *VAR_14;
 struct resource *VAR_15;
 int VAR_16, VAR_17;

 VAR_12 = FUNC_9(VAR_8);
 if (!VAR_12)
  return -VAR_0;


 VAR_14 = FUNC_6(VAR_8, FUNC_17(VAR_14, VAR_7, VAR_12->win_size),
      VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->dev = VAR_8;
 VAR_14->data = VAR_12;
 VAR_14->drm_dev = VAR_13;
 FUNC_4(VAR_8, VAR_14);

 FUNC_22(VAR_14);

 VAR_15 = FUNC_11(VAR_11, VAR_3, 0);
 VAR_14->len = FUNC_14(VAR_15);
 VAR_14->regs = FUNC_5(VAR_8, VAR_15);
 if (FUNC_1(VAR_14->regs))
  return FUNC_2(VAR_14->regs);

 VAR_14->regsbak = FUNC_6(VAR_8, VAR_14->len, VAR_2);
 if (!VAR_14->regsbak)
  return -VAR_1;

 VAR_17 = FUNC_10(VAR_11, 0);
 if (VAR_17 < 0) {
  FUNC_0(VAR_8, "cannot find irq for vop\n");
  return VAR_17;
 }
 VAR_14->irq = (unsigned int)VAR_17;

 FUNC_16(&VAR_14->reg_lock);
 FUNC_16(&VAR_14->irq_lock);
 FUNC_8(&VAR_14->vop_lock);

 VAR_16 = FUNC_19(VAR_14);
 if (VAR_16)
  return VAR_16;

 FUNC_13(&VAR_11->dev);

 VAR_16 = FUNC_21(VAR_14);
 if (VAR_16 < 0) {
  FUNC_0(&VAR_11->dev,
         "cannot initial vop dev - err %d\n", VAR_16);
  goto err_disable_pm_runtime;
 }

 VAR_16 = FUNC_7(VAR_8, VAR_14->irq, VAR_6,
          VAR_4, FUNC_3(VAR_8), VAR_14);
 if (VAR_16)
  goto err_disable_pm_runtime;

 if (VAR_14->data->feature & VAR_5) {
  VAR_14->rgb = FUNC_15(VAR_8, &VAR_14->crtc, VAR_14->drm_dev);
  if (FUNC_1(VAR_14->rgb)) {
   VAR_16 = FUNC_2(VAR_14->rgb);
   goto err_disable_pm_runtime;
  }
 }

 return 0;

err_disable_pm_runtime:
 FUNC_12(&VAR_11->dev);
 FUNC_20(VAR_14);
 return VAR_16;
}
