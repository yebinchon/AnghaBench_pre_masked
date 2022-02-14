
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {int dummy; } ;
struct drm_plane_state {int src_x; int crtc_x; int src_y; int crtc_y; } ;


 int FUNC_0 (struct drm_rect*,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct drm_plane_state *VAR_0,
         struct drm_rect *VAR_1)
{
 int VAR_2 = -((VAR_0->src_x >> 16) - VAR_0->crtc_x);
 int VAR_3 = -((VAR_0->src_y >> 16) - VAR_0->crtc_y);

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
