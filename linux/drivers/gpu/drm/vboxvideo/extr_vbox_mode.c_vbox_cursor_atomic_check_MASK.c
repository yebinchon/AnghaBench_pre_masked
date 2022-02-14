
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_plane_state {scalar_t__ crtc_w; scalar_t__ crtc_h; int fb; scalar_t__ crtc; int state; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 struct drm_crtc_state* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_4,
        struct drm_plane_state *VAR_5)
{
 struct drm_crtc_state *VAR_6 = ((void*)0);
 u32 VAR_7 = VAR_5->crtc_w;
 u32 VAR_8 = VAR_5->crtc_h;
 int VAR_9;

 if (VAR_5->crtc) {
  VAR_6 = FUNC_1(
         VAR_5->state, VAR_5->crtc);
  if (FUNC_0(!VAR_6))
   return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_5, VAR_6,
        VAR_0,
        VAR_0,
        1, 1);
 if (VAR_9)
  return VAR_9;

 if (!VAR_5->fb)
  return 0;

 if (VAR_7 > VAR_3 || VAR_8 > VAR_2 ||
     VAR_7 == 0 || VAR_8 == 0)
  return -VAR_1;

 return 0;
}
