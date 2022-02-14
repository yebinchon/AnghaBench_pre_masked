
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_5__ {int vram_start; } ;
struct radeon_device {TYPE_2__ mc; } ;
struct radeon_crtc {int legacy_display_base_addr; int crtc_id; int crtc_offset; } ;
struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int* pitches; struct drm_gem_object** obj; TYPE_3__* format; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {TYPE_1__* primary; struct drm_device* dev; } ;
struct TYPE_6__ {int* cpp; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
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
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 struct radeon_bo* FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_bo*,int*,int *) ;
 int FUNC_9 (struct radeon_bo*,int ,int,int*) ;
 int FUNC_10 (struct radeon_bo*,int) ;
 unsigned long FUNC_11 (struct radeon_bo*) ;
 int FUNC_12 (struct radeon_bo*) ;
 int FUNC_13 (struct radeon_bo*) ;
 struct radeon_crtc* FUNC_14 (struct drm_crtc*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct drm_crtc *VAR_18,
    struct drm_framebuffer *VAR_19,
    int VAR_20, int VAR_21, int VAR_22)
{
 struct drm_device *VAR_23 = VAR_18->dev;
 struct radeon_device *VAR_24 = VAR_23->dev_private;
 struct radeon_crtc *VAR_25 = FUNC_14(VAR_18);
 struct drm_framebuffer *VAR_26;
 struct drm_gem_object *VAR_27;
 struct radeon_bo *VAR_28;
 uint64_t VAR_29;
 uint32_t VAR_30, VAR_31, VAR_32 = 0;
 uint32_t VAR_33, VAR_34;
 uint32_t VAR_35;
 int VAR_36;
 uint32_t VAR_37, VAR_38;
 int VAR_39;

 FUNC_2("\n");

 if (!VAR_22 && !VAR_18->primary->fb) {
  FUNC_2("No FB bound\n");
  return 0;
 }

 if (VAR_22)
  VAR_26 = VAR_19;
 else
  VAR_26 = VAR_18->primary->fb;

 switch (VAR_26->format->cpp[0] * 8) {
 case 8:
  VAR_36 = 2;
  break;
 case 15:
  VAR_36 = 3;
  break;
 case 16:
  VAR_36 = 4;
  break;
 case 24:
  VAR_36 = 5;
  break;
 case 32:
  VAR_36 = 6;
  break;
 default:
  return 0;
 }


 VAR_27 = VAR_26->obj[0];
 VAR_28 = FUNC_6(VAR_27);
retry:
 VAR_39 = FUNC_10(VAR_28, 0);
 if (FUNC_15(VAR_39 != 0))
  return VAR_39;

 VAR_39 = FUNC_9(VAR_28, VAR_15, 1 << 27,
         &VAR_29);
 if (FUNC_15(VAR_39 != 0)) {
  FUNC_13(VAR_28);
  if (!VAR_22 && VAR_19 && VAR_19 != VAR_18->primary->fb) {
   struct radeon_bo *VAR_40;
   unsigned long VAR_41, VAR_42;

   VAR_40 = FUNC_6(VAR_19->obj[0]);
   VAR_42 = FUNC_11(VAR_40);
   VAR_41 = FUNC_11(VAR_28);
   if (VAR_41 <= VAR_42 && !FUNC_10(VAR_40, 0)) {
    FUNC_12(VAR_40);
    FUNC_13(VAR_40);
    VAR_19 = ((void*)0);
    goto retry;
   }
  }
  return -VAR_0;
 }
 FUNC_8(VAR_28, &VAR_35, ((void*)0));
 FUNC_13(VAR_28);
 if (VAR_35 & VAR_17)
  FUNC_3("trying to scanout microtiled buffer\n");



 VAR_25->legacy_display_base_addr = VAR_24->mc.vram_start;

 VAR_29 -= VAR_25->legacy_display_base_addr;

 VAR_31 = 0;

 VAR_34 = VAR_26->pitches[0] / VAR_26->format->cpp[0];
 VAR_33 = FUNC_1(VAR_34 * VAR_26->format->cpp[0] * 8,
      VAR_26->format->cpp[0] * 8 * 8);
 VAR_33 |= VAR_33 << 16;

 VAR_31 |= VAR_8;
 if (VAR_35 & VAR_16) {
  if (FUNC_0(VAR_24))
   VAR_31 |= (VAR_5 |
          VAR_3 |
          VAR_2);
  else
   VAR_31 |= VAR_12;
 } else {
  if (FUNC_0(VAR_24))
   VAR_31 &= ~(VAR_5 |
           VAR_3 |
           VAR_2);
  else
   VAR_31 &= ~VAR_12;
 }

 if (VAR_35 & VAR_16) {
  if (FUNC_0(VAR_24)) {
   VAR_32 = VAR_20 | (VAR_21 << 16);
   VAR_29 &= ~0x7ff;
  } else {
   int VAR_43 = VAR_26->format->cpp[0] * 8 >> 4;
   int VAR_44 = (((VAR_21 >> 3) * VAR_34 + VAR_20) >> (8 - VAR_43)) << 11;
   VAR_29 += VAR_44 + ((VAR_20 << VAR_43) % 256) + ((VAR_21 % 8) << 8);
   VAR_31 |= (VAR_21 % 16);
  }
 } else {
  int VAR_45 = VAR_21 * VAR_34 + VAR_20;
  switch (VAR_26->format->cpp[0] * 8) {
  case 8:
   VAR_45 *= 1;
   break;
  case 15:
  case 16:
   VAR_45 *= 2;
   break;
  case 24:
   VAR_45 *= 3;
   break;
  case 32:
   VAR_45 *= 4;
   break;
  default:
   return 0;
  }
  VAR_29 += VAR_45;
 }

 VAR_29 &= ~7;

 if (VAR_25->crtc_id == 1)
  VAR_37 = VAR_6;
 else
  VAR_37 = VAR_7;

 VAR_38 = FUNC_4(VAR_37);
 VAR_38 &= ~(0xf << 8);
 VAR_38 |= (VAR_36 << 8);
 VAR_38 &= ~VAR_13;
 FUNC_5(VAR_37, VAR_38);

 VAR_30 = (u32)VAR_29;

 FUNC_5(VAR_14 + VAR_25->crtc_offset, VAR_25->legacy_display_base_addr);

 if (FUNC_0(VAR_24)) {
  if (VAR_25->crtc_id)
   FUNC_5(VAR_1, VAR_32);
  else
   FUNC_5(VAR_4, VAR_32);
 }
 FUNC_5(VAR_10 + VAR_25->crtc_offset, VAR_31);
 FUNC_5(VAR_9 + VAR_25->crtc_offset, VAR_30);
 FUNC_5(VAR_11 + VAR_25->crtc_offset, VAR_33);

 if (!VAR_22 && VAR_19 && VAR_19 != VAR_18->primary->fb) {
  VAR_28 = FUNC_6(VAR_19->obj[0]);
  VAR_39 = FUNC_10(VAR_28, 0);
  if (FUNC_15(VAR_39 != 0))
   return VAR_39;
  FUNC_12(VAR_28);
  FUNC_13(VAR_28);
 }


 FUNC_7(VAR_24);

 return 0;
}
