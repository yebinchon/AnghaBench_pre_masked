
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


typedef int u8 ;
typedef int u32 ;
struct radeon_ring {int me; int pipe; } ;
struct TYPE_14__ {int rptr; int ptr_mask; int lock; int * ring; int enabled; } ;
struct TYPE_11__ {int high_to_low; int work; } ;
struct TYPE_12__ {TYPE_4__ thermal; } ;
struct TYPE_13__ {int vblank_sync; TYPE_5__ dpm; } ;
struct TYPE_8__ {int disp_int; int disp_int_cont; int disp_int_cont2; int disp_int_cont3; int disp_int_cont4; int disp_int_cont5; } ;
struct TYPE_9__ {TYPE_1__ cik; } ;
struct TYPE_10__ {TYPE_2__ stat_regs; int * pflip; int vblank_queue; int * crtc_vblank_int; } ;
struct radeon_device {int needs_reset; TYPE_7__ ih; TYPE_6__ pm; int fence_queue; int hotplug_work; int dp_work; int dev; TYPE_3__ irq; int ddev; scalar_t__ shutdown; struct radeon_ring* ring; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 int FUNC_2 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int,int,int) ;
 int FUNC_11 (int ,char*,int,...) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct radeon_device*,int) ;
 int FUNC_15 (struct radeon_device*,int) ;
 int FUNC_16 (struct radeon_device*,size_t) ;
 int VAR_41 ;
 int FUNC_17 () ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct radeon_device *VAR_42)
{
 struct radeon_ring *VAR_43 = &VAR_42->ring[VAR_0];
 struct radeon_ring *VAR_44 = &VAR_42->ring[VAR_1];
 u32 VAR_45;
 u32 VAR_46;
 u32 VAR_47, VAR_48, VAR_49;
 u8 VAR_50, VAR_51, VAR_52;
 u32 VAR_53;
 bool VAR_54 = 0;
 bool VAR_55 = 0;
 bool VAR_56 = 0;
 u32 VAR_57, VAR_58, VAR_59;
 bool VAR_60 = 0;

 if (!VAR_42->ih.enabled || VAR_42->shutdown)
  return VAR_17;

 VAR_45 = FUNC_8(VAR_42);

restart_ih:

 if (FUNC_7(&VAR_42->ih.lock, 1))
  return VAR_17;

 VAR_46 = VAR_42->ih.rptr;
 FUNC_0("cik_irq_process start: rptr %d, wptr %d\n", VAR_46, VAR_45);


 FUNC_17();


 FUNC_9(VAR_42);

 while (VAR_46 != VAR_45) {

  VAR_53 = VAR_46 / 4;

  VAR_47 = FUNC_13(VAR_42->ih.ring[VAR_53]) & 0xff;
  VAR_48 = FUNC_13(VAR_42->ih.ring[VAR_53 + 1]) & 0xfffffff;
  VAR_49 = FUNC_13(VAR_42->ih.ring[VAR_53 + 2]) & 0xff;

  switch (VAR_47) {
  case 1:
   switch (VAR_48) {
   case 0:
    if (!(VAR_42->irq.stat_regs.cik.disp_int & VAR_18))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    if (VAR_42->irq.crtc_vblank_int[0]) {
     FUNC_12(VAR_42->ddev, 0);
     VAR_42->pm.vblank_sync = 1;
     FUNC_20(&VAR_42->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_42->irq.pflip[0]))
     FUNC_15(VAR_42, 0);
    VAR_42->irq.stat_regs.cik.disp_int &= ~VAR_18;
    FUNC_0("IH: D1 vblank\n");

    break;
   case 1:
    if (!(VAR_42->irq.stat_regs.cik.disp_int & VAR_19))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int &= ~VAR_19;
    FUNC_0("IH: D1 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 2:
   switch (VAR_48) {
   case 0:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont & VAR_20))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    if (VAR_42->irq.crtc_vblank_int[1]) {
     FUNC_12(VAR_42->ddev, 1);
     VAR_42->pm.vblank_sync = 1;
     FUNC_20(&VAR_42->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_42->irq.pflip[1]))
     FUNC_15(VAR_42, 1);
    VAR_42->irq.stat_regs.cik.disp_int_cont &= ~VAR_20;
    FUNC_0("IH: D2 vblank\n");

    break;
   case 1:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont & VAR_21))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont &= ~VAR_21;
    FUNC_0("IH: D2 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 3:
   switch (VAR_48) {
   case 0:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont2 & VAR_22))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    if (VAR_42->irq.crtc_vblank_int[2]) {
     FUNC_12(VAR_42->ddev, 2);
     VAR_42->pm.vblank_sync = 1;
     FUNC_20(&VAR_42->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_42->irq.pflip[2]))
     FUNC_15(VAR_42, 2);
    VAR_42->irq.stat_regs.cik.disp_int_cont2 &= ~VAR_22;
    FUNC_0("IH: D3 vblank\n");

    break;
   case 1:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont2 & VAR_23))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont2 &= ~VAR_23;
    FUNC_0("IH: D3 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 4:
   switch (VAR_48) {
   case 0:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont3 & VAR_24))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    if (VAR_42->irq.crtc_vblank_int[3]) {
     FUNC_12(VAR_42->ddev, 3);
     VAR_42->pm.vblank_sync = 1;
     FUNC_20(&VAR_42->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_42->irq.pflip[3]))
     FUNC_15(VAR_42, 3);
    VAR_42->irq.stat_regs.cik.disp_int_cont3 &= ~VAR_24;
    FUNC_0("IH: D4 vblank\n");

    break;
   case 1:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont3 & VAR_25))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont3 &= ~VAR_25;
    FUNC_0("IH: D4 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 5:
   switch (VAR_48) {
   case 0:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont4 & VAR_26))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    if (VAR_42->irq.crtc_vblank_int[4]) {
     FUNC_12(VAR_42->ddev, 4);
     VAR_42->pm.vblank_sync = 1;
     FUNC_20(&VAR_42->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_42->irq.pflip[4]))
     FUNC_15(VAR_42, 4);
    VAR_42->irq.stat_regs.cik.disp_int_cont4 &= ~VAR_26;
    FUNC_0("IH: D5 vblank\n");

    break;
   case 1:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont4 & VAR_27))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont4 &= ~VAR_27;
    FUNC_0("IH: D5 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 6:
   switch (VAR_48) {
   case 0:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont5 & VAR_28))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    if (VAR_42->irq.crtc_vblank_int[5]) {
     FUNC_12(VAR_42->ddev, 5);
     VAR_42->pm.vblank_sync = 1;
     FUNC_20(&VAR_42->irq.vblank_queue);
    }
    if (FUNC_5(&VAR_42->irq.pflip[5]))
     FUNC_15(VAR_42, 5);
    VAR_42->irq.stat_regs.cik.disp_int_cont5 &= ~VAR_28;
    FUNC_0("IH: D6 vblank\n");

    break;
   case 1:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont5 & VAR_29))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont5 &= ~VAR_29;
    FUNC_0("IH: D6 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 8:
  case 10:
  case 12:
  case 14:
  case 16:
  case 18:
   FUNC_0("IH: D%d flip\n", ((VAR_47 - 8) >> 1) + 1);
   if (VAR_41 > 0)
    FUNC_14(VAR_42, (VAR_47 - 8) >> 1);
   break;
  case 42:
   switch (VAR_48) {
   case 0:
    if (!(VAR_42->irq.stat_regs.cik.disp_int & VAR_3))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int &= ~VAR_3;
    VAR_54 = 1;
    FUNC_0("IH: HPD1\n");

    break;
   case 1:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont & VAR_5))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont &= ~VAR_5;
    VAR_54 = 1;
    FUNC_0("IH: HPD2\n");

    break;
   case 2:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont2 & VAR_7))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont2 &= ~VAR_7;
    VAR_54 = 1;
    FUNC_0("IH: HPD3\n");

    break;
   case 3:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont3 & VAR_9))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont3 &= ~VAR_9;
    VAR_54 = 1;
    FUNC_0("IH: HPD4\n");

    break;
   case 4:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont4 & VAR_11))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont4 &= ~VAR_11;
    VAR_54 = 1;
    FUNC_0("IH: HPD5\n");

    break;
   case 5:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont5 & VAR_13))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont5 &= ~VAR_13;
    VAR_54 = 1;
    FUNC_0("IH: HPD6\n");

    break;
   case 6:
    if (!(VAR_42->irq.stat_regs.cik.disp_int & VAR_4))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int &= ~VAR_4;
    VAR_55 = 1;
    FUNC_0("IH: HPD_RX 1\n");

    break;
   case 7:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont & VAR_6))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont &= ~VAR_6;
    VAR_55 = 1;
    FUNC_0("IH: HPD_RX 2\n");

    break;
   case 8:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont2 & VAR_8))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont2 &= ~VAR_8;
    VAR_55 = 1;
    FUNC_0("IH: HPD_RX 3\n");

    break;
   case 9:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont3 & VAR_10))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont3 &= ~VAR_10;
    VAR_55 = 1;
    FUNC_0("IH: HPD_RX 4\n");

    break;
   case 10:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont4 & VAR_12))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont4 &= ~VAR_12;
    VAR_55 = 1;
    FUNC_0("IH: HPD_RX 5\n");

    break;
   case 11:
    if (!(VAR_42->irq.stat_regs.cik.disp_int_cont5 & VAR_14))
     FUNC_0("IH: IH event w/o asserted irq bit?\n");

    VAR_42->irq.stat_regs.cik.disp_int_cont5 &= ~VAR_14;
    VAR_55 = 1;
    FUNC_0("IH: HPD_RX 6\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 96:
   FUNC_1("SRBM_READ_ERROR: 0x%x\n", FUNC_2(VAR_34));
   FUNC_3(VAR_33, 0x1);
   break;
  case 124:
   FUNC_0("IH: UVD int: 0x%08x\n", VAR_48);
   FUNC_16(VAR_42, VAR_31);
   break;
  case 146:
  case 147:
   VAR_57 = FUNC_2(VAR_38);
   VAR_58 = FUNC_2(VAR_40);
   VAR_59 = FUNC_2(VAR_39);

   FUNC_4(VAR_37, 1, ~1);
   if (VAR_57 == 0x0 && VAR_58 == 0x0)
    break;
   FUNC_11(VAR_42->dev, "GPU fault detected: %d 0x%08x\n", VAR_47, VAR_48);
   FUNC_11(VAR_42->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
    VAR_57);
   FUNC_11(VAR_42->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
    VAR_58);
   FUNC_10(VAR_42, VAR_58, VAR_57, VAR_59);
   break;
  case 167:
   FUNC_0("IH: VCE int: 0x%08x\n", VAR_48);
   switch (VAR_48) {
   case 0:
    FUNC_16(VAR_42, VAR_35);
    break;
   case 1:
    FUNC_16(VAR_42, VAR_36);
    break;
   default:
    FUNC_1("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
    break;
   }
   break;
  case 176:
  case 177:
   FUNC_16(VAR_42, VAR_32);
   break;
  case 181:
   FUNC_0("IH: CP EOP\n");

   VAR_50 = (VAR_49 & 0x60) >> 5;
   VAR_51 = (VAR_49 & 0x18) >> 3;
   VAR_52 = (VAR_49 & 0x7) >> 0;
   switch (VAR_50) {
   case 0:
    FUNC_16(VAR_42, VAR_32);
    break;
   case 1:
   case 2:
    if ((VAR_43->me == VAR_50) & (VAR_43->pipe == VAR_51))
     FUNC_16(VAR_42, VAR_0);
    if ((VAR_44->me == VAR_50) & (VAR_44->pipe == VAR_51))
     FUNC_16(VAR_42, VAR_1);
    break;
   }
   break;
  case 184:
   FUNC_1("Illegal register access in command stream\n");

   VAR_50 = (VAR_49 & 0x60) >> 5;
   VAR_51 = (VAR_49 & 0x18) >> 3;
   VAR_52 = (VAR_49 & 0x7) >> 0;
   switch (VAR_50) {
   case 0:



    VAR_56 = 1;
    break;
   case 1:

    VAR_56 = 1;
    break;
   case 2:

    VAR_56 = 1;
    break;
   }
   break;
  case 185:
   FUNC_1("Illegal instruction in command stream\n");

   VAR_50 = (VAR_49 & 0x60) >> 5;
   VAR_51 = (VAR_49 & 0x18) >> 3;
   VAR_52 = (VAR_49 & 0x7) >> 0;
   switch (VAR_50) {
   case 0:



    VAR_56 = 1;
    break;
   case 1:

    VAR_56 = 1;
    break;
   case 2:

    VAR_56 = 1;
    break;
   }
   break;
  case 224:

   VAR_50 = (VAR_49 & 0x3) >> 0;
   VAR_52 = (VAR_49 & 0xc) >> 2;
   FUNC_0("IH: SDMA trap\n");
   switch (VAR_50) {
   case 0:
    switch (VAR_52) {
    case 0:
     FUNC_16(VAR_42, VAR_30);
     break;
    case 1:

     break;
    case 2:

     break;
    }
    break;
   case 1:
    switch (VAR_52) {
    case 0:
     FUNC_16(VAR_42, VAR_2);
     break;
    case 1:

     break;
    case 2:

     break;
    }
    break;
   }
   break;
  case 230:
   FUNC_0("IH: thermal low to high\n");
   VAR_42->pm.dpm.thermal.high_to_low = 0;
   VAR_60 = 1;
   break;
  case 231:
   FUNC_0("IH: thermal high to low\n");
   VAR_42->pm.dpm.thermal.high_to_low = 1;
   VAR_60 = 1;
   break;
  case 233:
   FUNC_0("IH: GUI idle\n");
   break;
  case 241:
  case 247:
   FUNC_1("Illegal instruction in SDMA command stream\n");

   VAR_50 = (VAR_49 & 0x3) >> 0;
   VAR_52 = (VAR_49 & 0xc) >> 2;
   switch (VAR_50) {
   case 0:
    switch (VAR_52) {
    case 0:
     VAR_56 = 1;
     break;
    case 1:

     VAR_56 = 1;
     break;
    case 2:

     VAR_56 = 1;
     break;
    }
    break;
   case 1:
    switch (VAR_52) {
    case 0:
     VAR_56 = 1;
     break;
    case 1:

     VAR_56 = 1;
     break;
    case 2:

     VAR_56 = 1;
     break;
    }
    break;
   }
   break;
  default:
   FUNC_0("Unhandled interrupt: %d %d\n", VAR_47, VAR_48);
   break;
  }


  VAR_46 += 16;
  VAR_46 &= VAR_42->ih.ptr_mask;
  FUNC_3(VAR_15, VAR_46);
 }
 if (VAR_55)
  FUNC_19(&VAR_42->dp_work);
 if (VAR_54)
  FUNC_18(&VAR_42->hotplug_work, 0);
 if (VAR_56) {
  VAR_42->needs_reset = 1;
  FUNC_21(&VAR_42->fence_queue);
 }
 if (VAR_60)
  FUNC_19(&VAR_42->pm.dpm.thermal.work);
 VAR_42->ih.rptr = VAR_46;
 FUNC_6(&VAR_42->ih.lock, 0);


 VAR_45 = FUNC_8(VAR_42);
 if (VAR_45 != VAR_46)
  goto restart_ih;

 return VAR_16;
}
