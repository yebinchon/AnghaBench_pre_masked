
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
struct TYPE_8__ {int high_to_low; int work; } ;
struct TYPE_9__ {TYPE_1__ thermal; } ;
struct TYPE_14__ {int vblank_sync; TYPE_2__ dpm; scalar_t__ dpm_enabled; } ;
struct TYPE_11__ {int disp_int; int disp_int_cont; int disp_int_cont2; int hdmi0_status; int hdmi1_status; } ;
struct TYPE_12__ {TYPE_4__ r600; } ;
struct TYPE_13__ {TYPE_5__ stat_regs; int * pflip; int vblank_queue; int * crtc_vblank_int; } ;
struct radeon_device {TYPE_3__ ih; TYPE_7__ pm; int audio_work; int hotplug_work; TYPE_6__ irq; int ddev; int msi_enabled; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*,int) ;
 int FUNC_13 (struct radeon_device*,int ) ;
 int VAR_18 ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct radeon_device *VAR_19)
{
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22, VAR_23;
 u32 VAR_24;
 bool VAR_25 = 0;
 bool VAR_26 = 0;
 bool VAR_27 = 0;

 if (!VAR_19->ih.enabled || VAR_19->shutdown)
  return VAR_10;


 if (!VAR_19->msi_enabled)
  FUNC_2(VAR_8);

 VAR_20 = FUNC_9(VAR_19);

restart_ih:

 if (FUNC_6(&VAR_19->ih.lock, 1))
  return VAR_10;

 VAR_21 = VAR_19->ih.rptr;
 FUNC_0("r600_irq_process start: rptr %d, wptr %d\n", VAR_21, VAR_20);


 FUNC_14();


 FUNC_10(VAR_19);

 while (VAR_21 != VAR_20) {

  VAR_24 = VAR_21 / 4;
  VAR_22 = FUNC_8(VAR_19->ih.ring[VAR_24]) & 0xff;
  VAR_23 = FUNC_8(VAR_19->ih.ring[VAR_24 + 1]) & 0xfffffff;

  switch (VAR_22) {
  case 1:
   switch (VAR_23) {
   case 0:
    if (!(VAR_19->irq.stat_regs.r600.disp_int & VAR_11))
     FUNC_0("IH: D1 vblank - IH event w/o asserted irq bit?\n");

    if (VAR_19->irq.crtc_vblank_int[0]) {
     FUNC_7(VAR_19->ddev, 0);
     VAR_19->pm.vblank_sync = 1;
     FUNC_17(&VAR_19->irq.vblank_queue);
    }
    if (FUNC_4(&VAR_19->irq.pflip[0]))
     FUNC_12(VAR_19, 0);
    VAR_19->irq.stat_regs.r600.disp_int &= ~VAR_11;
    FUNC_0("IH: D1 vblank\n");

    break;
   case 1:
    if (!(VAR_19->irq.stat_regs.r600.disp_int & VAR_12))
        FUNC_0("IH: D1 vline - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int &= ~VAR_12;
    FUNC_0("IH: D1 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_22, VAR_23);
    break;
   }
   break;
  case 5:
   switch (VAR_23) {
   case 0:
    if (!(VAR_19->irq.stat_regs.r600.disp_int & VAR_13))
     FUNC_0("IH: D2 vblank - IH event w/o asserted irq bit?\n");

    if (VAR_19->irq.crtc_vblank_int[1]) {
     FUNC_7(VAR_19->ddev, 1);
     VAR_19->pm.vblank_sync = 1;
     FUNC_17(&VAR_19->irq.vblank_queue);
    }
    if (FUNC_4(&VAR_19->irq.pflip[1]))
     FUNC_12(VAR_19, 1);
    VAR_19->irq.stat_regs.r600.disp_int &= ~VAR_13;
    FUNC_0("IH: D2 vblank\n");

    break;
   case 1:
    if (!(VAR_19->irq.stat_regs.r600.disp_int & VAR_14))
     FUNC_0("IH: D2 vline - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int &= ~VAR_14;
    FUNC_0("IH: D2 vline\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_22, VAR_23);
    break;
   }
   break;
  case 9:
   FUNC_0("IH: D1 flip\n");
   if (VAR_18 > 0)
    FUNC_11(VAR_19, 0);
   break;
  case 11:
   FUNC_0("IH: D2 flip\n");
   if (VAR_18 > 0)
    FUNC_11(VAR_19, 1);
   break;
  case 19:
   switch (VAR_23) {
   case 0:
    if (!(VAR_19->irq.stat_regs.r600.disp_int & VAR_0))
     FUNC_0("IH: HPD1 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int &= ~VAR_0;
    VAR_25 = 1;
    FUNC_0("IH: HPD1\n");
    break;
   case 1:
    if (!(VAR_19->irq.stat_regs.r600.disp_int & VAR_1))
     FUNC_0("IH: HPD2 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int &= ~VAR_1;
    VAR_25 = 1;
    FUNC_0("IH: HPD2\n");
    break;
   case 4:
    if (!(VAR_19->irq.stat_regs.r600.disp_int_cont & VAR_2))
     FUNC_0("IH: HPD3 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int_cont &= ~VAR_2;
    VAR_25 = 1;
    FUNC_0("IH: HPD3\n");
    break;
   case 5:
    if (!(VAR_19->irq.stat_regs.r600.disp_int_cont & VAR_3))
     FUNC_0("IH: HPD4 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int_cont &= ~VAR_3;
    VAR_25 = 1;
    FUNC_0("IH: HPD4\n");
    break;
   case 10:
    if (!(VAR_19->irq.stat_regs.r600.disp_int_cont2 & VAR_4))
     FUNC_0("IH: HPD5 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int_cont2 &= ~VAR_4;
    VAR_25 = 1;
    FUNC_0("IH: HPD5\n");
    break;
   case 12:
    if (!(VAR_19->irq.stat_regs.r600.disp_int_cont2 & VAR_5))
     FUNC_0("IH: HPD6 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.disp_int_cont2 &= ~VAR_5;
    VAR_25 = 1;
    FUNC_0("IH: HPD6\n");

    break;
   default:
    FUNC_0("Unhandled interrupt: %d %d\n", VAR_22, VAR_23);
    break;
   }
   break;
  case 21:
   switch (VAR_23) {
   case 4:
    if (!(VAR_19->irq.stat_regs.r600.hdmi0_status & VAR_6))
     FUNC_0("IH: HDMI0 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.hdmi0_status &= ~VAR_6;
    VAR_26 = 1;
    FUNC_0("IH: HDMI0\n");

    break;
   case 5:
    if (!(VAR_19->irq.stat_regs.r600.hdmi1_status & VAR_6))
     FUNC_0("IH: HDMI1 - IH event w/o asserted irq bit?\n");

    VAR_19->irq.stat_regs.r600.hdmi1_status &= ~VAR_6;
    VAR_26 = 1;
    FUNC_0("IH: HDMI1\n");

    break;
   default:
    FUNC_1("Unhandled interrupt: %d %d\n", VAR_22, VAR_23);
    break;
   }
   break;
  case 124:
   FUNC_0("IH: UVD int: 0x%08x\n", VAR_23);
   FUNC_13(VAR_19, VAR_16);
   break;
  case 176:
  case 177:
  case 178:
   FUNC_0("IH: CP int: 0x%08x\n", VAR_23);
   FUNC_13(VAR_19, VAR_17);
   break;
  case 181:
   FUNC_0("IH: CP EOP\n");
   FUNC_13(VAR_19, VAR_17);
   break;
  case 224:
   FUNC_0("IH: DMA trap\n");
   FUNC_13(VAR_19, VAR_15);
   break;
  case 230:
   FUNC_0("IH: thermal low to high\n");
   VAR_19->pm.dpm.thermal.high_to_low = 0;
   VAR_27 = 1;
   break;
  case 231:
   FUNC_0("IH: thermal high to low\n");
   VAR_19->pm.dpm.thermal.high_to_low = 1;
   VAR_27 = 1;
   break;
  case 233:
   FUNC_0("IH: GUI idle\n");
   break;
  default:
   FUNC_0("Unhandled interrupt: %d %d\n", VAR_22, VAR_23);
   break;
  }


  VAR_21 += 16;
  VAR_21 &= VAR_19->ih.ptr_mask;
  FUNC_3(VAR_7, VAR_21);
 }
 if (VAR_25)
  FUNC_15(&VAR_19->hotplug_work, 0);
 if (VAR_26)
  FUNC_16(&VAR_19->audio_work);
 if (VAR_27 && VAR_19->pm.dpm_enabled)
  FUNC_16(&VAR_19->pm.dpm.thermal.work);
 VAR_19->ih.rptr = VAR_21;
 FUNC_5(&VAR_19->ih.lock, 0);


 VAR_20 = FUNC_9(VAR_19);
 if (VAR_20 != VAR_21)
  goto restart_ih;

 return VAR_9;
}
