
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {scalar_t__ osd; } ;
struct zx_plane {struct vou_layer_bits* bits; } ;
struct zx_crtc {struct zx_vou_hw* vou; } ;
struct vou_layer_bits {int enable; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct zx_crtc* FUNC_0 (int ) ;
 struct zx_plane* FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

void FUNC_3(struct drm_plane *VAR_1,
     struct drm_plane_state *VAR_2)
{
 struct zx_crtc *VAR_3 = FUNC_0(VAR_2->crtc);
 struct zx_vou_hw *VAR_4 = VAR_3->vou;
 struct zx_plane *VAR_5 = FUNC_1(VAR_1);
 const struct vou_layer_bits *VAR_6 = VAR_5->bits;

 FUNC_2(VAR_4->osd + VAR_0, VAR_6->enable, 0);
}
