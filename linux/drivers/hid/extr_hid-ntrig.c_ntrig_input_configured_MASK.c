
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {char* name; int keybit; } ;
struct hid_input {TYPE_2__* report; struct input_dev* input; } ;
struct hid_device {int dummy; } ;
struct TYPE_4__ {int maxfield; TYPE_1__** field; } ;
struct TYPE_3__ {int application; int physical; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_4,
  struct hid_input *VAR_5)

{
 struct input_dev *VAR_6 = VAR_5->input;

 if (VAR_5->report->maxfield < 1)
  return 0;

 switch (VAR_5->report->field[0]->application) {
 case 129:
  VAR_6->name = "N-Trig Pen";
  break;
 case 128:


  FUNC_0(VAR_3, VAR_6->keybit);
  FUNC_0(VAR_2, VAR_6->keybit);
  FUNC_0(VAR_0, VAR_6->keybit);
  FUNC_1(VAR_1, VAR_6->keybit);






  VAR_6->name = (VAR_5->report->field[0]->physical) ?
       "N-Trig Touchscreen" :
       "N-Trig MultiTouch";
  break;
 }

 return 0;
}
