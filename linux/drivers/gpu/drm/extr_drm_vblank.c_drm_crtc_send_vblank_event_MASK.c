
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_pending_vblank_event {unsigned int pipe; } ;
struct drm_device {scalar_t__ num_crtcs; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int ktime_t ;


 unsigned int FUNC_0 (struct drm_crtc*) ;
 scalar_t__ FUNC_1 (struct drm_device*,unsigned int,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct drm_device*,struct drm_pending_vblank_event*,scalar_t__,int ) ;

void FUNC_4(struct drm_crtc *VAR_0,
    struct drm_pending_vblank_event *VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 u64 VAR_3;
 unsigned int VAR_4 = FUNC_0(VAR_0);
 ktime_t VAR_5;

 if (VAR_2->num_crtcs > 0) {
  VAR_3 = FUNC_1(VAR_2, VAR_4, &VAR_5);
 } else {
  VAR_3 = 0;

  VAR_5 = FUNC_2();
 }
 VAR_1->pipe = VAR_4;
 FUNC_3(VAR_2, VAR_1, VAR_3, VAR_5);
}
