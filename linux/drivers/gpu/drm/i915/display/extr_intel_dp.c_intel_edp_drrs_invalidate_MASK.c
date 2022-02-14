
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ type; unsigned int busy_frontbuffer_bits; scalar_t__ refresh_rate_type; int mutex; TYPE_9__* dp; int work; } ;
struct drm_i915_private {TYPE_6__ drrs; } ;
struct drm_crtc {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_18__ {TYPE_5__* attached_connector; } ;
struct TYPE_10__ {struct drm_crtc* crtc; } ;
struct TYPE_11__ {TYPE_1__ base; } ;
struct TYPE_17__ {TYPE_2__ base; } ;
struct TYPE_16__ {int pipe; int config; } ;
struct TYPE_13__ {TYPE_3__* fixed_mode; } ;
struct TYPE_14__ {TYPE_4__ panel; } ;
struct TYPE_12__ {int vrefresh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_8__* FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_7__* FUNC_6 (struct drm_crtc*) ;

void FUNC_7(struct drm_i915_private *VAR_2,
          unsigned int VAR_3)
{
 struct drm_crtc *VAR_4;
 enum pipe VAR_5;

 if (VAR_2->drrs.type == VAR_1)
  return;

 FUNC_1(&VAR_2->drrs.work);

 FUNC_4(&VAR_2->drrs.mutex);
 if (!VAR_2->drrs.dp) {
  FUNC_5(&VAR_2->drrs.mutex);
  return;
 }

 VAR_4 = FUNC_2(VAR_2->drrs.dp)->base.base.crtc;
 VAR_5 = FUNC_6(VAR_4)->pipe;

 VAR_3 &= FUNC_0(VAR_5);
 VAR_2->drrs.busy_frontbuffer_bits |= VAR_3;


 if (VAR_3 && VAR_2->drrs.refresh_rate_type == VAR_0)
  FUNC_3(VAR_2, FUNC_6(VAR_4)->config,
   VAR_2->drrs.dp->attached_connector->panel.fixed_mode->vrefresh);

 FUNC_5(&VAR_2->drrs.mutex);
}
