
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_report {int id; struct hid_field** field; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
struct TYPE_2__ {scalar_t__ input; } ;


 int VAR_0 ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct hid_device *VAR_1, struct hid_report *VAR_2)
{
 struct hid_field *VAR_3 = VAR_2->field[0];

 if (!(VAR_1->claimed & VAR_0))
  return;

 switch (VAR_2->id) {
 case 128:

 case 129:
  return;
 }

 if (VAR_3 && VAR_3->hidinput && VAR_3->hidinput->input)
  FUNC_0(VAR_3->hidinput->input);
}
