
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_crtc_state {int pending_config; int pending_vrefresh; int pending_height; int pending_width; } ;
struct TYPE_2__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct drm_crtc {TYPE_1__ mode; int state; } ;


 struct mtk_crtc_state* FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0)
{
 struct mtk_crtc_state *VAR_1 = FUNC_0(VAR_0->state);

 VAR_1->pending_width = VAR_0->mode.hdisplay;
 VAR_1->pending_height = VAR_0->mode.vdisplay;
 VAR_1->pending_vrefresh = VAR_0->mode.vrefresh;
 FUNC_1();
 VAR_1->pending_config = 1;
}
