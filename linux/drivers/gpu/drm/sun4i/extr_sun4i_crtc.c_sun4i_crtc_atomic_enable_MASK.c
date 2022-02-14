
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_crtc {int tcon; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*) ;
 struct sun4i_crtc* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 struct drm_encoder* FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int ,struct drm_encoder*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0,
         struct drm_crtc_state *VAR_1)
{
 struct drm_encoder *VAR_2 = FUNC_3(VAR_0);
 struct sun4i_crtc *VAR_3 = FUNC_1(VAR_0);

 FUNC_0("Enabling the CRTC\n");

 FUNC_4(VAR_3->tcon, VAR_2, 1);

 FUNC_2(VAR_0);
}
