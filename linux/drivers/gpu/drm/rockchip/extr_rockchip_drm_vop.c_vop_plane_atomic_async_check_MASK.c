
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vop_win_data {TYPE_1__* phy; } ;
struct vop_win {struct vop_win_data* data; } ;
struct drm_plane_state {TYPE_4__* crtc; scalar_t__ state; } ;
struct drm_plane {TYPE_3__* state; TYPE_2__* crtc; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_8__ {struct drm_plane* cursor; } ;
struct TYPE_7__ {int fb; } ;
struct TYPE_6__ {struct drm_crtc_state* state; } ;
struct TYPE_5__ {scalar_t__ scl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct drm_crtc_state* FUNC_1 (scalar_t__,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,struct drm_crtc_state*,int,int,int,int) ;
 struct vop_win* FUNC_3 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_2,
     struct drm_plane_state *VAR_3)
{
 struct vop_win *VAR_4 = FUNC_3(VAR_2);
 const struct vop_win_data *VAR_5 = VAR_4->data;
 int VAR_6 = VAR_5->phy->scl ? FUNC_0(1, 8) :
     VAR_0;
 int VAR_7 = VAR_5->phy->scl ? FUNC_0(8, 1) :
     VAR_0;
 struct drm_crtc_state *VAR_8;

 if (VAR_2 != VAR_3->crtc->cursor)
  return -VAR_1;

 if (!VAR_2->state)
  return -VAR_1;

 if (!VAR_2->state->fb)
  return -VAR_1;

 if (VAR_3->state)
  VAR_8 = FUNC_1(VAR_3->state,
        VAR_3->crtc);
 else
  VAR_8 = VAR_2->crtc->state;

 return FUNC_2(VAR_2->state, VAR_8,
         VAR_6, VAR_7,
         1, 1);
}
