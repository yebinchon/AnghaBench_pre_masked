
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ product; } ;
struct input_dev {char* name; int mscbit; int evbit; TYPE_1__ id; int propbit; int keybit; int relbit; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,int,int) ;
 int FUNC_4 (struct input_dev*,int ,int,int,int,int ) ;
 int FUNC_5 (struct input_dev*,int) ;
 scalar_t__ VAR_56 ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_57, struct hid_device *VAR_58)
{
 int VAR_59;
 int VAR_60 = 0;

 FUNC_1(VAR_21, VAR_57->evbit);

 if (VAR_57->id.product == VAR_52) {
  FUNC_1(VAR_10, VAR_57->keybit);
  FUNC_1(VAR_13, VAR_57->keybit);
  if (VAR_54)
   FUNC_1(VAR_11, VAR_57->keybit);

  FUNC_1(VAR_23, VAR_57->evbit);
  FUNC_1(VAR_38, VAR_57->relbit);
  FUNC_1(VAR_39, VAR_57->relbit);
  if (VAR_55) {
   FUNC_1(VAR_37, VAR_57->relbit);
   FUNC_1(VAR_36, VAR_57->relbit);
  }
 } else if (VAR_57->id.product == VAR_53) {



  VAR_57->name = "Apple Inc. Magic Trackpad 2";

  FUNC_0(VAR_22, VAR_57->evbit);
  FUNC_0(VAR_9, VAR_57->keybit);
  FUNC_0(VAR_13, VAR_57->keybit);
  FUNC_0(VAR_11, VAR_57->keybit);
  FUNC_1(VAR_12, VAR_57->keybit);
  FUNC_1(VAR_27, VAR_57->propbit);
  FUNC_1(VAR_15, VAR_57->keybit);

  VAR_60 = VAR_25 | VAR_24 |
    VAR_26;
 } else {





  FUNC_0(VAR_13, VAR_57->keybit);
  FUNC_0(VAR_11, VAR_57->keybit);
  FUNC_1(VAR_12, VAR_57->keybit);
  FUNC_1(VAR_15, VAR_57->keybit);
  FUNC_1(VAR_14, VAR_57->keybit);
  FUNC_1(VAR_18, VAR_57->keybit);
  FUNC_1(VAR_16, VAR_57->keybit);
  FUNC_1(VAR_17, VAR_57->keybit);
  FUNC_1(VAR_19, VAR_57->keybit);
  FUNC_1(VAR_28, VAR_57->propbit);
  FUNC_1(VAR_27, VAR_57->propbit);
 }


 FUNC_1(VAR_20, VAR_57->evbit);

 VAR_59 = FUNC_3(VAR_57, 16, VAR_60);
 if (VAR_59)
  return VAR_59;
 FUNC_4(VAR_57, VAR_4, 0, 255 << 2,
        4, 0);
 FUNC_4(VAR_57, VAR_5, 0, 255 << 2,
        4, 0);







 if (VAR_57->id.product == VAR_52) {
  FUNC_4(VAR_57, VAR_0, -31, 32, 1, 0);
  FUNC_4(VAR_57, VAR_1,
         VAR_31, VAR_29, 4, 0);
  FUNC_4(VAR_57, VAR_2,
         VAR_32, VAR_30, 4, 0);

  FUNC_2(VAR_57, VAR_1,
      VAR_33);
  FUNC_2(VAR_57, VAR_2,
      VAR_34);
 } else if (VAR_57->id.product == VAR_53) {
  FUNC_4(VAR_57, VAR_3, 0, 253, 0, 0);
  FUNC_4(VAR_57, VAR_6, 0, 253, 0, 0);
  FUNC_4(VAR_57, VAR_0, -3, 4, 0, 0);
  FUNC_4(VAR_57, VAR_7, VAR_42,
         VAR_40, 0, 0);
  FUNC_4(VAR_57, VAR_8, VAR_43,
         VAR_41, 0, 0);
  FUNC_4(VAR_57, VAR_1,
         VAR_42, VAR_40, 0, 0);
  FUNC_4(VAR_57, VAR_2,
         VAR_43, VAR_41, 0, 0);

  FUNC_2(VAR_57, VAR_7, VAR_44);
  FUNC_2(VAR_57, VAR_8, VAR_45);
  FUNC_2(VAR_57, VAR_1, VAR_44);
  FUNC_2(VAR_57, VAR_2, VAR_45);
 } else {
  FUNC_4(VAR_57, VAR_0, -31, 32, 1, 0);
  FUNC_4(VAR_57, VAR_7, VAR_48,
         VAR_46, 4, 0);
  FUNC_4(VAR_57, VAR_8, VAR_49,
         VAR_47, 4, 0);
  FUNC_4(VAR_57, VAR_1,
         VAR_48, VAR_46, 4, 0);
  FUNC_4(VAR_57, VAR_2,
         VAR_49, VAR_47, 4, 0);

  FUNC_2(VAR_57, VAR_7, VAR_50);
  FUNC_2(VAR_57, VAR_8, VAR_51);
  FUNC_2(VAR_57, VAR_1,
      VAR_50);
  FUNC_2(VAR_57, VAR_2,
      VAR_51);
 }

 FUNC_5(VAR_57, 60);

 if (VAR_56 &&
     VAR_57->id.product != VAR_53) {
  FUNC_1(VAR_22, VAR_57->evbit);
  FUNC_1(VAR_35, VAR_57->mscbit);
 }

 return 0;
}
