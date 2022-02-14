
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct radeon_crtc* FUNC_2 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->dev;
 struct radeon_device *VAR_10 = VAR_9->dev_private;
 struct radeon_crtc *VAR_11 = FUNC_2(VAR_8);
 u32 VAR_12;

 switch (VAR_11->crtc_id) {
 case 0:
  VAR_12 = FUNC_0(VAR_4);
  VAR_12 &= ~VAR_5;
  FUNC_1(VAR_4, VAR_12);
  break;
 case 1:
  VAR_12 = FUNC_0(VAR_2);
  VAR_12 &= ~VAR_3;
  FUNC_1(VAR_2, VAR_12);
  FUNC_1(VAR_6, FUNC_0(VAR_0));
  FUNC_1(VAR_7, FUNC_0(VAR_1));
  break;
 }
}
