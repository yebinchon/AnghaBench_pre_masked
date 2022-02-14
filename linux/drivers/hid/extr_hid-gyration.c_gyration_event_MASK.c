
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_usage {int hid; int code; int type; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_3, struct hid_field *VAR_4,
  struct hid_usage *VAR_5, __s32 VAR_6)
{

 if (!(VAR_3->claimed & VAR_0) || !VAR_4->hidinput)
  return 0;

 if ((VAR_5->hid & VAR_2) == VAR_1 &&
   (VAR_5->hid & 0xff) == 0x82) {
  struct input_dev *VAR_7 = VAR_4->hidinput->input;
  FUNC_0(VAR_7, VAR_5->type, VAR_5->code, 1);
  FUNC_1(VAR_7);
  FUNC_0(VAR_7, VAR_5->type, VAR_5->code, 0);
  FUNC_1(VAR_7);
  return 1;
 }

 return 0;
}
