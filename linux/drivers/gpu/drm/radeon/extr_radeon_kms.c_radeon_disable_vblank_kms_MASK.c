
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* crtc_vblank_int; int lock; } ;
struct radeon_device {int num_crtc; TYPE_1__ irq; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct drm_device *VAR_0, int VAR_1)
{
 struct radeon_device *VAR_2 = VAR_0->dev_private;
 unsigned long VAR_3;

 if (VAR_1 < 0 || VAR_1 >= VAR_2->num_crtc) {
  FUNC_0("Invalid crtc %d\n", VAR_1);
  return;
 }

 FUNC_2(&VAR_2->irq.lock, VAR_3);
 VAR_2->irq.crtc_vblank_int[VAR_1] = 0;
 FUNC_1(VAR_2);
 FUNC_3(&VAR_2->irq.lock, VAR_3);
}
