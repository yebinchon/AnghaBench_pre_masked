
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder {scalar_t__ rmx_type; int pixel_clock; } ;
struct radeon_device {scalar_t__ family; scalar_t__ is_atom_bios; } ;
struct radeon_crtc {scalar_t__ crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {TYPE_1__* pdev; struct radeon_device* dev_private; } ;
struct TYPE_2__ {int device; int subsystem_vendor; int subsystem_device; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
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
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (struct drm_encoder*,scalar_t__) ;
 int FUNC_6 (struct drm_encoder*,scalar_t__) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_encoder*) ;
 struct radeon_crtc* FUNC_9 (int ) ;
 struct radeon_encoder* FUNC_10 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_11(struct drm_encoder *VAR_15,
         struct drm_display_mode *VAR_16,
         struct drm_display_mode *VAR_17)
{
 struct drm_device *VAR_18 = VAR_15->dev;
 struct radeon_device *VAR_19 = VAR_18->dev_private;
 struct radeon_crtc *VAR_20 = FUNC_9(VAR_15->crtc);
 struct radeon_encoder *VAR_21 = FUNC_10(VAR_15);
 uint32_t VAR_22;

 FUNC_1("\n");

 if (VAR_19->is_atom_bios) {
  VAR_21->pixel_clock = VAR_17->clock;
  FUNC_4(VAR_15, VAR_0);
  VAR_22 = FUNC_2(VAR_9);
 } else {
  VAR_22 = FUNC_2(VAR_9);

  if (1)
   VAR_22 |= VAR_12;
  else
   VAR_22 &= ~VAR_12;

  VAR_22 &= ~(VAR_10 |
      VAR_7 |
      VAR_8);


  if (FUNC_0(VAR_19)) {
   if ((VAR_18->pdev->device == 0x4850) &&
       (VAR_18->pdev->subsystem_vendor == 0x1028) &&
       (VAR_18->pdev->subsystem_device == 0x2001))
    VAR_22 |= VAR_6;
   else
    VAR_22 |= VAR_11 | VAR_6;



  }
  if (!FUNC_7(VAR_15))
   FUNC_8(VAR_15);
 }

 if (VAR_20->crtc_id == 0) {
  if ((VAR_19->family == VAR_1) || FUNC_0(VAR_19)) {
   VAR_22 &= ~VAR_4;
   if (VAR_21->rmx_type != VAR_14)
    VAR_22 |= VAR_5;
   else
    VAR_22 |= VAR_2;
  } else
   VAR_22 &= ~VAR_13;
 } else {
  if ((VAR_19->family == VAR_1) || FUNC_0(VAR_19)) {
   VAR_22 &= ~VAR_4;
   VAR_22 |= VAR_3;
  } else
   VAR_22 |= VAR_13;
 }

 FUNC_3(VAR_9, VAR_22);

 if (VAR_19->is_atom_bios)
  FUNC_5(VAR_15, VAR_20->crtc_id);
 else
  FUNC_6(VAR_15, VAR_20->crtc_id);
}
