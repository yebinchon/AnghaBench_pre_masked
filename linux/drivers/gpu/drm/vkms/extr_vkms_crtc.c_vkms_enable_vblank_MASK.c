
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * function; } ;
struct vkms_output {int period_ns; TYPE_1__ vblank_hrtimer; } ;
struct drm_vblank_crtc {int framedur_ns; } ;
struct drm_device {struct drm_vblank_crtc* vblank; } ;
struct drm_crtc {int mode; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_crtc*,int *) ;
 unsigned int FUNC_1 (struct drm_crtc*) ;
 struct vkms_output* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct drm_crtc *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 unsigned int VAR_5 = FUNC_1(VAR_3);
 struct drm_vblank_crtc *VAR_6 = &VAR_4->vblank[VAR_5];
 struct vkms_output *VAR_7 = FUNC_2(VAR_3);

 FUNC_0(VAR_3, &VAR_3->mode);

 FUNC_3(&VAR_7->vblank_hrtimer, VAR_0, VAR_1);
 VAR_7->vblank_hrtimer.function = &VAR_2;
 VAR_7->period_ns = FUNC_5(0, VAR_6->framedur_ns);
 FUNC_4(&VAR_7->vblank_hrtimer, VAR_7->period_ns, VAR_1);

 return 0;
}
