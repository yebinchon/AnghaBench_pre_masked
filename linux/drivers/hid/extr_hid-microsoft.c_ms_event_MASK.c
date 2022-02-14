
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms_data {unsigned long quirks; } ;
struct input_dev {int dummy; } ;
struct hid_usage {int hid; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 struct ms_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int ,unsigned int,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_12, struct hid_field *VAR_13,
  struct hid_usage *VAR_14, __s32 VAR_15)
{
 struct ms_data *VAR_16 = FUNC_0(VAR_12);
 unsigned long VAR_17 = VAR_16->quirks;
 struct input_dev *VAR_18;

 if (!(VAR_12->claimed & VAR_0) || !VAR_13->hidinput ||
   !VAR_14->type)
  return 0;

 VAR_18 = VAR_13->hidinput->input;


 if (VAR_17 & VAR_10 && VAR_14->hid == (VAR_1 | 0xff00)) {

  FUNC_2(VAR_18, VAR_7, VAR_15 & 0x01);
  FUNC_2(VAR_18, VAR_8, VAR_15 & 0x02);
  FUNC_2(VAR_18, VAR_9, VAR_15 & 0x04);
  return 1;
 }

 if (VAR_17 & VAR_10 && VAR_14->hid == (VAR_1 | 0xff01)) {

  int VAR_19 = ((VAR_15 & 0x60) >> 5) + 1;

  switch (VAR_15 & 0x1f) {
  case 0x01:
   FUNC_3(VAR_18, VAR_11, VAR_19);
   break;
  case 0x1f:
   FUNC_3(VAR_18, VAR_11, -VAR_19);
   break;
  }
  return 1;
 }

 if (VAR_17 & VAR_10 && VAR_14->hid == (VAR_1 | 0xff05)) {
  static unsigned int VAR_20 = 0;
  unsigned int VAR_21 = 0;
  switch (VAR_15) {
  case 0x01: VAR_21 = VAR_2; break;
  case 0x02: VAR_21 = VAR_3; break;
  case 0x04: VAR_21 = VAR_4; break;
  case 0x08: VAR_21 = VAR_5; break;
  case 0x10: VAR_21 = VAR_6; break;
  }
  if (VAR_21) {
   FUNC_1(VAR_18, VAR_14->type, VAR_21, 1);
   VAR_20 = VAR_21;
  } else
   FUNC_1(VAR_18, VAR_14->type, VAR_20, 0);

  return 1;
 }

 return 0;
}
