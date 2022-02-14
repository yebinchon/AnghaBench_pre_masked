
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct arcpgu_drm_private {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arcpgu_drm_private*,int ) ;
 int FUNC_1 (struct arcpgu_drm_private*,int ,int) ;
 int FUNC_2 (int ) ;
 struct arcpgu_drm_private* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_2,
           struct drm_crtc_state *VAR_3)
{
 struct arcpgu_drm_private *VAR_4 = FUNC_3(VAR_2);

 FUNC_2(VAR_4->clk);
 FUNC_1(VAR_4, VAR_1,
        FUNC_0(VAR_4, VAR_1) |
        VAR_0);
}
