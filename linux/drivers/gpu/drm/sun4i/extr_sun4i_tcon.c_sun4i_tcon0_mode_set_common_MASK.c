
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tcon {int regs; int dclk; } ;
struct drm_display_mode {int crtc_clock; int crtc_vdisplay; int crtc_hdisplay; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct sun4i_tcon *VAR_1,
     const struct drm_display_mode *VAR_2)
{

 FUNC_2(VAR_1->dclk, VAR_2->crtc_clock * 1000);


 FUNC_3(VAR_1->regs, VAR_0,
       FUNC_0(VAR_2->crtc_hdisplay) |
       FUNC_1(VAR_2->crtc_vdisplay));
}
