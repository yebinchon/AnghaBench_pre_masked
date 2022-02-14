
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* disp_int; int* grph_int; } ;
struct TYPE_5__ {TYPE_1__ evergreen; } ;
struct TYPE_6__ {TYPE_2__ stat_regs; } ;
struct radeon_device {int num_crtc; TYPE_3__ irq; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__* VAR_13 ;
 scalar_t__* VAR_14 ;

__attribute__((used)) static inline void FUNC_5(struct radeon_device *VAR_15)
{
 int VAR_16, VAR_17;
 u32 *VAR_18 = VAR_15->irq.stat_regs.evergreen.disp_int;
 u32 *VAR_19 = VAR_15->irq.stat_regs.evergreen.grph_int;

 if (FUNC_0(VAR_15))
  return;

 for (VAR_16 = 0; VAR_16 < 6; VAR_16++) {
  VAR_18[VAR_16] = FUNC_2(VAR_14[VAR_16]);
  if (VAR_16 < VAR_15->num_crtc)
   VAR_19[VAR_16] = FUNC_2(VAR_4 + VAR_13[VAR_16]);
 }


 for (VAR_16 = 0; VAR_16 < VAR_15->num_crtc; VAR_16 += 2) {
  for (VAR_17 = VAR_16; VAR_17 < (VAR_16 + 2); VAR_17++) {
   if (VAR_19[VAR_17] & VAR_6)
    FUNC_3(VAR_4 + VAR_13[VAR_17],
           VAR_5);
  }

  for (VAR_17 = VAR_16; VAR_17 < (VAR_16 + 2); VAR_17++) {
   if (VAR_18[VAR_17] & VAR_7)
    FUNC_3(VAR_10 + VAR_13[VAR_17],
           VAR_9);
   if (VAR_18[VAR_17] & VAR_8)
    FUNC_3(VAR_12 + VAR_13[VAR_17],
           VAR_11);
  }
 }

 for (VAR_16 = 0; VAR_16 < 6; VAR_16++) {
  if (VAR_18[VAR_16] & VAR_0)
   FUNC_4(FUNC_1(VAR_16), VAR_2);
 }

 for (VAR_16 = 0; VAR_16 < 6; VAR_16++) {
  if (VAR_18[VAR_16] & VAR_1)
   FUNC_4(FUNC_1(VAR_16), VAR_3);
 }
}
