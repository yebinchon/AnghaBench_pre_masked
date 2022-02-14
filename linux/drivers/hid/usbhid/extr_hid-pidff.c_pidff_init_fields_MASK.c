
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pidff_device {int hid; TYPE_1__* block_load; } ;
struct input_dev {int ffbit; } ;
struct TYPE_2__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
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
 int FUNC_1 (int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct pidff_device*,struct input_dev*) ;
 scalar_t__ FUNC_5 (struct pidff_device*) ;
 int VAR_25 ;
 int FUNC_6 (int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct pidff_device *VAR_32, struct input_dev *VAR_33)
{
 int VAR_34 = 0;

 if (FUNC_0(VAR_28, VAR_17, 1)) {
  FUNC_2(VAR_32->hid, "unknown set_effect report layout\n");
  return -VAR_0;
 }

 FUNC_0(VAR_22, VAR_10, 0);
 if (!VAR_32->block_load[VAR_12].value) {
  FUNC_2(VAR_32->hid, "unknown pid_block_load report layout\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_24, VAR_13, 1)) {
  FUNC_2(VAR_32->hid, "unknown effect_operation report layout\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_21, VAR_9, 1)) {
  FUNC_2(VAR_32->hid, "unknown pid_block_free report layout\n");
  return -VAR_0;
 }

 if (!FUNC_0(VAR_29, VAR_18, 1))
  VAR_34 = 1;

 if (FUNC_5(VAR_32) || FUNC_4(VAR_32, VAR_33))
  return -VAR_0;

 if (!VAR_34) {
  if (FUNC_7(VAR_1, VAR_33->ffbit))
   FUNC_3(VAR_32->hid,
     "has constant effect but no envelope\n");
  if (FUNC_7(VAR_7, VAR_33->ffbit))
   FUNC_3(VAR_32->hid,
     "has ramp effect but no envelope\n");

  if (FUNC_7(VAR_6, VAR_33->ffbit))
   FUNC_3(VAR_32->hid,
     "has periodic effect but no envelope\n");
 }

 if (FUNC_8(VAR_1, VAR_33->ffbit) &&
     FUNC_0(VAR_27, VAR_16, 1)) {
  FUNC_3(VAR_32->hid, "unknown constant effect layout\n");
  FUNC_1(VAR_1, VAR_33->ffbit);
 }

 if (FUNC_8(VAR_7, VAR_33->ffbit) &&
     FUNC_0(VAR_31, VAR_20, 1)) {
  FUNC_3(VAR_32->hid, "unknown ramp effect layout\n");
  FUNC_1(VAR_7, VAR_33->ffbit);
 }

 if ((FUNC_8(VAR_8, VAR_33->ffbit) ||
      FUNC_8(VAR_2, VAR_33->ffbit) ||
      FUNC_8(VAR_3, VAR_33->ffbit) ||
      FUNC_8(VAR_5, VAR_33->ffbit)) &&
     FUNC_0(VAR_26, VAR_15, 1)) {
  FUNC_3(VAR_32->hid, "unknown condition effect layout\n");
  FUNC_1(VAR_8, VAR_33->ffbit);
  FUNC_1(VAR_2, VAR_33->ffbit);
  FUNC_1(VAR_3, VAR_33->ffbit);
  FUNC_1(VAR_5, VAR_33->ffbit);
 }

 if (FUNC_8(VAR_6, VAR_33->ffbit) &&
     FUNC_0(VAR_30, VAR_19, 1)) {
  FUNC_3(VAR_32->hid, "unknown periodic effect layout\n");
  FUNC_1(VAR_6, VAR_33->ffbit);
 }

 FUNC_0(VAR_25, VAR_14, 0);

 if (!FUNC_0(VAR_23, VAR_11, 1))
  FUNC_6(VAR_4, VAR_33->ffbit);

 return 0;
}
