
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_plane_state {scalar_t__* x_scaling; scalar_t__* y_scaling; int crtc_h; int * src_h; int crtc_w; int * src_w; } ;
struct drm_plane_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct vc4_plane_state* FUNC_0 (struct drm_plane_state*) ;
 int FUNC_1 (struct vc4_plane_state*,int) ;
 int FUNC_2 (struct vc4_plane_state*,int ,int ) ;
 int FUNC_3 (struct vc4_plane_state*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct drm_plane_state *VAR_2,
      int VAR_3)
{
 struct vc4_plane_state *VAR_4 = FUNC_0(VAR_2);


 if (VAR_4->x_scaling[VAR_3] == VAR_0) {
  FUNC_2(VAR_4,
         VAR_4->src_w[VAR_3], VAR_4->crtc_w);
 }


 if (VAR_4->y_scaling[VAR_3] == VAR_0) {
  FUNC_2(VAR_4,
         VAR_4->src_h[VAR_3], VAR_4->crtc_h);
  FUNC_1(VAR_4, 0xc0c0c0c0);
 }


 if (VAR_4->x_scaling[VAR_3] == VAR_1) {
  FUNC_3(VAR_4,
         VAR_4->src_w[VAR_3], VAR_4->crtc_w);
 }


 if (VAR_4->y_scaling[VAR_3] == VAR_1) {
  FUNC_3(VAR_4,
         VAR_4->src_h[VAR_3], VAR_4->crtc_h);
  FUNC_1(VAR_4, 0xc0c0c0c0);
 }
}
