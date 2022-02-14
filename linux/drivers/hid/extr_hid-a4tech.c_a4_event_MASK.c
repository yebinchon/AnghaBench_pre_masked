
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_usage {scalar_t__ type; scalar_t__ code; int hid; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
struct a4tech_sc {int quirks; int delayed_value; int hw_wheel; } ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct a4tech_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_9, struct hid_field *VAR_10,
  struct hid_usage *VAR_11, __s32 VAR_12)
{
 struct a4tech_sc *VAR_13 = FUNC_0(VAR_9);
 struct input_dev *VAR_14;

 if (!(VAR_9->claimed & VAR_4) || !VAR_10->hidinput)
  return 0;

 VAR_14 = VAR_10->hidinput->input;

 if (VAR_13->quirks & VAR_1) {
  if (VAR_11->type == VAR_3 && VAR_11->code == VAR_8) {
   VAR_13->delayed_value = VAR_12;
   return 1;
  }

  if (VAR_11->hid == VAR_2) {
   FUNC_1(VAR_14, VAR_3, VAR_12 ? VAR_5 :
     VAR_7, VAR_13->delayed_value);
   FUNC_1(VAR_14, VAR_3, VAR_12 ? VAR_6 :
     VAR_8, VAR_13->delayed_value * 120);
   return 1;
  }
 }

 if ((VAR_13->quirks & VAR_0) && VAR_11->hid == 0x00090007) {
  VAR_13->hw_wheel = !!VAR_12;
  return 1;
 }

 if (VAR_11->code == VAR_8 && VAR_13->hw_wheel) {
  FUNC_1(VAR_14, VAR_11->type, VAR_5, VAR_12);
  FUNC_1(VAR_14, VAR_11->type, VAR_6, VAR_12 * 120);
  return 1;
 }

 return 0;
}
