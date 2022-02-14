
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdlcd_drm_private {int clk; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct hdlcd_drm_private* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct hdlcd_drm_private*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_1,
         struct drm_crtc_state *VAR_2)
{
 struct hdlcd_drm_private *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3->clk);
 FUNC_3(VAR_1);
 FUNC_4(VAR_3, VAR_0, 1);
 FUNC_2(VAR_1);
}
