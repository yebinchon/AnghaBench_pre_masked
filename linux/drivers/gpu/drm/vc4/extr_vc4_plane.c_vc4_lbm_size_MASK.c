
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_plane_state {scalar_t__* y_scaling; int is_yuv; scalar_t__ crtc_w; int * src_w; } ;
struct drm_plane_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 struct vc4_plane_state* FUNC_2 (struct drm_plane_state*) ;

__attribute__((used)) static u32 FUNC_3(struct drm_plane_state *VAR_2)
{
 struct vc4_plane_state *VAR_3 = FUNC_2(VAR_2);



 u32 VAR_4 = FUNC_0(VAR_3->src_w[0], (u32)VAR_3->crtc_w);
 u32 VAR_5;


 if (VAR_3->y_scaling[0] == VAR_0 &&
     VAR_3->y_scaling[1] == VAR_0)
  return 0;

 if (!VAR_3->is_yuv) {
  if (VAR_3->y_scaling[0] == VAR_1)
   VAR_5 = VAR_4 * 8;
  else {

   VAR_5 = VAR_4 * 16;
  }
 } else {




  VAR_5 = VAR_4 * 16;
 }

 VAR_5 = FUNC_1(VAR_5, 32);

 return VAR_5;
}
