
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int type; } ;
struct vc4_vec_encoder {TYPE_1__ base; struct vc4_vec* vec; } ;
struct TYPE_4__ {int nregs; int regs; int base; } ;
struct vc4_vec {int * encoder; TYPE_2__ regset; int connector; int clock; int regs; struct platform_device* pdev; } ;
struct vc4_dev {struct vc4_vec* vec; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 struct drm_device* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,struct vc4_vec*) ;
 int FUNC_6 (struct device*,int *) ;
 void* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct drm_device*,int *,int *,int ,int *) ;
 int FUNC_11 (struct drm_device*,int ,int ) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 struct platform_device* FUNC_14 (struct device*) ;
 struct vc4_dev* FUNC_15 (struct drm_device*) ;
 int VAR_5 ;
 int FUNC_16 (struct drm_device*,char*,TYPE_2__*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 int FUNC_18 (struct drm_device*,struct vc4_vec*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_19(struct device *VAR_9, struct device *VAR_10, void *VAR_11)
{
 struct platform_device *VAR_12 = FUNC_14(VAR_9);
 struct drm_device *VAR_13 = FUNC_4(VAR_10);
 struct vc4_dev *VAR_14 = FUNC_15(VAR_13);
 struct vc4_vec *VAR_15;
 struct vc4_vec_encoder *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_11(VAR_13, FUNC_0(VAR_5),
         VAR_5);
 if (VAR_17)
  return VAR_17;

 VAR_15 = FUNC_7(VAR_9, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_7(VAR_9, sizeof(*VAR_16),
           VAR_3);
 if (!VAR_16)
  return -VAR_1;
 VAR_16->base.type = VAR_4;
 VAR_16->vec = VAR_15;
 VAR_15->encoder = &VAR_16->base.base;

 VAR_15->pdev = VAR_12;
 VAR_15->regs = FUNC_17(VAR_12, 0);
 if (FUNC_2(VAR_15->regs))
  return FUNC_3(VAR_15->regs);
 VAR_15->regset.base = VAR_15->regs;
 VAR_15->regset.regs = VAR_8;
 VAR_15->regset.nregs = FUNC_0(VAR_8);

 VAR_15->clock = FUNC_6(VAR_9, ((void*)0));
 if (FUNC_2(VAR_15->clock)) {
  VAR_17 = FUNC_3(VAR_15->clock);
  if (VAR_17 != -VAR_2)
   FUNC_1("Failed to get clock: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_13(VAR_9);

 FUNC_10(VAR_13, VAR_15->encoder, &VAR_6,
    VAR_0, ((void*)0));
 FUNC_9(VAR_15->encoder, &VAR_7);

 VAR_15->connector = FUNC_18(VAR_13, VAR_15);
 if (FUNC_2(VAR_15->connector)) {
  VAR_17 = FUNC_3(VAR_15->connector);
  goto err_destroy_encoder;
 }

 FUNC_5(VAR_9, VAR_15);

 VAR_14->vec = VAR_15;

 FUNC_16(VAR_13, "vec_regs", &VAR_15->regset);

 return 0;

err_destroy_encoder:
 FUNC_8(VAR_15->encoder);
 FUNC_12(VAR_9);

 return VAR_17;
}
