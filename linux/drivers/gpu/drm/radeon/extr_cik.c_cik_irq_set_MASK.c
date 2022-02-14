
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int me; int pipe; } ;
struct TYPE_3__ {scalar_t__* hpd; int * pflip; scalar_t__* crtc_vblank_int; int * ring_int; int installed; } ;
struct TYPE_4__ {int enabled; } ;
struct radeon_device {int num_crtc; TYPE_1__ irq; struct radeon_ring* ring; TYPE_2__ ih; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (char*,...) ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;

int FUNC_7(struct radeon_device *VAR_44)
{
 u32 VAR_45;
 u32 VAR_46, VAR_47, VAR_48, VAR_49;
 u32 VAR_50, VAR_51, VAR_52, VAR_53;
 u32 VAR_54 = 0, VAR_55 = 0, VAR_56 = 0, VAR_57 = 0, VAR_58 = 0, VAR_59 = 0;
 u32 VAR_60, VAR_61, VAR_62, VAR_63, VAR_64, VAR_65;
 u32 VAR_66 = 0;
 u32 VAR_67, VAR_68;

 if (!VAR_44->irq.installed) {
  FUNC_2(1, "Can't enable IRQ/MSI because no handler is installed\n");
  return -VAR_22;
 }

 if (!VAR_44->ih.enabled) {
  FUNC_6(VAR_44);

  FUNC_5(VAR_44);
  return 0;
 }

 VAR_45 = FUNC_1(VAR_5) &
  (VAR_3 | VAR_4);
 VAR_45 |= VAR_33 | VAR_34;

 VAR_60 = FUNC_1(VAR_14) & ~(VAR_20 | VAR_21);
 VAR_61 = FUNC_1(VAR_15) & ~(VAR_20 | VAR_21);
 VAR_62 = FUNC_1(VAR_16) & ~(VAR_20 | VAR_21);
 VAR_63 = FUNC_1(VAR_17) & ~(VAR_20 | VAR_21);
 VAR_64 = FUNC_1(VAR_18) & ~(VAR_20 | VAR_21);
 VAR_65 = FUNC_1(VAR_19) & ~(VAR_20 | VAR_21);

 VAR_67 = FUNC_1(VAR_37 + VAR_38) & ~VAR_42;
 VAR_68 = FUNC_1(VAR_37 + VAR_39) & ~VAR_42;

 VAR_46 = FUNC_1(VAR_6) & ~VAR_41;
 VAR_47 = FUNC_1(VAR_7) & ~VAR_41;
 VAR_48 = FUNC_1(VAR_8) & ~VAR_41;
 VAR_49 = FUNC_1(VAR_9) & ~VAR_41;
 VAR_50 = FUNC_1(VAR_10) & ~VAR_41;
 VAR_51 = FUNC_1(VAR_11) & ~VAR_41;
 VAR_52 = FUNC_1(VAR_12) & ~VAR_41;
 VAR_53 = FUNC_1(VAR_13) & ~VAR_41;


 if (FUNC_4(&VAR_44->irq.ring_int[VAR_36])) {
  FUNC_0("cik_irq_set: sw int gfx\n");
  VAR_45 |= VAR_41;
 }
 if (FUNC_4(&VAR_44->irq.ring_int[VAR_0])) {
  struct radeon_ring *VAR_69 = &VAR_44->ring[VAR_0];
  FUNC_0("si_irq_set: sw int cp1\n");
  if (VAR_69->me == 1) {
   switch (VAR_69->pipe) {
   case 0:
    VAR_46 |= VAR_41;
    break;
   case 1:
    VAR_47 |= VAR_41;
    break;
   case 2:
    VAR_48 |= VAR_41;
    break;
   case 3:
    VAR_48 |= VAR_41;
    break;
   default:
    FUNC_0("si_irq_set: sw int cp1 invalid pipe %d\n", VAR_69->pipe);
    break;
   }
  } else if (VAR_69->me == 2) {
   switch (VAR_69->pipe) {
   case 0:
    VAR_50 |= VAR_41;
    break;
   case 1:
    VAR_51 |= VAR_41;
    break;
   case 2:
    VAR_52 |= VAR_41;
    break;
   case 3:
    VAR_52 |= VAR_41;
    break;
   default:
    FUNC_0("si_irq_set: sw int cp1 invalid pipe %d\n", VAR_69->pipe);
    break;
   }
  } else {
   FUNC_0("si_irq_set: sw int cp1 invalid me %d\n", VAR_69->me);
  }
 }
 if (FUNC_4(&VAR_44->irq.ring_int[VAR_1])) {
  struct radeon_ring *VAR_70 = &VAR_44->ring[VAR_1];
  FUNC_0("si_irq_set: sw int cp2\n");
  if (VAR_70->me == 1) {
   switch (VAR_70->pipe) {
   case 0:
    VAR_46 |= VAR_41;
    break;
   case 1:
    VAR_47 |= VAR_41;
    break;
   case 2:
    VAR_48 |= VAR_41;
    break;
   case 3:
    VAR_48 |= VAR_41;
    break;
   default:
    FUNC_0("si_irq_set: sw int cp2 invalid pipe %d\n", VAR_70->pipe);
    break;
   }
  } else if (VAR_70->me == 2) {
   switch (VAR_70->pipe) {
   case 0:
    VAR_50 |= VAR_41;
    break;
   case 1:
    VAR_51 |= VAR_41;
    break;
   case 2:
    VAR_52 |= VAR_41;
    break;
   case 3:
    VAR_52 |= VAR_41;
    break;
   default:
    FUNC_0("si_irq_set: sw int cp2 invalid pipe %d\n", VAR_70->pipe);
    break;
   }
  } else {
   FUNC_0("si_irq_set: sw int cp2 invalid me %d\n", VAR_70->me);
  }
 }

 if (FUNC_4(&VAR_44->irq.ring_int[VAR_35])) {
  FUNC_0("cik_irq_set: sw int dma\n");
  VAR_67 |= VAR_42;
 }

 if (FUNC_4(&VAR_44->irq.ring_int[VAR_2])) {
  FUNC_0("cik_irq_set: sw int dma1\n");
  VAR_68 |= VAR_42;
 }

 if (VAR_44->irq.crtc_vblank_int[0] ||
     FUNC_4(&VAR_44->irq.pflip[0])) {
  FUNC_0("cik_irq_set: vblank 0\n");
  VAR_54 |= VAR_43;
 }
 if (VAR_44->irq.crtc_vblank_int[1] ||
     FUNC_4(&VAR_44->irq.pflip[1])) {
  FUNC_0("cik_irq_set: vblank 1\n");
  VAR_55 |= VAR_43;
 }
 if (VAR_44->irq.crtc_vblank_int[2] ||
     FUNC_4(&VAR_44->irq.pflip[2])) {
  FUNC_0("cik_irq_set: vblank 2\n");
  VAR_56 |= VAR_43;
 }
 if (VAR_44->irq.crtc_vblank_int[3] ||
     FUNC_4(&VAR_44->irq.pflip[3])) {
  FUNC_0("cik_irq_set: vblank 3\n");
  VAR_57 |= VAR_43;
 }
 if (VAR_44->irq.crtc_vblank_int[4] ||
     FUNC_4(&VAR_44->irq.pflip[4])) {
  FUNC_0("cik_irq_set: vblank 4\n");
  VAR_58 |= VAR_43;
 }
 if (VAR_44->irq.crtc_vblank_int[5] ||
     FUNC_4(&VAR_44->irq.pflip[5])) {
  FUNC_0("cik_irq_set: vblank 5\n");
  VAR_59 |= VAR_43;
 }
 if (VAR_44->irq.hpd[0]) {
  FUNC_0("cik_irq_set: hpd 1\n");
  VAR_60 |= VAR_20 | VAR_21;
 }
 if (VAR_44->irq.hpd[1]) {
  FUNC_0("cik_irq_set: hpd 2\n");
  VAR_61 |= VAR_20 | VAR_21;
 }
 if (VAR_44->irq.hpd[2]) {
  FUNC_0("cik_irq_set: hpd 3\n");
  VAR_62 |= VAR_20 | VAR_21;
 }
 if (VAR_44->irq.hpd[3]) {
  FUNC_0("cik_irq_set: hpd 4\n");
  VAR_63 |= VAR_20 | VAR_21;
 }
 if (VAR_44->irq.hpd[4]) {
  FUNC_0("cik_irq_set: hpd 5\n");
  VAR_64 |= VAR_20 | VAR_21;
 }
 if (VAR_44->irq.hpd[5]) {
  FUNC_0("cik_irq_set: hpd 6\n");
  VAR_65 |= VAR_20 | VAR_21;
 }

 FUNC_3(VAR_5, VAR_45);

 FUNC_3(VAR_37 + VAR_38, VAR_67);
 FUNC_3(VAR_37 + VAR_39, VAR_68);

 FUNC_3(VAR_6, VAR_46);
 FUNC_3(VAR_7, VAR_47);
 FUNC_3(VAR_8, VAR_48);
 FUNC_3(VAR_9, VAR_49);
 FUNC_3(VAR_10, VAR_50);
 FUNC_3(VAR_11, VAR_51);
 FUNC_3(VAR_12, VAR_52);
 FUNC_3(VAR_13, VAR_53);

 FUNC_3(VAR_29, VAR_66);

 FUNC_3(VAR_32 + VAR_23, VAR_54);
 FUNC_3(VAR_32 + VAR_24, VAR_55);
 if (VAR_44->num_crtc >= 4) {
  FUNC_3(VAR_32 + VAR_25, VAR_56);
  FUNC_3(VAR_32 + VAR_26, VAR_57);
 }
 if (VAR_44->num_crtc >= 6) {
  FUNC_3(VAR_32 + VAR_27, VAR_58);
  FUNC_3(VAR_32 + VAR_28, VAR_59);
 }

 if (VAR_44->num_crtc >= 2) {
  FUNC_3(VAR_30 + VAR_23,
         VAR_31);
  FUNC_3(VAR_30 + VAR_24,
         VAR_31);
 }
 if (VAR_44->num_crtc >= 4) {
  FUNC_3(VAR_30 + VAR_25,
         VAR_31);
  FUNC_3(VAR_30 + VAR_26,
         VAR_31);
 }
 if (VAR_44->num_crtc >= 6) {
  FUNC_3(VAR_30 + VAR_27,
         VAR_31);
  FUNC_3(VAR_30 + VAR_28,
         VAR_31);
 }

 FUNC_3(VAR_14, VAR_60);
 FUNC_3(VAR_15, VAR_61);
 FUNC_3(VAR_16, VAR_62);
 FUNC_3(VAR_17, VAR_63);
 FUNC_3(VAR_18, VAR_64);
 FUNC_3(VAR_19, VAR_65);


 FUNC_1(VAR_40);

 return 0;
}
