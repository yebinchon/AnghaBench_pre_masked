
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {unsigned int crtc_w; unsigned int crtc_h; scalar_t__ visible; } ;
struct intel_plane_state {scalar_t__ ctl; TYPE_2__ base; } ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ size; scalar_t__ cntl; } ;
struct TYPE_5__ {int dev; } ;
struct intel_plane {TYPE_3__ cursor; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct drm_i915_private {TYPE_4__ uncore; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct intel_crtc_state const*) ;
 scalar_t__ FUNC_5 (struct intel_plane_state const*) ;
 scalar_t__ FUNC_6 (struct intel_plane_state const*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_plane *VAR_2,
          const struct intel_crtc_state *VAR_3,
          const struct intel_plane_state *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_9(VAR_2->base.dev);
 u32 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 unsigned long VAR_10;

 if (VAR_4 && VAR_4->base.visible) {
  unsigned int VAR_11 = VAR_4->base.crtc_w;
  unsigned int VAR_12 = VAR_4->base.crtc_h;

  VAR_6 = VAR_4->ctl |
   FUNC_4(VAR_3);

  VAR_9 = (VAR_12 << 12) | VAR_11;

  VAR_7 = FUNC_5(VAR_4);
  VAR_8 = FUNC_6(VAR_4);
 }

 FUNC_7(&VAR_5->uncore.lock, VAR_10);




 if (VAR_2->cursor.base != VAR_7 ||
     VAR_2->cursor.size != VAR_9 ||
     VAR_2->cursor.cntl != VAR_6) {
  FUNC_3(FUNC_1(VAR_1), 0);
  FUNC_3(FUNC_0(VAR_1), VAR_7);
  FUNC_3(VAR_0, VAR_9);
  FUNC_3(FUNC_2(VAR_1), VAR_8);
  FUNC_3(FUNC_1(VAR_1), VAR_6);

  VAR_2->cursor.base = VAR_7;
  VAR_2->cursor.size = VAR_9;
  VAR_2->cursor.cntl = VAR_6;
 } else {
  FUNC_3(FUNC_2(VAR_1), VAR_8);
 }

 FUNC_8(&VAR_5->uncore.lock, VAR_10);
}
