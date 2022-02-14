
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct vop_win_data {TYPE_2__* phy; } ;
struct vop {int dev; } ;
struct drm_format_info {int hsub; int vsub; scalar_t__ is_yuv; } ;
struct TYPE_4__ {TYPE_1__* scl; } ;
struct TYPE_3__ {int ext; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct vop*,struct vop_win_data const*,int ,int) ;
 int FUNC_2 (struct vop*,struct vop_win_data const*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__,scalar_t__,int,int,scalar_t__,int*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void FUNC_7(struct vop *VAR_21, const struct vop_win_data *VAR_22,
        uint32_t VAR_23, uint32_t VAR_24, uint32_t VAR_25,
        uint32_t VAR_26, const struct drm_format_info *VAR_27)
{
 uint16_t VAR_28, VAR_29;
 uint16_t VAR_30 = VAR_4;
 uint16_t VAR_31 = VAR_4;
 bool VAR_32 = 0;
 uint16_t VAR_33 = VAR_23 / VAR_27->hsub;
 uint16_t VAR_34 = VAR_24 / VAR_27->vsub;
 uint16_t VAR_35;
 uint16_t VAR_36;
 uint32_t VAR_37;
 int VAR_38;

 if (VAR_27->is_yuv)
  VAR_32 = 1;

 if (VAR_25 > 3840) {
  FUNC_0(VAR_21->dev, "Maximum dst width (3840) exceeded\n");
  return;
 }

 if (!VAR_22->phy->scl->ext) {
  FUNC_1(VAR_21, VAR_22, VAR_12,
       FUNC_3(VAR_23, VAR_25));
  FUNC_1(VAR_21, VAR_22, VAR_13,
       FUNC_3(VAR_24, VAR_26));
  if (VAR_32) {
   FUNC_1(VAR_21, VAR_22, VAR_10,
        FUNC_3(VAR_33, VAR_25));
   FUNC_1(VAR_21, VAR_22, VAR_11,
        FUNC_3(VAR_34, VAR_26));
  }
  return;
 }

 VAR_28 = FUNC_4(VAR_23, VAR_25);
 VAR_29 = FUNC_4(VAR_24, VAR_26);

 if (VAR_32) {
  VAR_30 = FUNC_4(VAR_33, VAR_25);
  VAR_31 = FUNC_4(VAR_34, VAR_26);
  if (VAR_30 == VAR_2)
   VAR_36 = FUNC_5(VAR_25, 1);
  else
   VAR_36 = FUNC_5(VAR_33, 1);
 } else {
  if (VAR_28 == VAR_2)
   VAR_36 = FUNC_5(VAR_25, 0);
  else
   VAR_36 = FUNC_5(VAR_23, 0);
 }

 FUNC_2(VAR_21, VAR_22, VAR_36, VAR_36);
 if (VAR_36 == VAR_1) {
  if (VAR_29 != VAR_4) {
   FUNC_0(VAR_21->dev, "not allow yrgb ver scale\n");
   return;
  }
  if (VAR_31 != VAR_4) {
   FUNC_0(VAR_21->dev, "not allow cbcr ver scale\n");
   return;
  }
  VAR_35 = VAR_6;
 } else if (VAR_36 == VAR_0) {
  VAR_35 = VAR_6;
 } else {
  VAR_35 = VAR_5;
 }

 VAR_37 = FUNC_6(VAR_28, VAR_23, VAR_25,
    1, 0, ((void*)0));
 FUNC_1(VAR_21, VAR_22, VAR_12, VAR_37);
 VAR_37 = FUNC_6(VAR_29, VAR_24, VAR_26,
    0, VAR_35, &VAR_38);
 FUNC_1(VAR_21, VAR_22, VAR_13, VAR_37);

 FUNC_2(VAR_21, VAR_22, VAR_17, VAR_38 == 4);
 FUNC_2(VAR_21, VAR_22, VAR_16, VAR_38 == 2);

 FUNC_2(VAR_21, VAR_22, VAR_28, VAR_28);
 FUNC_2(VAR_21, VAR_22, VAR_29, VAR_29);
 FUNC_2(VAR_21, VAR_22, VAR_18, VAR_3);
 FUNC_2(VAR_21, VAR_22, VAR_19, VAR_3);
 FUNC_2(VAR_21, VAR_22, VAR_20, VAR_35);
 if (VAR_32) {
  VAR_37 = FUNC_6(VAR_30, VAR_33,
     VAR_25, 1, 0, ((void*)0));
  FUNC_1(VAR_21, VAR_22, VAR_10, VAR_37);
  VAR_37 = FUNC_6(VAR_31, VAR_34,
     VAR_26, 0, VAR_35, &VAR_38);
  FUNC_1(VAR_21, VAR_22, VAR_11, VAR_37);

  FUNC_2(VAR_21, VAR_22, VAR_15, VAR_38 == 4);
  FUNC_2(VAR_21, VAR_22, VAR_14, VAR_38 == 2);
  FUNC_2(VAR_21, VAR_22, VAR_30, VAR_30);
  FUNC_2(VAR_21, VAR_22, VAR_31, VAR_31);
  FUNC_2(VAR_21, VAR_22, VAR_7, VAR_3);
  FUNC_2(VAR_21, VAR_22, VAR_8, VAR_3);
  FUNC_2(VAR_21, VAR_22, VAR_9, VAR_35);
 }
}
