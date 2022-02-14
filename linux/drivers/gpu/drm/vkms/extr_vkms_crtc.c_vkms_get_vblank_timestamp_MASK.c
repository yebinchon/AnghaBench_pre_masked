
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ expires; } ;
struct TYPE_3__ {TYPE_2__ node; } ;
struct vkms_output {scalar_t__ period_ns; TYPE_1__ vblank_hrtimer; } ;
struct vkms_device {struct vkms_output output; } ;
struct drm_vblank_crtc {scalar_t__ time; } ;
struct drm_device {struct drm_vblank_crtc* vblank; } ;
typedef scalar_t__ ktime_t ;


 scalar_t__ FUNC_0 (int) ;
 struct vkms_device* FUNC_1 (struct drm_device*) ;

bool FUNC_2(struct drm_device *VAR_0, unsigned int VAR_1,
          int *VAR_2, ktime_t *VAR_3,
          bool VAR_4)
{
 struct vkms_device *VAR_5 = FUNC_1(VAR_0);
 struct vkms_output *VAR_6 = &VAR_5->output;
 struct drm_vblank_crtc *VAR_7 = &VAR_0->vblank[VAR_1];

 *VAR_3 = VAR_6->vblank_hrtimer.node.expires;

 if (FUNC_0(*VAR_3 == VAR_7->time))
  return 1;
 *VAR_3 -= VAR_6->period_ns;

 return 1;
}
