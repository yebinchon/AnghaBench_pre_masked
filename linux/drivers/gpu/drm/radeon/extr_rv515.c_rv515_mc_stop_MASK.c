
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv515_mc_save {int vga_render_control; int vga_hdp_control; int* crtc_enabled; } ;
struct radeon_device {int num_crtc; int usec_timeout; scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__* VAR_15 ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,int) ;
 int FUNC_5 (int) ;

void FUNC_6(struct radeon_device *VAR_16, struct rv515_mc_save *VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23;

 VAR_17->vga_render_control = FUNC_0(VAR_13);
 VAR_17->vga_hdp_control = FUNC_0(VAR_14);


 FUNC_1(VAR_13, 0);

 for (VAR_22 = 0; VAR_22 < VAR_16->num_crtc; VAR_22++) {
  VAR_18 = FUNC_0(VAR_2 + VAR_15[VAR_22]) & VAR_1;
  if (VAR_18) {
   VAR_17->crtc_enabled[VAR_22] = 1;
   VAR_19 = FUNC_0(VAR_2 + VAR_15[VAR_22]);
   if (!(VAR_19 & VAR_0)) {
    FUNC_4(VAR_16, VAR_22);
    FUNC_1(VAR_3 + VAR_15[VAR_22], 1);
    VAR_19 |= VAR_0;
    FUNC_1(VAR_2 + VAR_15[VAR_22], VAR_19);
    FUNC_1(VAR_3 + VAR_15[VAR_22], 0);
   }

   VAR_20 = FUNC_2(VAR_16, VAR_22);
   for (VAR_23 = 0; VAR_23 < VAR_16->usec_timeout; VAR_23++) {
    if (FUNC_2(VAR_16, VAR_22) != VAR_20)
     break;
    FUNC_5(1);
   }


   FUNC_1(VAR_3 + VAR_15[VAR_22], 1);
   VAR_19 = FUNC_0(VAR_2 + VAR_15[VAR_22]);
   VAR_19 &= ~VAR_1;
   FUNC_1(VAR_2 + VAR_15[VAR_22], VAR_19);
   FUNC_1(VAR_3 + VAR_15[VAR_22], 0);
   VAR_17->crtc_enabled[VAR_22] = 0;

  } else {
   VAR_17->crtc_enabled[VAR_22] = 0;
  }
 }

 FUNC_3(VAR_16);

 if (VAR_16->family >= VAR_7) {
  if (VAR_16->family >= VAR_8)
   VAR_21 = FUNC_0(VAR_12);
  else
   VAR_21 = FUNC_0(VAR_11);
  if ((VAR_21 & VAR_10) != VAR_10) {

   FUNC_1(VAR_9, 0);

   VAR_21 |= VAR_10;
   if (VAR_16->family >= VAR_8)
    FUNC_1(VAR_12, VAR_21);
   else
    FUNC_1(VAR_11, VAR_21);
  }
 }

 FUNC_5(100);


 for (VAR_22 = 0; VAR_22 < VAR_16->num_crtc; VAR_22++) {
  if (VAR_17->crtc_enabled[VAR_22]) {
   VAR_19 = FUNC_0(VAR_4 + VAR_15[VAR_22]);
   if (!(VAR_19 & VAR_5)) {
    VAR_19 |= VAR_5;
    FUNC_1(VAR_4 + VAR_15[VAR_22], VAR_19);
   }
   VAR_19 = FUNC_0(VAR_6 + VAR_15[VAR_22]);
   if (!(VAR_19 & 1)) {
    VAR_19 |= 1;
    FUNC_1(VAR_6 + VAR_15[VAR_22], VAR_19);
   }
  }
 }
}
