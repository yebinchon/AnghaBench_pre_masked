
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mga_device {scalar_t__ type; } ;
struct drm_device {struct mga_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->dev;
 struct mga_device *VAR_10 = VAR_9->dev_private;
 u8 VAR_11;



 FUNC_1(VAR_5, 0x11);
 VAR_11 = FUNC_0(VAR_4);
 FUNC_2(0x11, VAR_11 | 0x80);

 if (VAR_10->type == VAR_1 || VAR_10->type == VAR_2) {
  FUNC_3(0, 1);
  FUNC_5(50);
  FUNC_3(1, 0x20);
  FUNC_5(20);
 } else {
  FUNC_1(VAR_7, 0x1);
  VAR_11 = FUNC_0(VAR_6);


  FUNC_3(0, 1);
  FUNC_3(1, VAR_11 | 0x20);
 }

 if (VAR_10->type == VAR_3 || VAR_10->type == VAR_0)
  FUNC_4(VAR_8);

 FUNC_2(17, 0);
}
