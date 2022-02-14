
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt_application {int quirks; int left_button_state; } ;
struct input_dev {int dummy; } ;
struct hid_usage {int code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_4,
    struct mt_application *VAR_5,
    struct hid_field *VAR_6,
    struct hid_usage *VAR_7,
    __s32 VAR_8,
    bool VAR_9)
{
 __s32 VAR_10 = VAR_5->quirks;
 struct input_dev *VAR_11 = VAR_6->hidinput->input;

 if (!VAR_7->type || !(VAR_4->claimed & VAR_2))
  return;

 if (VAR_10 & VAR_3) {






  if (!VAR_9)
   return;
  if (VAR_7->type == VAR_1 && VAR_7->code == VAR_0) {
   VAR_5->left_button_state |= VAR_8;
   return;
  }
 }

 FUNC_0(VAR_11, VAR_7->type, VAR_7->code, VAR_8);
}
