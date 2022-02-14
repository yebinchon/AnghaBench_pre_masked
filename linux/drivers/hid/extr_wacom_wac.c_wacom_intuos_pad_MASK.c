
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_features {int numbered_buttons; scalar_t__ type; scalar_t__ oPid; } ;
struct wacom_wac {unsigned char* data; scalar_t__* tool; TYPE_1__* shared; struct input_dev* pad_input; struct wacom_features features; } ;
struct input_dev {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int is_touch_on; scalar_t__ touch_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct input_dev*,int,int) ;

__attribute__((used)) static int FUNC_7(struct wacom_wac *VAR_32)
{
 struct wacom_features *VAR_33 = &VAR_32->features;
 unsigned char *VAR_34 = VAR_32->data;
 struct input_dev *VAR_35 = VAR_32->pad_input;
 int VAR_36;
 int VAR_37 = 0, VAR_38 = VAR_33->numbered_buttons;
 int VAR_39 = 0, VAR_40 = 0;
 int VAR_41 = 0, VAR_42 = 0;
 int VAR_43 = 0, VAR_44 = 0;
 bool VAR_45 = 0;
 bool VAR_46 = 0, VAR_47 = 0, VAR_48 = 0, VAR_49 = 0,
      VAR_50 = 0;


 if (!(VAR_34[0] == VAR_31 || VAR_34[0] == VAR_30 ||
       VAR_34[0] == VAR_29))
  return 0;

 if (VAR_33->type >= VAR_13 && VAR_33->type <= VAR_12) {
  VAR_37 = (VAR_34[3] << 1) | (VAR_34[2] & 0x01);
  VAR_41 = VAR_34[1];
 } else if (VAR_33->type == VAR_10) {
  VAR_37 = VAR_34[6];
 } else if (VAR_33->type == VAR_24) {
  VAR_37 = (VAR_34[4] << 1) | (VAR_34[3] & 0x01);
 } else if (VAR_33->type == VAR_27) {
  VAR_37 = (VAR_34[8] << 8) | VAR_34[6];
  VAR_41 = VAR_34[1];
  VAR_42 = VAR_34[2];
  VAR_40 = 3;
  VAR_39 = ((VAR_34[3] & 0x1C) ? 1<<2 : 0) |
         ((VAR_34[4] & 0xE0) ? 1<<1 : 0) |
         ((VAR_34[4] & 0x07) ? 1<<0 : 0);
  VAR_47 = !!(VAR_34[4] & 0xE0);
  VAR_50 = !!(VAR_34[3] & 0x1C);

  if (VAR_33->oPid) {
   VAR_48 = !!(VAR_34[4] & 0x07);
   if (VAR_48)
    VAR_32->shared->is_touch_on =
     !VAR_32->shared->is_touch_on;
  } else {
   VAR_46 = !!(VAR_34[4] & 0x07);
  }
 } else if (VAR_33->type == VAR_28) {
  VAR_40 = 3;
  VAR_39 = VAR_34[2] & 0x07;

  VAR_46 = !!(VAR_34[2] & 0x01);
  VAR_47 = !!(VAR_34[2] & 0x02);

  if (VAR_33->oPid) {
   VAR_48 = !!(VAR_34[2] & 0x04);
   if (VAR_48)
    VAR_32->shared->is_touch_on =
     !VAR_32->shared->is_touch_on;
  } else {
   VAR_49 = !!(VAR_34[2] & 0x04);
  }
  FUNC_2(VAR_35, VAR_5, FUNC_0((__be16 *)&VAR_34[4]));
  FUNC_2(VAR_35, VAR_6, FUNC_0((__be16 *)&VAR_34[6]));
  FUNC_2(VAR_35, VAR_7, FUNC_0((__be16 *)&VAR_34[8]));
 } else if (VAR_33->type == VAR_9) {
  VAR_37 = (VAR_34[4] << 1) | (VAR_34[3] & 0x01);
 } else if (VAR_33->type == VAR_8) {






  VAR_37 = ((VAR_34[2] >> 4) << 7) |
            ((VAR_34[1] & 0x04) << 4) |
            ((VAR_34[2] & 0x0F) << 2) |
            (VAR_34[1] & 0x03);
 } else if (VAR_33->type >= VAR_14 && VAR_33->type <= VAR_15) {







  VAR_37 = (VAR_34[4] << 1) | (VAR_34[3] & 0x01);
  VAR_41 = VAR_34[2];
 } else {
  if (VAR_33->type == VAR_25 || VAR_33->type == VAR_26) {
   VAR_37 = (VAR_34[8] << 10) | ((VAR_34[7] & 0x01) << 9) |
             (VAR_34[6] << 1) | (VAR_34[5] & 0x01);

   if (VAR_33->type == VAR_26) {
    VAR_40 = 3;
    VAR_39 = VAR_34[9] & 0x07;

    VAR_50 = !!(VAR_34[9] & 0x01);
    VAR_46 = !!(VAR_34[9] & 0x02);
   }
  } else {
   VAR_37 = ((VAR_34[6] & 0x10) << 5) |
             ((VAR_34[5] & 0x10) << 4) |
             ((VAR_34[6] & 0x0F) << 4) |
             (VAR_34[5] & 0x0F);
  }
  VAR_43 = ((VAR_34[1] & 0x1f) << 8) | VAR_34[2];
  VAR_44 = ((VAR_34[3] & 0x1f) << 8) | VAR_34[4];
 }

 VAR_45 = (VAR_37 & ~(~0U << VAR_38)) | (VAR_39 & ~(~0U << VAR_40)) |
        (VAR_41 & 0x80) | (VAR_42 & 0x80) | VAR_43 | VAR_44;

 FUNC_6(VAR_35, VAR_38, VAR_37);

 for (VAR_36 = 0; VAR_36 < VAR_40; VAR_36++)
  FUNC_3(VAR_35, VAR_20 + VAR_36, VAR_39 & (1 << VAR_36));

 FUNC_3(VAR_35, VAR_16, VAR_46);
 FUNC_3(VAR_35, VAR_19, VAR_47);
 FUNC_3(VAR_35, VAR_17, VAR_49);
 FUNC_3(VAR_35, VAR_18, VAR_50);

 if (VAR_32->shared && VAR_32->shared->touch_input) {
  FUNC_4(VAR_32->shared->touch_input,
        VAR_23,
        !VAR_32->shared->is_touch_on);
  FUNC_5(VAR_32->shared->touch_input);
 }

 FUNC_2(VAR_35, VAR_1, VAR_43);
 FUNC_2(VAR_35, VAR_2, VAR_44);

 FUNC_2(VAR_35, VAR_4, (VAR_41 & 0x80) ? (VAR_41 & 0x7f) : 0);
 FUNC_2(VAR_35, VAR_3, (VAR_42 & 0x80) ? (VAR_42 & 0x7f) : 0);

 FUNC_3(VAR_35, VAR_32->tool[1], VAR_45 ? 1 : 0);
 FUNC_2(VAR_35, VAR_0, VAR_45 ? VAR_22 : 0);

 FUNC_1(VAR_35, VAR_11, VAR_21, 0xffffffff);

 return 1;
}
