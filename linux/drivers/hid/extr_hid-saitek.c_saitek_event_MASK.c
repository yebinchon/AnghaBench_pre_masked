
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saitek_sc {int quirks; } ;
struct input_dev {int dummy; } ;
struct hid_usage {scalar_t__ type; int code; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int dummy; } ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {struct input_dev* input; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct saitek_sc* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct input_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_4, struct hid_field *VAR_5,
  struct hid_usage *VAR_6, __s32 VAR_7)
{
 struct saitek_sc *VAR_8 = FUNC_0(VAR_4);
 struct input_dev *VAR_9 = VAR_5->hidinput->input;

 if (VAR_6->type == VAR_1 && VAR_7 &&
   (((VAR_8->quirks & VAR_3) &&
     VAR_6->code - VAR_0 == 10) ||
   ((VAR_8->quirks & VAR_2) &&
    VAR_6->code - VAR_0 == 15))) {

  FUNC_1(VAR_9, VAR_6->code, 1);


  FUNC_1(VAR_9, VAR_6->code, 0);

  return 1;
 }

 return 0;
}
