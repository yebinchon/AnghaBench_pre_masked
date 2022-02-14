
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int type; } ;
struct vc4_dpi_encoder {TYPE_1__ base; struct vc4_dpi* dpi; } ;
struct TYPE_4__ {int nregs; int regs; void* base; } ;
struct vc4_dpi {void* core_clock; int * encoder; TYPE_2__ regset; void* pixel_clock; void* regs; struct platform_device* pdev; } ;
struct vc4_dev {struct vc4_dpi* dpi; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int VAR_7 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct device*,char*,scalar_t__,scalar_t__) ;
 struct drm_device* FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,struct vc4_dpi*) ;
 void* FUNC_10 (struct device*,char*) ;
 void* FUNC_11 (struct device*,int,int ) ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct drm_device*,int *,int *,int ,int *) ;
 struct platform_device* FUNC_15 (struct device*) ;
 struct vc4_dev* FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_device*,char*,TYPE_2__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (struct vc4_dpi*) ;
 void* FUNC_19 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_20(struct device *VAR_11, struct device *VAR_12, void *VAR_13)
{
 struct platform_device *VAR_14 = FUNC_15(VAR_11);
 struct drm_device *VAR_15 = FUNC_8(VAR_12);
 struct vc4_dev *VAR_16 = FUNC_16(VAR_15);
 struct vc4_dpi *VAR_17;
 struct vc4_dpi_encoder *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_11(VAR_11, sizeof(*VAR_17), VAR_6);
 if (!VAR_17)
  return -VAR_4;

 VAR_18 = FUNC_11(VAR_11, sizeof(*VAR_18),
           VAR_6);
 if (!VAR_18)
  return -VAR_4;
 VAR_18->base.type = VAR_7;
 VAR_18->dpi = VAR_17;
 VAR_17->encoder = &VAR_18->base.base;

 VAR_17->pdev = VAR_14;
 VAR_17->regs = FUNC_19(VAR_14, 0);
 if (FUNC_3(VAR_17->regs))
  return FUNC_4(VAR_17->regs);
 VAR_17->regset.base = VAR_17->regs;
 VAR_17->regset.regs = VAR_8;
 VAR_17->regset.nregs = FUNC_0(VAR_8);

 if (FUNC_1(VAR_0) != VAR_1) {
  FUNC_7(VAR_11, "Port returned 0x%08x for ID instead of 0x%08x\n",
   FUNC_1(VAR_0), VAR_1);
  return -VAR_3;
 }

 VAR_17->core_clock = FUNC_10(VAR_11, "core");
 if (FUNC_3(VAR_17->core_clock)) {
  VAR_19 = FUNC_4(VAR_17->core_clock);
  if (VAR_19 != -VAR_5)
   FUNC_2("Failed to get core clock: %d\n", VAR_19);
  return VAR_19;
 }
 VAR_17->pixel_clock = FUNC_10(VAR_11, "pixel");
 if (FUNC_3(VAR_17->pixel_clock)) {
  VAR_19 = FUNC_4(VAR_17->pixel_clock);
  if (VAR_19 != -VAR_5)
   FUNC_2("Failed to get pixel clock: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_6(VAR_17->core_clock);
 if (VAR_19)
  FUNC_2("Failed to turn on core clock: %d\n", VAR_19);

 FUNC_14(VAR_15, VAR_17->encoder, &VAR_9,
    VAR_2, ((void*)0));
 FUNC_13(VAR_17->encoder, &VAR_10);

 VAR_19 = FUNC_18(VAR_17);
 if (VAR_19)
  goto err_destroy_encoder;

 FUNC_9(VAR_11, VAR_17);

 VAR_16->dpi = VAR_17;

 FUNC_17(VAR_15, "dpi_regs", &VAR_17->regset);

 return 0;

err_destroy_encoder:
 FUNC_12(VAR_17->encoder);
 FUNC_5(VAR_17->core_clock);
 return VAR_19;
}
