
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__* afmt; scalar_t__* hpd; int * pflip; scalar_t__* crtc_vblank_int; int * ring_int; scalar_t__ dpm_thermal; int installed; } ;
struct TYPE_3__ {int enabled; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ irq; TYPE_1__ ih; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (char*) ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int VAR_35 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_42)
{
 u32 VAR_43 = VAR_5 | VAR_6;
 u32 VAR_44 = 0;
 u32 VAR_45, VAR_46, VAR_47, VAR_48 = 0, VAR_49 = 0, VAR_50 = 0;
 u32 VAR_51 = 0;
 u32 VAR_52, VAR_53;
 u32 VAR_54;
 u32 VAR_55 = 0;

 if (!VAR_42->irq.installed) {
  FUNC_4(1, "Can't enable IRQ/MSI because no handler is installed\n");
  return -VAR_28;
 }

 if (!VAR_42->ih.enabled) {
  FUNC_8(VAR_42);

  FUNC_7(VAR_42);
  return 0;
 }

 if (FUNC_0(VAR_42)) {
  VAR_45 = FUNC_3(VAR_18) & ~VAR_24;
  VAR_46 = FUNC_3(VAR_19) & ~VAR_24;
  VAR_47 = FUNC_3(VAR_20) & ~VAR_24;
  VAR_48 = FUNC_3(VAR_21) & ~VAR_24;
  if (FUNC_1(VAR_42)) {
   VAR_49 = FUNC_3(VAR_22) & ~VAR_24;
   VAR_50 = FUNC_3(VAR_23) & ~VAR_24;
   VAR_52 = FUNC_3(VAR_0 + VAR_13) & ~VAR_1;
   VAR_53 = FUNC_3(VAR_0 + VAR_14) & ~VAR_1;
  } else {
   VAR_52 = FUNC_3(VAR_30) & ~VAR_31;
   VAR_53 = FUNC_3(VAR_12) & ~VAR_31;
  }
 } else {
  VAR_45 = FUNC_3(VAR_15) & ~VAR_24;
  VAR_46 = FUNC_3(VAR_16) & ~VAR_24;
  VAR_47 = FUNC_3(VAR_17) & ~VAR_24;
  VAR_52 = FUNC_3(VAR_30) & ~VAR_31;
  VAR_53 = FUNC_3(VAR_32) & ~VAR_31;
 }

 VAR_54 = FUNC_3(VAR_25) & ~VAR_41;

 if ((VAR_42->family > VAR_3) && (VAR_42->family < VAR_4)) {
  VAR_55 = FUNC_3(VAR_2) &
   ~(VAR_38 | VAR_39);
 } else if (VAR_42->family >= VAR_4) {
  VAR_55 = FUNC_3(VAR_36) &
   ~(VAR_38 | VAR_39);
 }
 if (VAR_42->irq.dpm_thermal) {
  FUNC_2("dpm thermal\n");
  VAR_55 |= VAR_38 | VAR_39;
 }

 if (FUNC_6(&VAR_42->irq.ring_int[VAR_34])) {
  FUNC_2("r600_irq_set: sw int\n");
  VAR_43 |= VAR_35;
  VAR_43 |= VAR_40;
 }

 if (FUNC_6(&VAR_42->irq.ring_int[VAR_33])) {
  FUNC_2("r600_irq_set: sw int dma\n");
  VAR_54 |= VAR_41;
 }

 if (VAR_42->irq.crtc_vblank_int[0] ||
     FUNC_6(&VAR_42->irq.pflip[0])) {
  FUNC_2("r600_irq_set: vblank 0\n");
  VAR_44 |= VAR_9;
 }
 if (VAR_42->irq.crtc_vblank_int[1] ||
     FUNC_6(&VAR_42->irq.pflip[1])) {
  FUNC_2("r600_irq_set: vblank 1\n");
  VAR_44 |= VAR_11;
 }
 if (VAR_42->irq.hpd[0]) {
  FUNC_2("r600_irq_set: hpd 1\n");
  VAR_45 |= VAR_24;
 }
 if (VAR_42->irq.hpd[1]) {
  FUNC_2("r600_irq_set: hpd 2\n");
  VAR_46 |= VAR_24;
 }
 if (VAR_42->irq.hpd[2]) {
  FUNC_2("r600_irq_set: hpd 3\n");
  VAR_47 |= VAR_24;
 }
 if (VAR_42->irq.hpd[3]) {
  FUNC_2("r600_irq_set: hpd 4\n");
  VAR_48 |= VAR_24;
 }
 if (VAR_42->irq.hpd[4]) {
  FUNC_2("r600_irq_set: hpd 5\n");
  VAR_49 |= VAR_24;
 }
 if (VAR_42->irq.hpd[5]) {
  FUNC_2("r600_irq_set: hpd 6\n");
  VAR_50 |= VAR_24;
 }
 if (VAR_42->irq.afmt[0]) {
  FUNC_2("r600_irq_set: hdmi 0\n");
  VAR_52 |= VAR_31;
 }
 if (VAR_42->irq.afmt[1]) {
  FUNC_2("r600_irq_set: hdmi 0\n");
  VAR_53 |= VAR_31;
 }

 FUNC_5(VAR_7, VAR_43);
 FUNC_5(VAR_25, VAR_54);
 FUNC_5(VAR_27, VAR_44);
 FUNC_5(VAR_8, VAR_26);
 FUNC_5(VAR_10, VAR_26);
 FUNC_5(VAR_29, VAR_51);
 if (FUNC_0(VAR_42)) {
  FUNC_5(VAR_18, VAR_45);
  FUNC_5(VAR_19, VAR_46);
  FUNC_5(VAR_20, VAR_47);
  FUNC_5(VAR_21, VAR_48);
  if (FUNC_1(VAR_42)) {
   FUNC_5(VAR_22, VAR_49);
   FUNC_5(VAR_23, VAR_50);
   FUNC_5(VAR_0 + VAR_13, VAR_52);
   FUNC_5(VAR_0 + VAR_14, VAR_53);
  } else {
   FUNC_5(VAR_30, VAR_52);
   FUNC_5(VAR_12, VAR_53);
  }
 } else {
  FUNC_5(VAR_15, VAR_45);
  FUNC_5(VAR_16, VAR_46);
  FUNC_5(VAR_17, VAR_47);
  FUNC_5(VAR_30, VAR_52);
  FUNC_5(VAR_32, VAR_53);
 }
 if ((VAR_42->family > VAR_3) && (VAR_42->family < VAR_4)) {
  FUNC_5(VAR_2, VAR_55);
 } else if (VAR_42->family >= VAR_4) {
  FUNC_5(VAR_36, VAR_55);
 }


 FUNC_3(VAR_37);

 return 0;
}
