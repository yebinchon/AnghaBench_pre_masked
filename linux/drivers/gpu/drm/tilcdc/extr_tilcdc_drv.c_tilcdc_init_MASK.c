
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * notifier_call; } ;
struct tilcdc_drm_private {int is_componentized; char const* max_bandwidth; char const* max_width; char const* max_pixelclock; int rev; scalar_t__ num_encoders; scalar_t__ num_connectors; int is_registered; int external_connector; TYPE_1__ freq_transition; void* num_pixelformats; void* pixelformats; struct drm_device* clk; int mmio; int wq; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct drm_driver {int dummy; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int VAR_7 ;
 int FUNC_3 (struct drm_device*) ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 int FUNC_4 (char*,int ) ;
 struct drm_device* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,struct drm_device*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int * VAR_11 ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*,int) ;
 struct tilcdc_drm_private* FUNC_10 (struct device*,int,int ) ;
 struct drm_device* FUNC_11 (struct drm_driver*,struct device*) ;
 int FUNC_12 (struct drm_device*,int ) ;
 int FUNC_13 (struct drm_device*,int) ;
 int FUNC_14 (struct drm_device*,int ) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_device*) ;
 int FUNC_18 (struct drm_device*,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct drm_device*) ;
 int FUNC_21 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_22 (struct device_node*,char*,char const**) ;
 int FUNC_23 (struct platform_device*,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,int ) ;
 int FUNC_25 (struct platform_device*,struct drm_device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (struct resource*) ;
 scalar_t__ FUNC_30 (char const*,char*) ;
 int FUNC_31 (struct drm_device*) ;
 int FUNC_32 (struct drm_device*) ;
 void* VAR_12 ;
 int FUNC_33 (struct drm_device*) ;
 int FUNC_34 (struct drm_device*) ;
 scalar_t__ FUNC_35 (struct device*,int *) ;
 void* VAR_13 ;
 int FUNC_36 (struct drm_device*,int ) ;
 void* VAR_14 ;
 void* VAR_15 ;
 struct platform_device* FUNC_37 (struct device*) ;

__attribute__((used)) static int FUNC_38(struct drm_driver *VAR_16, struct device *VAR_17)
{
 struct drm_device *VAR_18;
 struct platform_device *VAR_19 = FUNC_37(VAR_17);
 struct device_node *VAR_20 = VAR_17->of_node;
 struct tilcdc_drm_private *VAR_21;
 struct resource *VAR_22;
 u32 VAR_23 = 0;
 int VAR_24;

 VAR_21 = FUNC_10(VAR_17, sizeof(*VAR_21), VAR_5);
 if (!VAR_21)
  return -VAR_3;

 VAR_18 = FUNC_11(VAR_16, VAR_17);
 if (FUNC_2(VAR_18))
  return FUNC_3(VAR_18);

 VAR_18->dev_private = VAR_21;
 FUNC_25(VAR_19, VAR_18);
 FUNC_16(VAR_18);

 VAR_21->is_componentized =
  FUNC_35(VAR_17, ((void*)0)) > 0;

 VAR_21->wq = FUNC_4("tilcdc", 0);
 if (!VAR_21->wq) {
  VAR_24 = -VAR_3;
  goto init_failed;
 }

 VAR_22 = FUNC_24(VAR_19, VAR_6, 0);
 if (!VAR_22) {
  FUNC_8(VAR_17, "failed to get memory resource\n");
  VAR_24 = -VAR_1;
  goto init_failed;
 }

 VAR_21->mmio = FUNC_19(VAR_22->start, FUNC_29(VAR_22));
 if (!VAR_21->mmio) {
  FUNC_8(VAR_17, "failed to ioremap\n");
  VAR_24 = -VAR_3;
  goto init_failed;
 }

 VAR_21->clk = FUNC_5(VAR_17, "fck");
 if (FUNC_2(VAR_21->clk)) {
  FUNC_8(VAR_17, "failed to get functional clock\n");
  VAR_24 = -VAR_2;
  goto init_failed;
 }

 if (FUNC_22(VAR_20, "max-bandwidth", &VAR_21->max_bandwidth))
  VAR_21->max_bandwidth = VAR_8;

 FUNC_1("Maximum Bandwidth Value %d", VAR_21->max_bandwidth);

 if (FUNC_22(VAR_20, "max-width", &VAR_21->max_width))
  VAR_21->max_width = VAR_10;

 FUNC_1("Maximum Horizontal Pixel Width Value %dpixels", VAR_21->max_width);

 if (FUNC_22(VAR_20, "max-pixelclock",
     &VAR_21->max_pixelclock))
  VAR_21->max_pixelclock = VAR_9;

 FUNC_1("Maximum Pixel Clock Value %dKHz", VAR_21->max_pixelclock);

 FUNC_26(VAR_17);


 FUNC_27(VAR_17);
 switch (FUNC_36(VAR_18, VAR_7)) {
 case 0x4c100102:
  VAR_21->rev = 1;
  break;
 case 0x4f200800:
 case 0x4f201000:
  VAR_21->rev = 2;
  break;
 default:
  FUNC_9(VAR_17, "Unknown PID Reg value 0x%08x, "
   "defaulting to LCD revision 1\n",
   FUNC_36(VAR_18, VAR_7));
  VAR_21->rev = 1;
  break;
 }

 FUNC_28(VAR_17);

 if (VAR_21->rev == 1) {
  FUNC_1("Revision 1 LCDC supports only RGB565 format");
  VAR_21->pixelformats = VAR_14;
  VAR_21->num_pixelformats = FUNC_0(VAR_14);
  VAR_23 = 16;
 } else {
  const char *VAR_25 = "\0";

  FUNC_21(VAR_20, "blue-and-red-wiring", &VAR_25);
  if (0 == FUNC_30(VAR_25, "crossed")) {
   FUNC_1("Configured for crossed blue and red wires");
   VAR_21->pixelformats = VAR_12;
   VAR_21->num_pixelformats =
    FUNC_0(VAR_12);
   VAR_23 = 32;
  } else if (0 == FUNC_30(VAR_25, "straight")) {
   FUNC_1("Configured for straight blue and red wires");
   VAR_21->pixelformats = VAR_15;
   VAR_21->num_pixelformats =
    FUNC_0(VAR_15);
   VAR_23 = 16;
  } else {
   FUNC_1("Blue and red wiring '%s' unknown, use legacy mode",
       VAR_25);
   VAR_21->pixelformats = VAR_13;
   VAR_21->num_pixelformats =
    FUNC_0(VAR_13);
   VAR_23 = 16;
  }
 }

 VAR_24 = FUNC_33(VAR_18);
 if (VAR_24 < 0) {
  FUNC_8(VAR_17, "failed to create crtc\n");
  goto init_failed;
 }
 FUNC_20(VAR_18);
 if (VAR_21->is_componentized) {
  VAR_24 = FUNC_6(VAR_17, VAR_18);
  if (VAR_24 < 0)
   goto init_failed;

  VAR_24 = FUNC_31(VAR_18);
  if (VAR_24 < 0)
   goto init_failed;
 } else {
  VAR_24 = FUNC_32(VAR_18);
  if (VAR_24)
   goto init_failed;
 }

 if (!VAR_21->external_connector &&
     ((VAR_21->num_encoders == 0) || (VAR_21->num_connectors == 0))) {
  FUNC_8(VAR_17, "no encoders/connectors found\n");
  VAR_24 = -VAR_4;
  goto init_failed;
 }

 VAR_24 = FUNC_18(VAR_18, 1);
 if (VAR_24 < 0) {
  FUNC_8(VAR_17, "failed to initialize vblank\n");
  goto init_failed;
 }

 VAR_24 = FUNC_14(VAR_18, FUNC_23(VAR_19, 0));
 if (VAR_24 < 0) {
  FUNC_8(VAR_17, "failed to install IRQ handler\n");
  goto init_failed;
 }

 FUNC_17(VAR_18);

 FUNC_15(VAR_18);

 VAR_24 = FUNC_12(VAR_18, 0);
 if (VAR_24)
  goto init_failed;

 FUNC_13(VAR_18, VAR_23);

 VAR_21->is_registered = 1;
 return 0;

init_failed:
 FUNC_34(VAR_18);

 return VAR_24;
}
