
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder {int devices; int active_device; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {TYPE_1__* pdev; struct radeon_device* dev_private; } ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 struct radeon_crtc* FUNC_5 (int ) ;
 struct radeon_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_7(struct drm_encoder *VAR_12,
         struct drm_display_mode *VAR_13)
{
 struct drm_device *VAR_14 = VAR_12->dev;
 struct radeon_device *VAR_15 = VAR_14->dev_private;
 struct radeon_encoder *VAR_16 = FUNC_6(VAR_12);
 struct radeon_crtc *VAR_17 = FUNC_5(VAR_12->crtc);


 if ((VAR_14->pdev->device == 0x71C5) &&
     (VAR_14->pdev->subsystem_vendor == 0x106b) &&
     (VAR_14->pdev->subsystem_device == 0x0080)) {
  if (VAR_16->devices & VAR_0) {
   uint32_t VAR_18 = FUNC_3(VAR_4);

   VAR_18 &= ~VAR_6;
   VAR_18 &= ~VAR_5;

   FUNC_4(VAR_4, VAR_18);
  }
 }


 if (FUNC_0(VAR_15) &&
     (!(VAR_16->active_device & (VAR_1)))) {
  if (FUNC_2(VAR_15)) {
   if (VAR_13->flags & VAR_9)
    FUNC_4(VAR_8 + VAR_17->crtc_offset,
           VAR_7);
   else
    FUNC_4(VAR_8 + VAR_17->crtc_offset, 0);
  } else if (FUNC_1(VAR_15)) {
   if (VAR_13->flags & VAR_9)
    FUNC_4(VAR_10 + VAR_17->crtc_offset,
           VAR_11);
   else
    FUNC_4(VAR_10 + VAR_17->crtc_offset, 0);
  } else {
   if (VAR_13->flags & VAR_9)
    FUNC_4(VAR_2 + VAR_17->crtc_offset,
           VAR_3);
   else
    FUNC_4(VAR_2 + VAR_17->crtc_offset, 0);
  }
 }
}
