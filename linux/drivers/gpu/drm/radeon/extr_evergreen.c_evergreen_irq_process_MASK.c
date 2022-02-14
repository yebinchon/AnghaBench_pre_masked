
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
struct TYPE_10__ {int rptr; int ptr_mask; int lock; int * ring; int enabled; } ;
struct TYPE_14__ {int high_to_low; int work; } ;
struct TYPE_12__ {TYPE_7__ thermal; } ;
struct TYPE_13__ {int vblank_sync; TYPE_5__ dpm; scalar_t__ dpm_enabled; } ;
struct TYPE_8__ {int* disp_int; int* afmt_status; } ;
struct TYPE_9__ {TYPE_1__ evergreen; } ;
struct TYPE_11__ {int * pflip; int vblank_queue; int * crtc_vblank_int; TYPE_2__ stat_regs; } ;
struct radeon_device {TYPE_3__ ih; TYPE_6__ pm; int audio_work; int hotplug_work; int dp_work; int family; int dev; TYPE_4__ irq; int ddev; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (struct radeon_device*,int,int) ;
 int FUNC_9 (int ,char*,int,...) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct radeon_device*,int) ;
 int FUNC_15 (struct radeon_device*,int) ;
 int FUNC_16 (struct radeon_device*,int ) ;
 int VAR_20 ;
 int FUNC_17 () ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct radeon_device *VAR_21)
{
 u32 *VAR_22 = VAR_21->irq.stat_regs.evergreen.disp_int;
 u32 *VAR_23 = VAR_21->irq.stat_regs.evergreen.afmt_status;
 u32 VAR_24, VAR_25, VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30, VAR_31;
 u32 VAR_32;
 bool VAR_33 = 0;
 bool VAR_34 = 0;
 bool VAR_35 = 0;
 bool VAR_36 = 0;
 u32 VAR_37, VAR_38;
 const char *VAR_39;

 if (!VAR_21->ih.enabled || VAR_21->shutdown)
  return VAR_9;

 VAR_28 = FUNC_11(VAR_21);

restart_ih:

 if (FUNC_7(&VAR_21->ih.lock, 1))
  return VAR_9;

 VAR_29 = VAR_21->ih.rptr;
 FUNC_0("evergreen_irq_process start: rptr %d, wptr %d\n", VAR_29, VAR_28);


 FUNC_17();


 FUNC_12(VAR_21);

 while (VAR_29 != VAR_28) {

  VAR_32 = VAR_29 / 4;
  VAR_30 = FUNC_13(VAR_21->ih.ring[VAR_32]) & 0xff;
  VAR_31 = FUNC_13(VAR_21->ih.ring[VAR_32 + 1]) & 0xfffffff;

  switch (VAR_30) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
   VAR_24 = VAR_30 - 1;

   if (VAR_31 == 0) {
    VAR_27 = VAR_10;
    VAR_39 = "vblank";

    if (VAR_21->irq.crtc_vblank_int[VAR_24]) {
     FUNC_10(VAR_21->ddev, VAR_24);
     VAR_21->pm.vblank_sync = 1;
     FUNC_20(&VAR_21->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_21->irq.pflip[VAR_24])) {
     FUNC_15(VAR_21,
          VAR_24);
    }

   } else if (VAR_31 == 1) {
    VAR_27 = VAR_11;
    VAR_39 = "vline";
   } else {
    FUNC_0("Unhandled interrupt: %d %d\n",
       VAR_30, VAR_31);
    break;
   }

   if (!(VAR_22[VAR_24] & VAR_27)) {
    FUNC_0("IH: D%d %s - IH event w/o asserted irq bit?\n",
       VAR_24 + 1, VAR_39);
   }

   VAR_22[VAR_24] &= ~VAR_27;
   FUNC_0("IH: D%d %s\n", VAR_24 + 1, VAR_39);

   break;
  case 8:
  case 10:
  case 12:
  case 14:
  case 16:
  case 18:
   FUNC_0("IH: D%d flip\n", ((VAR_30 - 8) >> 1) + 1);
   if (VAR_20 > 0)
    FUNC_14(VAR_21, (VAR_30 - 8) >> 1);
   break;
  case 42:
   if (VAR_31 <= 5) {
    VAR_25 = VAR_31;
    VAR_27 = VAR_5;
    VAR_33 = 1;
    VAR_39 = "HPD";

   } else if (VAR_31 <= 11) {
    VAR_25 = VAR_31 - 6;
    VAR_27 = VAR_6;
    VAR_35 = 1;
    VAR_39 = "HPD_RX";

   } else {
    FUNC_0("Unhandled interrupt: %d %d\n",
       VAR_30, VAR_31);
    break;
   }

   if (!(VAR_22[VAR_25] & VAR_27))
    FUNC_0("IH: IH event w/o asserted irq bit?\n");

   VAR_22[VAR_25] &= ~VAR_27;
   FUNC_0("IH: %s%d\n", VAR_39, VAR_25 + 1);

   break;
  case 44:
   VAR_26 = VAR_31;
   if (!(VAR_23[VAR_26] & VAR_0))
    FUNC_0("IH: IH event w/o asserted irq bit?\n");

   if (VAR_26 > 5) {
    FUNC_1("Unhandled interrupt: %d %d\n",
       VAR_30, VAR_31);
    break;
   }
   VAR_23[VAR_26] &= ~VAR_0;
   VAR_34 = 1;
   FUNC_0("IH: HDMI%d\n", VAR_26 + 1);
   break;
  case 96:
   FUNC_1("SRBM_READ_ERROR: 0x%x\n", FUNC_2(VAR_16));
   FUNC_3(VAR_15, 0x1);
   break;
  case 124:
   FUNC_0("IH: UVD int: 0x%08x\n", VAR_31);
   FUNC_16(VAR_21, VAR_13);
   break;
  case 146:
  case 147:
   VAR_38 = FUNC_2(VAR_18);
   VAR_37 = FUNC_2(VAR_19);

   FUNC_4(VAR_17, 1, ~1);
   if (VAR_38 == 0x0 && VAR_37 == 0x0)
    break;
   FUNC_9(VAR_21->dev, "GPU fault detected: %d 0x%08x\n", VAR_30, VAR_31);
   FUNC_9(VAR_21->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
    VAR_38);
   FUNC_9(VAR_21->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
    VAR_37);
   FUNC_8(VAR_21, VAR_37, VAR_38);
   break;
  case 176:
  case 177:
  case 178:
   FUNC_0("IH: CP int: 0x%08x\n", VAR_31);
   FUNC_16(VAR_21, VAR_14);
   break;
  case 181:
   FUNC_0("IH: CP EOP\n");
   if (VAR_21->family >= VAR_4) {
    switch (VAR_31) {
    case 0:
     FUNC_16(VAR_21, VAR_14);
     break;
    case 1:
     FUNC_16(VAR_21, VAR_1);
     break;
    case 2:
     FUNC_16(VAR_21, VAR_2);
     break;
    }
   } else
    FUNC_16(VAR_21, VAR_14);
   break;
  case 224:
   FUNC_0("IH: DMA trap\n");
   FUNC_16(VAR_21, VAR_12);
   break;
  case 230:
   FUNC_0("IH: thermal low to high\n");
   VAR_21->pm.dpm.thermal.high_to_low = 0;
   VAR_36 = 1;
   break;
  case 231:
   FUNC_0("IH: thermal high to low\n");
   VAR_21->pm.dpm.thermal.high_to_low = 1;
   VAR_36 = 1;
   break;
  case 233:
   FUNC_0("IH: GUI idle\n");
   break;
  case 244:
   if (VAR_21->family >= VAR_4) {
    FUNC_0("IH: DMA1 trap\n");
    FUNC_16(VAR_21, VAR_3);
   }
   break;
  default:
   FUNC_0("Unhandled interrupt: %d %d\n", VAR_30, VAR_31);
   break;
  }


  VAR_29 += 16;
  VAR_29 &= VAR_21->ih.ptr_mask;
  FUNC_3(VAR_7, VAR_29);
 }
 if (VAR_35)
  FUNC_19(&VAR_21->dp_work);
 if (VAR_33)
  FUNC_18(&VAR_21->hotplug_work, 0);
 if (VAR_34)
  FUNC_19(&VAR_21->audio_work);
 if (VAR_36 && VAR_21->pm.dpm_enabled)
  FUNC_19(&VAR_21->pm.dpm.thermal.work);
 VAR_21->ih.rptr = VAR_29;
 FUNC_6(&VAR_21->ih.lock, 0);


 VAR_28 = FUNC_11(VAR_21);
 if (VAR_28 != VAR_29)
  goto restart_ih;

 return VAR_8;
}
