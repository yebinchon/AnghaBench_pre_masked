
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_crtc_state {int manually_updated; int rotation; int zpos; } ;
struct drm_plane_state {int rotation; int zpos; } ;
struct drm_crtc_state {int state; TYPE_1__* gamma_lut; scalar_t__ color_mgmt_changed; } ;
struct drm_crtc {int primary; } ;
struct drm_color_lut {int dummy; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 struct drm_plane_state* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct omap_crtc_state* FUNC_2 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_3(struct drm_crtc *VAR_1,
    struct drm_crtc_state *VAR_2)
{
 struct drm_plane_state *VAR_3;

 if (VAR_2->color_mgmt_changed && VAR_2->gamma_lut) {
  unsigned int VAR_4 = VAR_2->gamma_lut->length /
   sizeof(struct drm_color_lut);

  if (VAR_4 < 2)
   return -VAR_0;
 }

 VAR_3 = FUNC_0(VAR_2->state, VAR_1->primary);
 if (VAR_3) {
  struct omap_crtc_state *VAR_5 =
   FUNC_2(VAR_2);


  VAR_5->zpos = VAR_3->zpos;
  VAR_5->rotation = VAR_3->rotation;


  VAR_5->manually_updated = FUNC_1(VAR_1);
 }

 return 0;
}
