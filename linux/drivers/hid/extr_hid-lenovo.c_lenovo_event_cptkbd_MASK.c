
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lenovo_drvdata_cptkbd {int middlebutton_state; } ;
struct hid_usage {scalar_t__ type; scalar_t__ code; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;
struct TYPE_2__ {int input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct lenovo_drvdata_cptkbd* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_5,
  struct hid_field *VAR_6, struct hid_usage *VAR_7, __s32 VAR_8)
{
 struct lenovo_drvdata_cptkbd *VAR_9 = FUNC_0(VAR_5);


 if (VAR_7->type == VAR_2 && (VAR_7->code == VAR_4 ||
   VAR_7->code == VAR_3)) {

  VAR_9->middlebutton_state = 2;
  return 0;
 }


 if (VAR_7->type == VAR_1 && VAR_7->code == VAR_0) {
  if (VAR_8 == 1) {
   VAR_9->middlebutton_state = 1;
  } else if (VAR_8 == 0) {
   if (VAR_9->middlebutton_state == 1) {

    FUNC_1(VAR_6->hidinput->input,
     VAR_1, VAR_0, 1);
    FUNC_2(VAR_6->hidinput->input);
    FUNC_1(VAR_6->hidinput->input,
     VAR_1, VAR_0, 0);
    FUNC_2(VAR_6->hidinput->input);
   }
   VAR_9->middlebutton_state = 0;
  }
  return 1;
 }

 return 0;
}
