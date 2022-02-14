
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mga_device {int suspended; } ;
struct drm_device {struct mga_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct mga_device*) ;
 int FUNC_7 (struct mga_device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_4, int VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct mga_device *VAR_7 = VAR_6->dev_private;
 u8 VAR_8 = 0, VAR_9 = 0;

 switch (VAR_5) {
 case 130:
  VAR_8 = 0;
  VAR_9 = 0;
  FUNC_3(VAR_4);
  break;
 case 129:
  VAR_8 = 0x20;
  VAR_9 = 0x10;
  break;
 case 128:
  VAR_8 = 0x20;
  VAR_9 = 0x20;
  break;
 case 131:
  VAR_8 = 0x20;
  VAR_9 = 0x30;
  break;
 }






 FUNC_1(VAR_3, 0x01);
 VAR_8 |= FUNC_0(VAR_2) & ~0x20;
 FUNC_7(VAR_7);
 FUNC_6(VAR_7);
 FUNC_1(VAR_2, VAR_8);
 FUNC_8(20);
 FUNC_1(VAR_1, 0x01);
 VAR_9 |= FUNC_0(VAR_0) & ~0x30;
 FUNC_1(VAR_0, VAR_9);







}
