
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {int crtc_h; int crtc_w; scalar_t__ visible; } ;
struct intel_plane_state {int ctl; TYPE_2__ base; } ;
struct TYPE_7__ {void* base; void* size; void* cntl; } ;
struct TYPE_5__ {int dev; } ;
struct intel_plane {int pipe; TYPE_3__ cursor; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct drm_i915_private {TYPE_4__ uncore; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct intel_crtc_state const*) ;
 void* FUNC_8 (struct intel_plane_state const*) ;
 void* FUNC_9 (struct intel_plane_state const*) ;
 int FUNC_10 (struct intel_plane*,struct intel_crtc_state const*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct intel_plane *VAR_1,
          const struct intel_crtc_state *VAR_2,
          const struct intel_plane_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_13(VAR_1->base.dev);
 enum pipe VAR_5 = VAR_1->pipe;
 u32 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 unsigned long VAR_10;

 if (VAR_3 && VAR_3->base.visible) {
  VAR_6 = VAR_3->ctl |
   FUNC_7(VAR_2);

  if (VAR_3->base.crtc_h != VAR_3->base.crtc_w)
   VAR_9 = VAR_0 | (VAR_3->base.crtc_h - 1);

  VAR_7 = FUNC_8(VAR_3);
  VAR_8 = FUNC_9(VAR_3);
 }

 FUNC_11(&VAR_4->uncore.lock, VAR_10);
 if (FUNC_6(VAR_4) >= 9)
  FUNC_10(VAR_1, VAR_2);

 if (VAR_1->cursor.base != VAR_7 ||
     VAR_1->cursor.size != VAR_9 ||
     VAR_1->cursor.cntl != VAR_6) {
  if (FUNC_4(VAR_4))
   FUNC_5(FUNC_3(VAR_5), VAR_9);
  FUNC_5(FUNC_1(VAR_5), VAR_6);
  FUNC_5(FUNC_2(VAR_5), VAR_8);
  FUNC_5(FUNC_0(VAR_5), VAR_7);

  VAR_1->cursor.base = VAR_7;
  VAR_1->cursor.size = VAR_9;
  VAR_1->cursor.cntl = VAR_6;
 } else {
  FUNC_5(FUNC_2(VAR_5), VAR_8);
  FUNC_5(FUNC_0(VAR_5), VAR_7);
 }

 FUNC_12(&VAR_4->uncore.lock, VAR_10);
}
