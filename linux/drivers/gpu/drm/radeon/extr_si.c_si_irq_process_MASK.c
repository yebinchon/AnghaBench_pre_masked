
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_14__ {int rptr; int ptr_mask; int lock; int * ring; int enabled; } ;
struct TYPE_11__ {int high_to_low; int work; } ;
struct TYPE_12__ {TYPE_4__ thermal; } ;
struct TYPE_13__ {int vblank_sync; TYPE_5__ dpm; scalar_t__ dpm_enabled; } ;
struct TYPE_8__ {int* disp_int; } ;
struct TYPE_9__ {TYPE_1__ evergreen; } ;
struct TYPE_10__ {int * pflip; int vblank_queue; int * crtc_vblank_int; TYPE_2__ stat_regs; } ;
struct radeon_device {TYPE_7__ ih; TYPE_6__ pm; int hotplug_work; int dp_work; int dev; TYPE_3__ irq; int ddev; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int ,char*,int,...) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,int) ;
 int FUNC_13 (struct radeon_device*,int ) ;
 int VAR_18 ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*,int,int) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct radeon_device *VAR_19)
{
 u32 *VAR_20 = VAR_19->irq.stat_regs.evergreen.disp_int;
 u32 VAR_21, VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;
 u32 VAR_26, VAR_27, VAR_28;
 u32 VAR_29;
 bool VAR_30 = 0;
 bool VAR_31 = 0;
 bool VAR_32 = 0;
 u32 VAR_33, VAR_34;
 const char *VAR_35;

 if (!VAR_19->ih.enabled || VAR_19->shutdown)
  return VAR_7;

 VAR_24 = FUNC_17(VAR_19);

restart_ih:

 if (FUNC_7(&VAR_19->ih.lock, 1))
  return VAR_7;

 VAR_25 = VAR_19->ih.rptr;
 FUNC_0("si_irq_process start: rptr %d, wptr %d\n", VAR_25, VAR_24);


 FUNC_14();


 FUNC_18(VAR_19);

 while (VAR_25 != VAR_24) {

  VAR_29 = VAR_25 / 4;
  VAR_26 = FUNC_10(VAR_19->ih.ring[VAR_29]) & 0xff;
  VAR_27 = FUNC_10(VAR_19->ih.ring[VAR_29 + 1]) & 0xfffffff;
  VAR_28 = FUNC_10(VAR_19->ih.ring[VAR_29 + 2]) & 0xff;

  switch (VAR_26) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
   VAR_21 = VAR_26 - 1;

   if (VAR_27 == 0) {
    VAR_23 = VAR_8;
    VAR_35 = "vblank";

    if (VAR_19->irq.crtc_vblank_int[VAR_21]) {
     FUNC_9(VAR_19->ddev, VAR_21);
     VAR_19->pm.vblank_sync = 1;
     FUNC_20(&VAR_19->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_19->irq.pflip[VAR_21])) {
     FUNC_12(VAR_19,
          VAR_21);
    }

   } else if (VAR_27 == 1) {
    VAR_23 = VAR_9;
    VAR_35 = "vline";
   } else {
    FUNC_0("Unhandled interrupt: %d %d\n",
       VAR_26, VAR_27);
    break;
   }

   if (!(VAR_20[VAR_21] & VAR_23)) {
    FUNC_0("IH: D%d %s - IH event w/o asserted irq bit?\n",
       VAR_21 + 1, VAR_35);
   }

   VAR_20[VAR_21] &= ~VAR_23;
   FUNC_0("IH: D%d %s\n", VAR_21 + 1, VAR_35);

   break;
  case 8:
  case 10:
  case 12:
  case 14:
  case 16:
  case 18:
   FUNC_0("IH: D%d flip\n", ((VAR_26 - 8) >> 1) + 1);
   if (VAR_18 > 0)
    FUNC_11(VAR_19, (VAR_26 - 8) >> 1);
   break;
  case 42:
   if (VAR_27 <= 5) {
    VAR_22 = VAR_27;
    VAR_23 = VAR_3;
    VAR_30 = 1;
    VAR_35 = "HPD";

   } else if (VAR_27 <= 11) {
    VAR_22 = VAR_27 - 6;
    VAR_23 = VAR_4;
    VAR_31 = 1;
    VAR_35 = "HPD_RX";

   } else {
    FUNC_0("Unhandled interrupt: %d %d\n",
       VAR_26, VAR_27);
    break;
   }

   if (!(VAR_20[VAR_22] & VAR_23))
    FUNC_0("IH: IH event w/o asserted irq bit?\n");

   VAR_20[VAR_22] &= ~VAR_23;
   FUNC_0("IH: %s%d\n", VAR_35, VAR_22 + 1);
   break;
  case 96:
   FUNC_1("SRBM_READ_ERROR: 0x%x\n", FUNC_2(VAR_14));
   FUNC_3(VAR_13, 0x1);
   break;
  case 124:
   FUNC_0("IH: UVD int: 0x%08x\n", VAR_27);
   FUNC_13(VAR_19, VAR_11);
   break;
  case 146:
  case 147:
   VAR_34 = FUNC_2(VAR_16);
   VAR_33 = FUNC_2(VAR_17);

   FUNC_4(VAR_15, 1, ~1);
   if (VAR_34 == 0x0 && VAR_33 == 0x0)
    break;
   FUNC_8(VAR_19->dev, "GPU fault detected: %d 0x%08x\n", VAR_26, VAR_27);
   FUNC_8(VAR_19->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
    VAR_34);
   FUNC_8(VAR_19->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
    VAR_33);
   FUNC_19(VAR_19, VAR_33, VAR_34);
   break;
  case 176:
   FUNC_13(VAR_19, VAR_12);
   break;
  case 177:
   FUNC_13(VAR_19, VAR_0);
   break;
  case 178:
   FUNC_13(VAR_19, VAR_1);
   break;
  case 181:
   FUNC_0("IH: CP EOP\n");
   switch (VAR_28) {
   case 0:
    FUNC_13(VAR_19, VAR_12);
    break;
   case 1:
    FUNC_13(VAR_19, VAR_0);
    break;
   case 2:
    FUNC_13(VAR_19, VAR_1);
    break;
   }
   break;
  case 224:
   FUNC_0("IH: DMA trap\n");
   FUNC_13(VAR_19, VAR_10);
   break;
  case 230:
   FUNC_0("IH: thermal low to high\n");
   VAR_19->pm.dpm.thermal.high_to_low = 0;
   VAR_32 = 1;
   break;
  case 231:
   FUNC_0("IH: thermal high to low\n");
   VAR_19->pm.dpm.thermal.high_to_low = 1;
   VAR_32 = 1;
   break;
  case 233:
   FUNC_0("IH: GUI idle\n");
   break;
  case 244:
   FUNC_0("IH: DMA1 trap\n");
   FUNC_13(VAR_19, VAR_2);
   break;
  default:
   FUNC_0("Unhandled interrupt: %d %d\n", VAR_26, VAR_27);
   break;
  }


  VAR_25 += 16;
  VAR_25 &= VAR_19->ih.ptr_mask;
  FUNC_3(VAR_5, VAR_25);
 }
 if (VAR_31)
  FUNC_16(&VAR_19->dp_work);
 if (VAR_30)
  FUNC_15(&VAR_19->hotplug_work, 0);
 if (VAR_32 && VAR_19->pm.dpm_enabled)
  FUNC_16(&VAR_19->pm.dpm.thermal.work);
 VAR_19->ih.rptr = VAR_25;
 FUNC_6(&VAR_19->ih.lock, 0);


 VAR_24 = FUNC_17(VAR_19);
 if (VAR_24 != VAR_25)
  goto restart_ih;

 return VAR_6;
}
