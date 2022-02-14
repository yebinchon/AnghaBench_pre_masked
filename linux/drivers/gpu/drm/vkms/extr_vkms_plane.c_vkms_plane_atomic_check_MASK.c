
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int visible; int crtc; int state; int fb; } ;
struct drm_plane {scalar_t__ type; } ;
struct drm_crtc_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 struct drm_crtc_state* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_3,
       struct drm_plane_state *VAR_4)
{
 struct drm_crtc_state *VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 if (!VAR_4->fb | !VAR_4->crtc)
  return 0;

 VAR_5 = FUNC_2(VAR_4->state, VAR_4->crtc);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (VAR_3->type == VAR_1)
  VAR_6 = 1;

 VAR_7 = FUNC_3(VAR_4, VAR_5,
        VAR_0,
        VAR_0,
        VAR_6, 1);
 if (VAR_7 != 0)
  return VAR_7;


 if (!VAR_4->visible && !VAR_6)
  return -VAR_2;

 return 0;
}
