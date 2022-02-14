
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int regs; } ;
struct drm_device {int dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ltdc_device* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_8,
         struct drm_crtc_state *VAR_9)
{
 struct ltdc_device *VAR_10 = FUNC_1(VAR_8);
 struct drm_device *VAR_11 = VAR_8->dev;

 FUNC_0("\n");

 FUNC_2(VAR_8);


 FUNC_4(VAR_10->regs, VAR_4, VAR_0);


 FUNC_4(VAR_10->regs, VAR_5, VAR_2 | VAR_1 | VAR_3);


 FUNC_5(VAR_10->regs, VAR_6, VAR_7);

 FUNC_3(VAR_11->dev);
}
