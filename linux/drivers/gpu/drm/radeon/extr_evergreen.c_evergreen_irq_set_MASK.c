
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* hpd; int* afmt; int * pflip; scalar_t__* crtc_vblank_int; scalar_t__ dpm_thermal; int * ring_int; int installed; } ;
struct TYPE_3__ {int enabled; } ;
struct radeon_device {scalar_t__ family; int num_crtc; TYPE_2__ irq; TYPE_1__ ih; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (char*) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct radeon_device*,int,int) ;
 scalar_t__* VAR_30 ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*,scalar_t__,int,int,char*,int) ;

int FUNC_10(struct radeon_device *VAR_31)
{
 int VAR_32;
 u32 VAR_33 = VAR_9 | VAR_10;
 u32 VAR_34 = 0, VAR_35 = 0;
 u32 VAR_36 = 0;
 u32 VAR_37, VAR_38 = 0;
 u32 VAR_39 = 0;

 if (!VAR_31->irq.installed) {
  FUNC_3(1, "Can't enable IRQ/MSI because no handler is installed\n");
  return -VAR_15;
 }

 if (!VAR_31->ih.enabled) {
  FUNC_8(VAR_31);

  FUNC_7(VAR_31);
  return 0;
 }

 if (VAR_31->family == VAR_7)
  VAR_39 = FUNC_2(VAR_27) &
   ~(VAR_24 | VAR_25);
 else
  VAR_39 = FUNC_2(VAR_6) &
   ~(VAR_24 | VAR_25);

 VAR_37 = FUNC_2(VAR_14) & ~VAR_28;

 if (VAR_31->family >= VAR_8) {

  if (FUNC_5(&VAR_31->irq.ring_int[VAR_21])) {
   FUNC_1("evergreen_irq_set: sw int gfx\n");
   VAR_33 |= VAR_26;
  }
  if (FUNC_5(&VAR_31->irq.ring_int[VAR_3])) {
   FUNC_1("evergreen_irq_set: sw int cp1\n");
   VAR_34 |= VAR_26;
  }
  if (FUNC_5(&VAR_31->irq.ring_int[VAR_4])) {
   FUNC_1("evergreen_irq_set: sw int cp2\n");
   VAR_35 |= VAR_26;
  }
 } else {
  if (FUNC_5(&VAR_31->irq.ring_int[VAR_21])) {
   FUNC_1("evergreen_irq_set: sw int gfx\n");
   VAR_33 |= VAR_22;
   VAR_33 |= VAR_26;
  }
 }

 if (FUNC_5(&VAR_31->irq.ring_int[VAR_20])) {
  FUNC_1("r600_irq_set: sw int dma\n");
  VAR_37 |= VAR_28;
 }

 if (VAR_31->family >= VAR_8) {
  VAR_38 = FUNC_2(VAR_2) & ~VAR_28;
  if (FUNC_5(&VAR_31->irq.ring_int[VAR_5])) {
   FUNC_1("r600_irq_set: sw int dma1\n");
   VAR_38 |= VAR_28;
  }
 }

 if (VAR_31->irq.dpm_thermal) {
  FUNC_1("dpm thermal\n");
  VAR_39 |= VAR_24 | VAR_25;
 }

 if (VAR_31->family >= VAR_8) {
  FUNC_6(VAR_31, 0, VAR_33);
  FUNC_6(VAR_31, 1, VAR_34);
  FUNC_6(VAR_31, 2, VAR_35);
 } else
  FUNC_4(VAR_11, VAR_33);

 FUNC_4(VAR_14, VAR_37);

 if (VAR_31->family >= VAR_8)
  FUNC_4(VAR_2, VAR_38);

 FUNC_4(VAR_16, VAR_36);

 for (VAR_32 = 0; VAR_32 < VAR_31->num_crtc; VAR_32++) {
  FUNC_9(
      VAR_31, VAR_19 + VAR_30[VAR_32],
      VAR_29,
      VAR_31->irq.crtc_vblank_int[VAR_32] ||
      FUNC_5(&VAR_31->irq.pflip[VAR_32]), "vblank", VAR_32);
 }

 for (VAR_32 = 0; VAR_32 < VAR_31->num_crtc; VAR_32++)
  FUNC_4(VAR_17 + VAR_30[VAR_32], VAR_18);

 for (VAR_32 = 0; VAR_32 < 6; VAR_32++) {
  FUNC_9(
      VAR_31, FUNC_0(VAR_32),
      VAR_12 | VAR_13,
      VAR_31->irq.hpd[VAR_32], "HPD", VAR_32);
 }

 if (VAR_31->family == VAR_7)
  FUNC_4(VAR_27, VAR_39);
 else
  FUNC_4(VAR_6, VAR_39);

 for (VAR_32 = 0; VAR_32 < 6; VAR_32++) {
  FUNC_9(
      VAR_31, VAR_0 + VAR_30[VAR_32],
      VAR_1,
      VAR_31->irq.afmt[VAR_32], "HDMI", VAR_32);
 }


 FUNC_2(VAR_23);

 return 0;
}
