
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gma_crtc {scalar_t__ pipe; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 struct gma_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_10,
          struct drm_display_mode *VAR_11,
          struct drm_display_mode *VAR_12)
{

 struct drm_device *VAR_13 = VAR_10->dev;
 struct drm_crtc *VAR_14 = VAR_10->crtc;
 struct gma_crtc *VAR_15 = FUNC_2(VAR_14);
 int VAR_16;
 u32 VAR_17, VAR_18;
 u32 VAR_19;

 if (VAR_15->pipe == 0)
  VAR_16 = VAR_5;
 else
  VAR_16 = VAR_6;

 VAR_19 = VAR_0;





 {
  VAR_18 = FUNC_0(VAR_16);
  FUNC_1(VAR_16,
      VAR_18 & ~VAR_7);
 }

 VAR_17 = 0;
 if (VAR_12->flags & VAR_8)
  VAR_17 |= VAR_1;
 if (VAR_12->flags & VAR_9)
  VAR_17 |= VAR_4;

 if (VAR_15->pipe == 0)
  VAR_17 |= VAR_2;
 else
  VAR_17 |= VAR_3;

 FUNC_1(VAR_19, VAR_17);
}
