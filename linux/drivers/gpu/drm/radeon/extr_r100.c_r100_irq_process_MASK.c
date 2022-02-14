
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int * pflip; int vblank_queue; scalar_t__* crtc_vblank_int; } ;
struct TYPE_3__ {int vblank_sync; } ;
struct radeon_device {int family; scalar_t__ msi_enabled; int hotplug_work; TYPE_2__ irq; TYPE_1__ pm; int ddev; scalar_t__ shutdown; } ;




 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct radeon_device *VAR_12)
{
 uint32_t VAR_13, VAR_14;
 bool VAR_15 = 0;

 VAR_13 = FUNC_5(VAR_12);
 if (!VAR_13) {
  return VAR_1;
 }
 if (VAR_12->shutdown) {
  return VAR_1;
 }
 while (VAR_13) {

  if (VAR_13 & VAR_9) {
   FUNC_7(VAR_12, VAR_8);
  }

  if (VAR_13 & VAR_4) {
   if (VAR_12->irq.crtc_vblank_int[0]) {
    FUNC_4(VAR_12->ddev, 0);
    VAR_12->pm.vblank_sync = 1;
    FUNC_9(&VAR_12->irq.vblank_queue);
   }
   if (FUNC_3(&VAR_12->irq.pflip[0]))
    FUNC_6(VAR_12, 0);
  }
  if (VAR_13 & VAR_3) {
   if (VAR_12->irq.crtc_vblank_int[1]) {
    FUNC_4(VAR_12->ddev, 1);
    VAR_12->pm.vblank_sync = 1;
    FUNC_9(&VAR_12->irq.vblank_queue);
   }
   if (FUNC_3(&VAR_12->irq.pflip[1]))
    FUNC_6(VAR_12, 1);
  }
  if (VAR_13 & VAR_6) {
   VAR_15 = 1;
   FUNC_0("HPD1\n");
  }
  if (VAR_13 & VAR_5) {
   VAR_15 = 1;
   FUNC_0("HPD2\n");
  }
  VAR_13 = FUNC_5(VAR_12);
 }
 if (VAR_15)
  FUNC_8(&VAR_12->hotplug_work, 0);
 if (VAR_12->msi_enabled) {
  switch (VAR_12->family) {
  case 129:
  case 128:
   VAR_14 = FUNC_1(VAR_2) & ~VAR_10;
   FUNC_2(VAR_2, VAR_14);
   FUNC_2(VAR_2, VAR_14 | VAR_10);
   break;
  default:
   FUNC_2(VAR_7, VAR_11);
   break;
  }
 }
 return VAR_0;
}
