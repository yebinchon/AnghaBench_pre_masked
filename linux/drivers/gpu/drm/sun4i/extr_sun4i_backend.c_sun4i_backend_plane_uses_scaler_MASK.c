
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct drm_plane_state {int src_h; int src_w; scalar_t__ crtc_w; scalar_t__ crtc_h; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct drm_plane_state *VAR_0)
{
 u16 VAR_1 = VAR_0->src_h >> 16;
 u16 VAR_2 = VAR_0->src_w >> 16;

 FUNC_0("Input size %dx%d, output size %dx%d\n",
    VAR_2, VAR_1, VAR_0->crtc_w, VAR_0->crtc_h);

 if ((VAR_0->crtc_h != VAR_1) || (VAR_0->crtc_w != VAR_2))
  return 1;

 return 0;
}
