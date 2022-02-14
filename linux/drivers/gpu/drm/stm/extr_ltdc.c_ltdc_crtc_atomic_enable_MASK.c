
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltdc_device {int regs; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ltdc_device* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_10,
        struct drm_crtc_state *VAR_11)
{
 struct ltdc_device *VAR_12 = FUNC_1(VAR_10);

 FUNC_0("\n");


 FUNC_4(VAR_12->regs, VAR_5, VAR_0);


 FUNC_3(VAR_12->regs, VAR_7, VAR_3 | VAR_2 | VAR_4);


 FUNC_3(VAR_12->regs, VAR_8, VAR_9);


 FUNC_3(VAR_12->regs, VAR_6, VAR_1);

 FUNC_2(VAR_10);
}
