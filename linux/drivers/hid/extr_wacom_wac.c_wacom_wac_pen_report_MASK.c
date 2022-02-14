
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int inrange_state; int sense_state; int barrelswitch; int barrelswitch2; int tipswitch; scalar_t__ invert_state; } ;
struct wacom_wac {int* id; int* serial; scalar_t__* tool; TYPE_2__ hid_data; TYPE_1__* shared; scalar_t__ is_invalid_bt_frame; struct input_dev* pen_input; } ;
struct wacom {struct wacom_wac wacom_wac; } ;
struct input_dev {int dummy; } ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_3__ {int stylus_in_proximity; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wacom_wac*) ;
 struct wacom* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct input_dev*,int ,int ,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,scalar_t__,int) ;
 int FUNC_5 (struct input_dev*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct hid_device *VAR_9,
  struct hid_report *VAR_10)
{
 struct wacom *VAR_11 = FUNC_1(VAR_9);
 struct wacom_wac *VAR_12 = &VAR_11->wacom_wac;
 struct input_dev *VAR_13 = VAR_12->pen_input;
 bool VAR_14 = VAR_12->hid_data.inrange_state;
 bool VAR_15 = VAR_12->hid_data.sense_state;

 if (VAR_12->is_invalid_bt_frame)
  return;

 if (!VAR_12->tool[0] && VAR_14) {

  if (VAR_12->hid_data.invert_state)
   VAR_12->tool[0] = VAR_5;
  else if (VAR_12->id[0])
   VAR_12->tool[0] = FUNC_6(VAR_12->id[0]);
  else
   VAR_12->tool[0] = VAR_4;
 }


 VAR_12->shared->stylus_in_proximity = VAR_15;

 if (!FUNC_0(VAR_12) && VAR_12->tool[0]) {
  int VAR_16 = VAR_12->id[0];
  int VAR_17 = VAR_12->hid_data.barrelswitch |
          (VAR_12->hid_data.barrelswitch2 << 1);

  FUNC_4(VAR_13, VAR_1, VAR_17 == 1);
  FUNC_4(VAR_13, VAR_2, VAR_17 == 2);
  FUNC_4(VAR_13, VAR_3, VAR_17 == 3);





  if (VAR_12->serial[0] >> 52 == 1)
   VAR_16 = FUNC_7(VAR_16);






  FUNC_4(VAR_13, VAR_6,
    VAR_12->hid_data.tipswitch);
  FUNC_4(VAR_13, VAR_12->tool[0], VAR_15);
  if (VAR_12->serial[0]) {
   FUNC_2(VAR_13, VAR_7, VAR_8, VAR_12->serial[0]);
   FUNC_3(VAR_13, VAR_0, VAR_15 ? VAR_16 : 0);
  }

  VAR_12->hid_data.tipswitch = 0;

  FUNC_5(VAR_13);
 }

 if (!VAR_15) {
  VAR_12->tool[0] = 0;
  VAR_12->id[0] = 0;
  VAR_12->serial[0] = 0;
 }
}
