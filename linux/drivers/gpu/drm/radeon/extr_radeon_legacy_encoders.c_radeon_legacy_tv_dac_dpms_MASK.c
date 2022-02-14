
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_encoder {int active_device; } ;
struct radeon_device {scalar_t__ family; int flags; scalar_t__ is_atom_bios; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;




 int VAR_5 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_encoder*,int) ;
 int FUNC_4 (struct drm_encoder*,int) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_21, int VAR_22)
{
 struct drm_device *VAR_23 = VAR_21->dev;
 struct radeon_device *VAR_24 = VAR_23->dev_private;
 struct radeon_encoder *VAR_25 = FUNC_5(VAR_21);
 uint32_t VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;
 uint32_t VAR_29 = 0;
 bool VAR_30;
 FUNC_0("\n");

 VAR_30 = VAR_25->active_device & VAR_0 ? 1 : 0;

 if (VAR_24->family == VAR_1)
  VAR_26 = FUNC_1(VAR_11);
 else {
  if (VAR_30)
   VAR_29 = FUNC_1(VAR_19);
  else
   VAR_27 = FUNC_1(VAR_9);
  VAR_28 = FUNC_1(VAR_16);
 }

 switch (VAR_22) {
 case 130:
  if (VAR_24->family == VAR_1) {
   VAR_26 |= (VAR_12 | VAR_10);
  } else {
   if (VAR_30)
    VAR_29 |= VAR_20;
   else
    VAR_27 |= VAR_8;

   if (VAR_24->family == VAR_2 ||
       VAR_24->family == VAR_3 ||
       VAR_24->family == VAR_4)
    VAR_28 &= ~(VAR_7 |
       VAR_6 |
       VAR_5 |
       VAR_15);
   else
    VAR_28 &= ~(VAR_18 |
       VAR_17 |
       VAR_14 |
       VAR_15);
  }
  break;
 case 129:
 case 128:
 case 131:
  if (VAR_24->family == VAR_1)
   VAR_26 &= ~(VAR_12 | VAR_10);
  else {
   if (VAR_30)
    VAR_29 &= ~VAR_20;
   else
    VAR_27 &= ~VAR_8;

   if (VAR_24->family == VAR_2 ||
       VAR_24->family == VAR_3 ||
       VAR_24->family == VAR_4)
    VAR_28 |= (VAR_7 |
      VAR_6 |
      VAR_5 |
      VAR_15);
   else
    VAR_28 |= (VAR_18 |
      VAR_17 |
      VAR_14 |
      VAR_15);
  }
  break;
 }

 if (VAR_24->family == VAR_1) {
  FUNC_2(VAR_11, VAR_26);
 } else {
  if (VAR_30)
   FUNC_2(VAR_19, VAR_29);

  else if (!(VAR_24->flags & VAR_13))
   FUNC_2(VAR_9, VAR_27);
  FUNC_2(VAR_16, VAR_28);
 }

 if (VAR_24->is_atom_bios)
  FUNC_3(VAR_21, (VAR_22 == 130) ? 1 : 0);
 else
  FUNC_4(VAR_21, (VAR_22 == 130) ? 1 : 0);

}
