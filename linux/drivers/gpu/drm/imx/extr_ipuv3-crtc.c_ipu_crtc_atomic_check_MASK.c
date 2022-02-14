
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_crtc_state {int plane_mask; scalar_t__ active; } ;
struct drm_crtc {int primary; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct drm_crtc *VAR_1,
     struct drm_crtc_state *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->primary);

 if (VAR_2->active && (VAR_3 & VAR_2->plane_mask) == 0)
  return -VAR_0;

 return 0;
}
