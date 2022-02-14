
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_crtc {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_private {TYPE_1__ uncore; } ;
struct drm_display_mode {int private_flags; int crtc_htotal; int crtc_hsync_start; int crtc_vtotal; int crtc_vblank_start; int crtc_vblank_end; int flags; int crtc_clock; } ;
struct drm_device {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct intel_crtc*) ;
 struct intel_crtc* FUNC_9 (struct drm_i915_private*,unsigned int) ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_14 (struct drm_device*) ;

bool FUNC_15(struct drm_device *VAR_4, unsigned int VAR_5,
         bool VAR_6, int *VAR_7, int *VAR_8,
         ktime_t *VAR_9, ktime_t *VAR_10,
         const struct drm_display_mode *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_14(VAR_4);
 struct intel_crtc *VAR_13 = FUNC_9(VAR_12,
        VAR_5);
 int VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned long VAR_20;
 bool VAR_21 = FUNC_3(VAR_12) >= 5 ||
  FUNC_4(VAR_12) || FUNC_5(VAR_12, 2) ||
  VAR_11->private_flags & VAR_1;

 if (FUNC_7(!VAR_11->crtc_clock)) {
  FUNC_1("trying to get scanoutpos for disabled "
     "pipe %c\n", FUNC_11(VAR_5));
  return 0;
 }

 VAR_18 = VAR_11->crtc_htotal;
 VAR_17 = VAR_11->crtc_hsync_start;
 VAR_19 = VAR_11->crtc_vtotal;
 VAR_15 = VAR_11->crtc_vblank_start;
 VAR_16 = VAR_11->crtc_vblank_end;

 if (VAR_11->flags & VAR_0) {
  VAR_15 = FUNC_0(VAR_15, 2);
  VAR_16 /= 2;
  VAR_19 /= 2;
 }






 FUNC_12(&VAR_12->uncore.lock, VAR_20);




 if (VAR_9)
  *VAR_9 = FUNC_10();

 if (VAR_21) {



  VAR_14 = FUNC_8(VAR_13);
 } else {




  VAR_14 = (FUNC_2(FUNC_6(VAR_5)) & VAR_2) >> VAR_3;


  VAR_15 *= VAR_18;
  VAR_16 *= VAR_18;
  VAR_19 *= VAR_18;
  if (VAR_14 >= VAR_19)
   VAR_14 = VAR_19 - 1;
  VAR_14 = (VAR_14 + VAR_18 - VAR_17) % VAR_19;
 }


 if (VAR_10)
  *VAR_10 = FUNC_10();



 FUNC_13(&VAR_12->uncore.lock, VAR_20);







 if (VAR_14 >= VAR_15)
  VAR_14 -= VAR_16;
 else
  VAR_14 += VAR_19 - VAR_16;

 if (VAR_21) {
  *VAR_7 = VAR_14;
  *VAR_8 = 0;
 } else {
  *VAR_7 = VAR_14 / VAR_18;
  *VAR_8 = VAR_14 - (*VAR_7 * VAR_18);
 }

 return 1;
}
