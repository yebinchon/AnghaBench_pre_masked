
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_vblank_crtc {int queue; } ;
struct drm_device {unsigned int num_crtcs; struct drm_vblank_crtc* vblank; } ;


 scalar_t__ FUNC_0 (int,char*,unsigned int,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_device*,unsigned int) ;
 int FUNC_3 (struct drm_device*,unsigned int) ;
 int FUNC_4 (struct drm_device*,unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ) ;

void FUNC_7(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct drm_vblank_crtc *VAR_2 = &VAR_0->vblank[VAR_1];
 int VAR_3;
 u64 VAR_4;

 if (FUNC_1(VAR_1 >= VAR_0->num_crtcs))
  return;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_3, "vblank not available on crtc %i, ret=%i\n", VAR_1, VAR_3))
  return;

 VAR_4 = FUNC_2(VAR_0, VAR_1);

 VAR_3 = FUNC_6(VAR_2->queue,
     VAR_4 != FUNC_2(VAR_0, VAR_1),
     FUNC_5(100));

 FUNC_0(VAR_3 == 0, "vblank wait timed out on crtc %i\n", VAR_1);

 FUNC_4(VAR_0, VAR_1);
}
