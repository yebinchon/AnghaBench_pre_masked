
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_data {scalar_t__ num_received; scalar_t__ num_expected; int x; int y; scalar_t__ width; scalar_t__ height; int id; scalar_t__ tipswitch; } ;
struct TYPE_3__ {int touch_max; } ;
struct wacom_wac {struct hid_data hid_data; TYPE_2__* shared; TYPE_1__ features; } ;
struct input_dev {int absbit; } ;
struct TYPE_4__ {int touch_down; int is_touch_on; scalar_t__ has_mute_touch_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct wacom_wac*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct wacom_wac *VAR_9,
  struct input_dev *VAR_10)
{
 struct hid_data *VAR_11 = &VAR_9->hid_data;
 bool VAR_12 = VAR_9->features.touch_max > 1;
 bool VAR_13 = VAR_11->tipswitch &&
      FUNC_7(VAR_9);

 if (VAR_9->shared->has_mute_touch_switch &&
     !VAR_9->shared->is_touch_on) {
  if (!VAR_9->shared->touch_down)
   return;
  VAR_13 = 0;
 }

 VAR_9->hid_data.num_received++;
 if (VAR_9->hid_data.num_received > VAR_9->hid_data.num_expected)
  return;

 if (VAR_12) {
  int VAR_14;

  VAR_14 = FUNC_0(VAR_10, VAR_11->id);
  FUNC_2(VAR_10, VAR_14);
  FUNC_1(VAR_10, VAR_8, VAR_13);
 }
 else {
  FUNC_4(VAR_10, VAR_7, VAR_13);
 }

 if (VAR_13) {
  FUNC_3(VAR_10, VAR_12 ? VAR_1 : VAR_5,
     VAR_11->x);
  FUNC_3(VAR_10, VAR_12 ? VAR_2 : VAR_6,
     VAR_11->y);

  if (FUNC_8(VAR_3, VAR_10->absbit)) {
   FUNC_3(VAR_10, VAR_3, FUNC_5(VAR_11->width, VAR_11->height));
   FUNC_3(VAR_10, VAR_4, FUNC_6(VAR_11->width, VAR_11->height));
   if (VAR_11->width != VAR_11->height)
    FUNC_3(VAR_10, VAR_0, VAR_11->width <= VAR_11->height ? 0 : 1);
  }
 }
}
