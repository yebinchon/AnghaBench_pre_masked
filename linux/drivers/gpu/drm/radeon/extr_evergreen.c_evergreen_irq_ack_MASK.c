
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* grph_int; int* disp_int; int* afmt_status; } ;
struct TYPE_5__ {TYPE_1__ evergreen; } ;
struct TYPE_6__ {TYPE_2__ stat_regs; } ;
struct radeon_device {int num_crtc; TYPE_3__ irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__* VAR_17 ;
 scalar_t__* VAR_18 ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_19)
{
 int VAR_20, VAR_21;
 u32 *VAR_22 = VAR_19->irq.stat_regs.evergreen.grph_int;
 u32 *VAR_23 = VAR_19->irq.stat_regs.evergreen.disp_int;
 u32 *VAR_24 = VAR_19->irq.stat_regs.evergreen.afmt_status;

 for (VAR_20 = 0; VAR_20 < 6; VAR_20++) {
  VAR_23[VAR_20] = FUNC_1(VAR_18[VAR_20]);
  VAR_24[VAR_20] = FUNC_1(VAR_3 + VAR_17[VAR_20]);
  if (VAR_20 < VAR_19->num_crtc)
   VAR_22[VAR_20] = FUNC_1(VAR_8 + VAR_17[VAR_20]);
 }


 for (VAR_20 = 0; VAR_20 < VAR_19->num_crtc; VAR_20 += 2) {
  for (VAR_21 = VAR_20; VAR_21 < (VAR_20 + 2); VAR_21++) {
   if (VAR_22[VAR_21] & VAR_10)
    FUNC_2(VAR_8 + VAR_17[VAR_21],
           VAR_9);
  }

  for (VAR_21 = VAR_20; VAR_21 < (VAR_20 + 2); VAR_21++) {
   if (VAR_23[VAR_21] & VAR_11)
    FUNC_2(VAR_14 + VAR_17[VAR_21],
           VAR_13);
   if (VAR_23[VAR_21] & VAR_12)
    FUNC_2(VAR_16 + VAR_17[VAR_21],
           VAR_15);
  }
 }

 for (VAR_20 = 0; VAR_20 < 6; VAR_20++) {
  if (VAR_23[VAR_20] & VAR_4)
   FUNC_3(FUNC_0(VAR_20), VAR_6);
 }

 for (VAR_20 = 0; VAR_20 < 6; VAR_20++) {
  if (VAR_23[VAR_20] & VAR_5)
   FUNC_3(FUNC_0(VAR_20), VAR_7);
 }

 for (VAR_20 = 0; VAR_20 < 6; VAR_20++) {
  if (VAR_24[VAR_20] & VAR_1)
   FUNC_3(VAR_0 + VAR_17[VAR_20],
      VAR_2);
 }
}
