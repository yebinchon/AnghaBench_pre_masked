
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tv {int regs; } ;
struct sun4i_crtc {int engine; } ;
struct drm_encoder {int crtc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sun4i_crtc* FUNC_1 (int ) ;
 struct sun4i_tv* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_2)
{
 struct sun4i_tv *VAR_3 = FUNC_2(VAR_2);
 struct sun4i_crtc *VAR_4 = FUNC_1(VAR_2->crtc);

 FUNC_0("Enabling the TV Output\n");

 FUNC_4(VAR_4->engine);

 FUNC_3(VAR_3->regs, VAR_1,
      VAR_0,
      VAR_0);
}
