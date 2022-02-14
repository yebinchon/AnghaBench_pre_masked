
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ active; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_digital_port {int infoframes_enabled; int set_infoframes; int read_infoframe; int write_infoframe; TYPE_3__ lspcon; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct drm_i915_private* FUNC_5 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

void FUNC_6(struct intel_digital_port *VAR_24)
{
 struct drm_i915_private *VAR_25 =
  FUNC_5(VAR_24->base.base.dev);

 if (FUNC_4(VAR_25) || FUNC_2(VAR_25)) {
  VAR_24->write_infoframe = VAR_23;
  VAR_24->read_infoframe = VAR_21;
  VAR_24->set_infoframes = VAR_22;
  VAR_24->infoframes_enabled = VAR_20;
 } else if (FUNC_3(VAR_25)) {
  VAR_24->write_infoframe = VAR_7;
  VAR_24->read_infoframe = VAR_5;
  VAR_24->set_infoframes = VAR_6;
  VAR_24->infoframes_enabled = VAR_4;
 } else if (FUNC_0(VAR_25)) {
  if (VAR_24->lspcon.active) {
   VAR_24->write_infoframe = VAR_19;
   VAR_24->read_infoframe = VAR_17;
   VAR_24->set_infoframes = VAR_18;
   VAR_24->infoframes_enabled = VAR_16;
  } else {
   VAR_24->write_infoframe = VAR_11;
   VAR_24->read_infoframe = VAR_9;
   VAR_24->set_infoframes = VAR_10;
   VAR_24->infoframes_enabled = VAR_8;
  }
 } else if (FUNC_1(VAR_25)) {
  VAR_24->write_infoframe = VAR_15;
  VAR_24->read_infoframe = VAR_13;
  VAR_24->set_infoframes = VAR_14;
  VAR_24->infoframes_enabled = VAR_12;
 } else {
  VAR_24->write_infoframe = VAR_3;
  VAR_24->read_infoframe = VAR_1;
  VAR_24->set_infoframes = VAR_2;
  VAR_24->infoframes_enabled = VAR_0;
 }
}
