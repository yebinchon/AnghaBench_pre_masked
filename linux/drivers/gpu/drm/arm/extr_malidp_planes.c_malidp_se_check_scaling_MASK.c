
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct malidp_plane {TYPE_1__* layer; } ;
struct malidp_crtc_state {int scaled_planes_mask; } ;
struct drm_plane_state {int rotation; int src_h; int src_w; int crtc_w; int crtc_h; int crtc; int state; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct drm_crtc_state* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;
 struct malidp_crtc_state* FUNC_2 (struct drm_crtc_state*) ;

__attribute__((used)) static int FUNC_3(struct malidp_plane *VAR_5,
       struct drm_plane_state *VAR_6)
{
 struct drm_crtc_state *VAR_7 =
  FUNC_0(VAR_6->state, VAR_6->crtc);
 struct malidp_crtc_state *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_2(VAR_7);

 VAR_11 = FUNC_1(VAR_6, VAR_7,
        0, VAR_3, 1, 1);
 if (VAR_11)
  return VAR_11;

 if (VAR_6->rotation & VAR_4) {
  VAR_9 = VAR_6->src_h >> 16;
  VAR_10 = VAR_6->src_w >> 16;
 } else {
  VAR_9 = VAR_6->src_w >> 16;
  VAR_10 = VAR_6->src_h >> 16;
 }

 if ((VAR_6->crtc_w == VAR_9) && (VAR_6->crtc_h == VAR_10)) {

  VAR_8->scaled_planes_mask &= ~(VAR_5->layer->id);
  return 0;
 }

 if (VAR_5->layer->id & (VAR_1 | VAR_0))
  return -VAR_2;

 VAR_8->scaled_planes_mask |= VAR_5->layer->id;

 return 0;
}
