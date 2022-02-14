
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_tv {int dummy; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int irq_lock; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector {int polled; struct drm_device* dev; TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_crtc* crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (struct drm_i915_private*,int ,int) ;
 int FUNC_7 (struct drm_i915_private*,int ,int) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct drm_i915_private* FUNC_11 (struct drm_device*) ;
 struct intel_crtc* FUNC_12 (struct drm_crtc*) ;

__attribute__((used)) static int
FUNC_13(struct intel_tv *VAR_27,
        struct drm_connector *VAR_28)
{
 struct drm_crtc *VAR_29 = VAR_28->state->crtc;
 struct intel_crtc *VAR_30 = FUNC_12(VAR_29);
 struct drm_device *VAR_31 = VAR_28->dev;
 struct drm_i915_private *VAR_32 = FUNC_11(VAR_31);
 u32 VAR_33, VAR_34;
 u32 VAR_35, VAR_36;
 int VAR_37;


 if (VAR_28->polled & VAR_7) {
  FUNC_9(&VAR_32->irq_lock);
  FUNC_6(VAR_32, 0,
          VAR_11 |
          VAR_12);
  FUNC_10(&VAR_32->irq_lock);
 }

 VAR_36 = VAR_35 = FUNC_1(VAR_22);
 VAR_34 = VAR_33 = FUNC_1(VAR_21);


 VAR_33 &= ~(VAR_23 | VAR_24 | VAR_25);
 VAR_33 |= VAR_26;
 VAR_33 |= FUNC_5(VAR_30->pipe);

 VAR_35 &= ~(VAR_19 | VAR_1 | VAR_3 | VAR_6);
 VAR_35 |= (VAR_20 |
     VAR_14 |
     VAR_16 |
     VAR_18 |
     VAR_4 |
     VAR_0 |
     VAR_2 |
     VAR_5);






 if (FUNC_3(VAR_32))
  VAR_35 &= ~(VAR_20 | VAR_14 |
       VAR_16 | VAR_18);

 FUNC_2(VAR_21, VAR_33);
 FUNC_2(VAR_22, VAR_35);
 FUNC_4(VAR_22);

 FUNC_8(VAR_32, VAR_30->pipe);

 VAR_37 = -1;
 VAR_35 = FUNC_1(VAR_22);
 FUNC_0("TV detected: %x, %x\n", VAR_33, VAR_35);






 if ((VAR_35 & VAR_19) == (VAR_15 | VAR_17)) {
  FUNC_0("Detected Composite TV connection\n");
  VAR_37 = VAR_9;
 } else if ((VAR_35 & (VAR_13|VAR_15)) == VAR_13) {
  FUNC_0("Detected S-Video TV connection\n");
  VAR_37 = VAR_10;
 } else if ((VAR_35 & VAR_19) == 0) {
  FUNC_0("Detected Component TV connection\n");
  VAR_37 = VAR_8;
 } else {
  FUNC_0("Unrecognised TV connection\n");
  VAR_37 = -1;
 }

 FUNC_2(VAR_22, VAR_36 & ~VAR_20);
 FUNC_2(VAR_21, VAR_34);
 FUNC_4(VAR_21);


 FUNC_8(VAR_32, VAR_30->pipe);


 if (VAR_28->polled & VAR_7) {
  FUNC_9(&VAR_32->irq_lock);
  FUNC_7(VAR_32, 0,
         VAR_11 |
         VAR_12);
  FUNC_10(&VAR_32->irq_lock);
 }

 return VAR_37;
}
