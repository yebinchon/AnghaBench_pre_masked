
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* hpd; int * pflip; scalar_t__* crtc_vblank_int; scalar_t__ dpm_thermal; int * ring_int; int installed; } ;
struct TYPE_3__ {int enabled; } ;
struct radeon_device {int num_crtc; TYPE_2__ irq; TYPE_1__ ih; } ;


 int FUNC_0 (struct radeon_device*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_2 (char*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__* VAR_27 ;
 int FUNC_7 (struct radeon_device*,scalar_t__,int,int,char*,int) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;

int FUNC_10(struct radeon_device *VAR_28)
{
 int VAR_29;
 u32 VAR_30;
 u32 VAR_31 = 0, VAR_32 = 0;
 u32 VAR_33 = 0;
 u32 VAR_34, VAR_35;
 u32 VAR_36 = 0;

 if (!VAR_28->irq.installed) {
  FUNC_4(1, "Can't enable IRQ/MSI because no handler is installed\n");
  return -VAR_14;
 }

 if (!VAR_28->ih.enabled) {
  FUNC_9(VAR_28);

  FUNC_8(VAR_28);
  return 0;
 }

 VAR_30 = FUNC_3(VAR_6) &
  (VAR_4 | VAR_5);

 VAR_34 = FUNC_3(VAR_13 + VAR_11) & ~VAR_25;
 VAR_35 = FUNC_3(VAR_13 + VAR_12) & ~VAR_25;

 VAR_36 = FUNC_3(VAR_3) &
  ~(VAR_22 | VAR_23);


 if (FUNC_6(&VAR_28->irq.ring_int[VAR_20])) {
  FUNC_2("si_irq_set: sw int gfx\n");
  VAR_30 |= VAR_24;
 }
 if (FUNC_6(&VAR_28->irq.ring_int[VAR_0])) {
  FUNC_2("si_irq_set: sw int cp1\n");
  VAR_31 |= VAR_24;
 }
 if (FUNC_6(&VAR_28->irq.ring_int[VAR_1])) {
  FUNC_2("si_irq_set: sw int cp2\n");
  VAR_32 |= VAR_24;
 }
 if (FUNC_6(&VAR_28->irq.ring_int[VAR_19])) {
  FUNC_2("si_irq_set: sw int dma\n");
  VAR_34 |= VAR_25;
 }

 if (FUNC_6(&VAR_28->irq.ring_int[VAR_2])) {
  FUNC_2("si_irq_set: sw int dma1\n");
  VAR_35 |= VAR_25;
 }

 FUNC_5(VAR_6, VAR_30);
 FUNC_5(VAR_7, VAR_31);
 FUNC_5(VAR_8, VAR_32);

 FUNC_5(VAR_13 + VAR_11, VAR_34);
 FUNC_5(VAR_13 + VAR_12, VAR_35);

 FUNC_5(VAR_15, VAR_33);

 if (VAR_28->irq.dpm_thermal) {
  FUNC_2("dpm thermal\n");
  VAR_36 |= VAR_22 | VAR_23;
 }

 for (VAR_29 = 0; VAR_29 < VAR_28->num_crtc; VAR_29++) {
  FUNC_7(
      VAR_28, VAR_18 + VAR_27[VAR_29], VAR_26,
      VAR_28->irq.crtc_vblank_int[VAR_29] ||
      FUNC_6(&VAR_28->irq.pflip[VAR_29]), "vblank", VAR_29);
 }

 for (VAR_29 = 0; VAR_29 < VAR_28->num_crtc; VAR_29++)
  FUNC_5(VAR_16 + VAR_27[VAR_29], VAR_17);

 if (!FUNC_0(VAR_28)) {
  for (VAR_29 = 0; VAR_29 < 6; VAR_29++) {
   FUNC_7(
       VAR_28, FUNC_1(VAR_29),
       VAR_9 | VAR_10,
       VAR_28->irq.hpd[VAR_29], "HPD", VAR_29);
  }
 }

 FUNC_5(VAR_3, VAR_36);


 FUNC_3(VAR_21);

 return 0;
}
