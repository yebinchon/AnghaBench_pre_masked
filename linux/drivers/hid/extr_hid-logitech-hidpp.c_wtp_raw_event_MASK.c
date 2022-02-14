
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wtp_data {int mt_feature_index; } ;
struct hidpp_touchpad_raw_xy {int dummy; } ;
struct TYPE_2__ {int funcindex_clientid; int feature_index; } ;
struct hidpp_report {TYPE_1__ fap; } ;
struct hidpp_device {int quirks; int input; struct wtp_data* private_data; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (struct hid_device*,char*,int) ;
 struct hidpp_device* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hidpp_device*,int*,struct hidpp_touchpad_raw_xy*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hidpp_device*,int*) ;
 int FUNC_6 (struct hidpp_device*,struct hidpp_touchpad_raw_xy*) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_5, u8 *VAR_6, int VAR_7)
{
 struct hidpp_device *VAR_8 = FUNC_1(VAR_5);
 struct wtp_data *VAR_9 = VAR_8->private_data;
 struct hidpp_report *VAR_10 = (struct hidpp_report *)VAR_6;
 struct hidpp_touchpad_raw_xy VAR_11;

 if (!VAR_9 || !VAR_8->input)
  return 1;

 switch (VAR_6[0]) {
 case 0x02:
  if (VAR_7 < 2) {
   FUNC_0(VAR_5, "Received HID report of bad size (%d)",
    VAR_7);
   return 1;
  }
  if (VAR_8->quirks & VAR_4) {
   FUNC_3(VAR_8->input, VAR_3, VAR_0,
     !!(VAR_6[1] & 0x01));
   FUNC_3(VAR_8->input, VAR_3, VAR_1,
     !!(VAR_6[1] & 0x02));
   FUNC_4(VAR_8->input);
   return 0;
  } else {
   if (VAR_7 < 21)
    return 1;
   return FUNC_5(VAR_8, &VAR_6[7]);
  }
 case 128:

  if ((VAR_10->fap.feature_index != VAR_9->mt_feature_index) ||
      (VAR_10->fap.funcindex_clientid != VAR_2))
   return 1;
  FUNC_2(VAR_8, VAR_6 + 4, &VAR_11);

  FUNC_6(VAR_8, &VAR_11);
  return 0;
 }

 return 0;
}
