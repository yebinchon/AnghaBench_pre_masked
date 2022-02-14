
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct hid_usage {scalar_t__ hid; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
typedef int __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int ,int) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_4, struct hid_field *VAR_5,
       struct hid_usage *VAR_6, __s32 VAR_7)
{
 struct input_dev *VAR_8;

 if (!(VAR_4->claimed & VAR_1) || !VAR_5->hidinput)
  return 0;

 VAR_8 = VAR_5->hidinput->input;






 if (VAR_6->hid == VAR_2) {
  FUNC_0(VAR_8, VAR_0, VAR_3, 1);
  FUNC_1(VAR_8);
  FUNC_0(VAR_8, VAR_0, VAR_3, 0);
  FUNC_1(VAR_8);
  return 1;
 }

 return 0;
}
