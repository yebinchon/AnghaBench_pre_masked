
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rv515_mc_save {int vga_hdp_control; int vga_render_control; scalar_t__* crtc_enabled; } ;
struct TYPE_2__ {scalar_t__ vram_start; } ;
struct radeon_device {int num_crtc; scalar_t__ family; int usec_timeout; TYPE_1__ mc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__* VAR_24 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct radeon_device *VAR_25, struct rv515_mc_save *VAR_26)
{
 u32 VAR_27, VAR_28;
 int VAR_29, VAR_30;


 for (VAR_29 = 0; VAR_29 < VAR_25->num_crtc; VAR_29++) {
  if (VAR_25->family >= VAR_8) {
   if (VAR_29 == 0) {
    FUNC_1(VAR_14,
           FUNC_5(VAR_25->mc.vram_start));
    FUNC_1(VAR_15,
           FUNC_5(VAR_25->mc.vram_start));
   } else {
    FUNC_1(VAR_16,
           FUNC_5(VAR_25->mc.vram_start));
    FUNC_1(VAR_17,
           FUNC_5(VAR_25->mc.vram_start));
   }
  }
  FUNC_1(VAR_22 + VAR_24[VAR_29],
         (u32)VAR_25->mc.vram_start);
  FUNC_1(VAR_23 + VAR_24[VAR_29],
         (u32)VAR_25->mc.vram_start);
 }
 FUNC_1(VAR_20, (u32)VAR_25->mc.vram_start);


 for (VAR_29 = 0; VAR_29 < VAR_25->num_crtc; VAR_29++) {
  if (VAR_26->crtc_enabled[VAR_29]) {
   VAR_27 = FUNC_0(VAR_6 + VAR_24[VAR_29]);
   if ((VAR_27 & 0x7) != 3) {
    VAR_27 &= ~0x7;
    VAR_27 |= 0x3;
    FUNC_1(VAR_6 + VAR_24[VAR_29], VAR_27);
   }
   VAR_27 = FUNC_0(VAR_3 + VAR_24[VAR_29]);
   if (VAR_27 & VAR_4) {
    VAR_27 &= ~VAR_4;
    FUNC_1(VAR_3 + VAR_24[VAR_29], VAR_27);
   }
   VAR_27 = FUNC_0(VAR_5 + VAR_24[VAR_29]);
   if (VAR_27 & 1) {
    VAR_27 &= ~1;
    FUNC_1(VAR_5 + VAR_24[VAR_29], VAR_27);
   }
   for (VAR_30 = 0; VAR_30 < VAR_25->usec_timeout; VAR_30++) {
    VAR_27 = FUNC_0(VAR_3 + VAR_24[VAR_29]);
    if ((VAR_27 & VAR_2) == 0)
     break;
    FUNC_4(1);
   }
  }
 }

 if (VAR_25->family >= VAR_7) {

  if (VAR_25->family >= VAR_8)
   VAR_27 = FUNC_0(VAR_18);
  else
   VAR_27 = FUNC_0(VAR_11);
  VAR_27 &= ~VAR_10;
  if (VAR_25->family >= VAR_8)
   FUNC_1(VAR_18, VAR_27);
  else
   FUNC_1(VAR_11, VAR_27);

  FUNC_1(VAR_9, VAR_12 | VAR_13);
 }

 for (VAR_29 = 0; VAR_29 < VAR_25->num_crtc; VAR_29++) {
  if (VAR_26->crtc_enabled[VAR_29]) {
   VAR_27 = FUNC_0(VAR_1 + VAR_24[VAR_29]);
   VAR_27 &= ~VAR_0;
   FUNC_1(VAR_1 + VAR_24[VAR_29], VAR_27);

   VAR_28 = FUNC_3(VAR_25, VAR_29);
   for (VAR_30 = 0; VAR_30 < VAR_25->usec_timeout; VAR_30++) {
    if (FUNC_3(VAR_25, VAR_29) != VAR_28)
     break;
    FUNC_4(1);
   }
  }
 }

 FUNC_1(VAR_21, VAR_26->vga_hdp_control);
 FUNC_2(1);
 FUNC_1(VAR_19, VAR_26->vga_render_control);
}
