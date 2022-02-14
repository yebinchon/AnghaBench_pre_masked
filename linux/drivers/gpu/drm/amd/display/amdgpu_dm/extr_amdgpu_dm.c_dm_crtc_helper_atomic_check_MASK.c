
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_crtc_state {scalar_t__ active; scalar_t__ enable; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct dm_crtc_state {scalar_t__ active_planes; int stream; } ;
struct dc {int dummy; } ;
struct TYPE_4__ {struct dc* dc; } ;
struct amdgpu_device {TYPE_2__ dm; } ;
struct TYPE_3__ {struct amdgpu_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dc*,int ) ;
 int FUNC_2 (struct drm_crtc*,struct drm_crtc_state*) ;
 scalar_t__ FUNC_3 (struct drm_crtc_state*) ;
 scalar_t__ FUNC_4 (struct drm_crtc_state*,int *,int ) ;
 struct dm_crtc_state* FUNC_5 (struct drm_crtc_state*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct drm_crtc *VAR_2,
           struct drm_crtc_state *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->dev->dev_private;
 struct dc *VAR_5 = VAR_4->dm.dc;
 struct dm_crtc_state *VAR_6 = FUNC_5(VAR_3);
 int VAR_7 = -VAR_1;







 FUNC_2(VAR_2, VAR_3);

 if (FUNC_6(!VAR_6->stream &&
       FUNC_4(VAR_3, ((void*)0), VAR_6->stream))) {
  FUNC_0(1);
  return VAR_7;
 }


 if (!VAR_6->stream)
  return 0;





 if (VAR_3->enable && VAR_3->active &&
     FUNC_3(VAR_3) &&
     VAR_6->active_planes == 0)
  return -VAR_1;

 if (FUNC_1(VAR_5, VAR_6->stream) == VAR_0)
  return 0;

 return VAR_7;
}
