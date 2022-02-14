
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__** crtcs; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct drm_display_mode {int crtc_vdisplay; int crtc_vtotal; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int ktime_t ;
struct TYPE_3__ {scalar_t__ lb_vblank_lead_lines; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (scalar_t__) ;
 unsigned int VAR_25 ;
 int FUNC_3 () ;

int FUNC_4(struct drm_device *VAR_26, unsigned int VAR_27,
          unsigned int VAR_28, int *VAR_29, int *VAR_30,
          ktime_t *VAR_31, ktime_t *VAR_32,
          const struct drm_display_mode *VAR_33)
{
 u32 VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;
 int VAR_37, VAR_38, VAR_39, VAR_40 = 0;
 bool VAR_41 = 1;

 struct radeon_device *VAR_42 = VAR_26->dev_private;




 if (VAR_31)
  *VAR_31 = FUNC_3();

 if (FUNC_1(VAR_42)) {
  if (VAR_27 == 0) {
   VAR_35 = FUNC_2(VAR_14 +
         VAR_7);
   VAR_36 = FUNC_2(VAR_13 +
       VAR_7);
   VAR_40 |= VAR_6;
  }
  if (VAR_27 == 1) {
   VAR_35 = FUNC_2(VAR_14 +
         VAR_8);
   VAR_36 = FUNC_2(VAR_13 +
       VAR_8);
   VAR_40 |= VAR_6;
  }
  if (VAR_27 == 2) {
   VAR_35 = FUNC_2(VAR_14 +
         VAR_9);
   VAR_36 = FUNC_2(VAR_13 +
       VAR_9);
   VAR_40 |= VAR_6;
  }
  if (VAR_27 == 3) {
   VAR_35 = FUNC_2(VAR_14 +
         VAR_10);
   VAR_36 = FUNC_2(VAR_13 +
       VAR_10);
   VAR_40 |= VAR_6;
  }
  if (VAR_27 == 4) {
   VAR_35 = FUNC_2(VAR_14 +
         VAR_11);
   VAR_36 = FUNC_2(VAR_13 +
       VAR_11);
   VAR_40 |= VAR_6;
  }
  if (VAR_27 == 5) {
   VAR_35 = FUNC_2(VAR_14 +
         VAR_12);
   VAR_36 = FUNC_2(VAR_13 +
       VAR_12);
   VAR_40 |= VAR_6;
  }
 } else if (FUNC_0(VAR_42)) {
  if (VAR_27 == 0) {
   VAR_35 = FUNC_2(VAR_1);
   VAR_36 = FUNC_2(VAR_0);
   VAR_40 |= VAR_6;
  }
  if (VAR_27 == 1) {
   VAR_35 = FUNC_2(VAR_3);
   VAR_36 = FUNC_2(VAR_2);
   VAR_40 |= VAR_6;
  }
 } else {

  if (VAR_27 == 0) {



   VAR_35 = (FUNC_2(VAR_24) &
    VAR_21) >> VAR_22;

   VAR_36 = (FUNC_2(VAR_20) >> 16) & VAR_23;
   VAR_34 = FUNC_2(VAR_19);
   if (!(VAR_34 & 1))
    VAR_41 = 0;

   VAR_40 |= VAR_6;
  }
  if (VAR_27 == 1) {
   VAR_35 = (FUNC_2(VAR_18) &
    VAR_21) >> VAR_22;
   VAR_36 = (FUNC_2(VAR_17) >> 16) & VAR_23;
   VAR_34 = FUNC_2(VAR_16);
   if (!(VAR_34 & 1))
    VAR_41 = 0;

   VAR_40 |= VAR_6;
  }
 }


 if (VAR_32)
  *VAR_32 = FUNC_3();




 *VAR_29 = VAR_36 & 0x1fff;
 *VAR_30 = (VAR_36 >> 16) & 0x1fff;


 if (VAR_35 > 0) {

  VAR_40 |= VAR_4;
  VAR_37 = VAR_35 & 0x1fff;
  VAR_38 = (VAR_35 >> 16) & 0x1fff;
 }
 else {

  VAR_37 = VAR_33->crtc_vdisplay;
  VAR_38 = 0;
 }


 if (VAR_28 & VAR_15) {

     *VAR_30 = *VAR_29 - VAR_37;
 }
 if (!(VAR_28 & VAR_25))
  VAR_37 -= VAR_42->mode_info.crtcs[VAR_27]->lb_vblank_lead_lines;


 if ((*VAR_29 < VAR_37) && (*VAR_29 >= VAR_38))
  VAR_41 = 0;


 if (VAR_41)
     VAR_40 |= VAR_5;


 if (VAR_28 & VAR_15) {

  *VAR_29 -= VAR_37;
  return VAR_40;
 }
 if (VAR_41 && (*VAR_29 >= VAR_37)) {
  VAR_39 = VAR_33->crtc_vtotal;
  *VAR_29 = *VAR_29 - VAR_39;
 }


 *VAR_29 = *VAR_29 - VAR_38;

 return VAR_40;
}
