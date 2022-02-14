
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dpm_thermal; int* hpd; int* crtc_vblank_int; int* afmt; int lock; int * pflip; int * ring_int; } ;
struct radeon_device {TYPE_1__ irq; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct drm_device *VAR_3)
{
 struct radeon_device *VAR_4 = VAR_3->dev_private;
 unsigned long VAR_5;
 unsigned VAR_6;

 if (VAR_4 == ((void*)0)) {
  return;
 }
 FUNC_2(&VAR_4->irq.lock, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_0(&VAR_4->irq.ring_int[VAR_6], 0);
 VAR_4->irq.dpm_thermal = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_4->irq.hpd[VAR_6] = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4->irq.crtc_vblank_int[VAR_6] = 0;
  FUNC_0(&VAR_4->irq.pflip[VAR_6], 0);
  VAR_4->irq.afmt[VAR_6] = 0;
 }
 FUNC_1(VAR_4);
 FUNC_3(&VAR_4->irq.lock, VAR_5);
}
