
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_load_detect_pipe {int dummy; } ;
struct intel_encoder {int power_domain; } ;
struct intel_crt {struct intel_encoder base; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_5__ {int id; } ;
struct drm_connector {int status; TYPE_2__* state; int name; TYPE_1__ base; int dev; } ;
typedef int intel_wakeref_t ;
struct TYPE_8__ {scalar_t__ load_detect_test; } ;
struct TYPE_7__ {int pipe; } ;
struct TYPE_6__ {int crtc; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__ VAR_3 ;
 struct intel_crt* FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct intel_crt*,int ) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*,int ) ;
 int FUNC_10 (struct drm_i915_private*,int ,int ) ;
 int FUNC_11 (struct drm_connector*,int *,struct intel_load_detect_pipe*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_12 (struct drm_connector*,struct intel_load_detect_pipe*,struct drm_modeset_acquire_ctx*) ;
 int VAR_4 ;
 struct drm_i915_private* FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct drm_connector *VAR_5,
   struct drm_modeset_acquire_ctx *VAR_6,
   bool VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_13(VAR_5->dev);
 struct intel_crt *VAR_9 = FUNC_4(VAR_5);
 struct intel_encoder *VAR_10 = &VAR_9->base;
 intel_wakeref_t VAR_11;
 int VAR_12, VAR_13;
 struct intel_load_detect_pipe VAR_14;

 FUNC_0("[CONNECTOR:%d:%s] force=%d\n",
        VAR_5->base.id, VAR_5->name,
        VAR_7);

 if (VAR_3.load_detect_test) {
  VAR_11 = FUNC_9(VAR_8,
        VAR_10->power_domain);
  goto load_detect;
 }


 if (FUNC_3(VAR_4))
  return VAR_1;

 VAR_11 = FUNC_9(VAR_8,
       VAR_10->power_domain);

 if (FUNC_1(VAR_8)) {




  if (FUNC_6(VAR_5)) {
   FUNC_0("CRT detected via hotplug\n");
   VAR_12 = VAR_0;
   goto out;
  } else
   FUNC_0("CRT not detected via hotplug\n");
 }

 if (FUNC_5(VAR_5)) {
  VAR_12 = VAR_0;
  goto out;
 }





 if (FUNC_1(VAR_8)) {
  VAR_12 = VAR_1;
  goto out;
 }

load_detect:
 if (!VAR_7) {
  VAR_12 = VAR_5->status;
  goto out;
 }


 VAR_13 = FUNC_11(VAR_5, ((void*)0), &VAR_14, VAR_6);
 if (VAR_13 > 0) {
  if (FUNC_5(VAR_5))
   VAR_12 = VAR_0;
  else if (FUNC_2(VAR_8) < 4)
   VAR_12 = FUNC_7(VAR_9,
    FUNC_14(VAR_5->state->crtc)->pipe);
  else if (VAR_3.load_detect_test)
   VAR_12 = VAR_1;
  else
   VAR_12 = VAR_2;
  FUNC_12(VAR_5, &VAR_14, VAR_6);
 } else if (VAR_13 == 0) {
  VAR_12 = VAR_2;
 } else {
  VAR_12 = VAR_13;
 }

out:
 FUNC_10(VAR_8, VAR_10->power_domain, VAR_11);





 FUNC_8(VAR_8);

 return VAR_12;
}
