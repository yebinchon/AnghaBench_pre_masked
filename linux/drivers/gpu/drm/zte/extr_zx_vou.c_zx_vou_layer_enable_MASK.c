
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zx_vou_hw {scalar_t__ osd; scalar_t__ vouctl; } ;
struct zx_plane {struct vou_layer_bits* bits; } ;
struct zx_crtc {scalar_t__ chn_type; struct zx_vou_hw* vou; } ;
struct vou_layer_bits {int enable; int clksel; int chnsel; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_2__ {int crtc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct zx_crtc* FUNC_0 (int ) ;
 struct zx_plane* FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

void FUNC_3(struct drm_plane *VAR_3)
{
 struct zx_crtc *VAR_4 = FUNC_0(VAR_3->state->crtc);
 struct zx_vou_hw *VAR_5 = VAR_4->vou;
 struct zx_plane *VAR_6 = FUNC_1(VAR_3);
 const struct vou_layer_bits *VAR_7 = VAR_6->bits;

 if (VAR_4->chn_type == VAR_1) {
  FUNC_2(VAR_5->osd + VAR_0, VAR_7->chnsel, 0);
  FUNC_2(VAR_5->vouctl + VAR_2, VAR_7->clksel, 0);
 } else {
  FUNC_2(VAR_5->osd + VAR_0, VAR_7->chnsel,
          VAR_7->chnsel);
  FUNC_2(VAR_5->vouctl + VAR_2, VAR_7->clksel,
          VAR_7->clksel);
 }

 FUNC_2(VAR_5->osd + VAR_0, VAR_7->enable, VAR_7->enable);
}
