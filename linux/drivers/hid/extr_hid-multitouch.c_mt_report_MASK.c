
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt_report_data {scalar_t__ is_mt_collection; } ;
struct mt_device {int dummy; } ;
struct hid_report {struct hid_field** field; } ;
struct hid_field {TYPE_1__* hidinput; } ;
struct hid_device {int claimed; } ;
struct TYPE_2__ {scalar_t__ input; } ;


 int VAR_0 ;
 struct mt_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (scalar_t__) ;
 struct mt_report_data* FUNC_2 (struct mt_device*,struct hid_report*) ;
 void FUNC_3 (struct hid_device*,struct mt_report_data*) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_1, struct hid_report *VAR_2)
{
 struct mt_device *VAR_3 = FUNC_0(VAR_1);
 struct hid_field *VAR_4 = VAR_2->field[0];
 struct mt_report_data *VAR_5;

 if (!(VAR_1->claimed & VAR_0))
  return;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5 && VAR_5->is_mt_collection)
  return FUNC_3(VAR_1, VAR_5);

 if (VAR_4 && VAR_4->hidinput && VAR_4->hidinput->input)
  FUNC_1(VAR_4->hidinput->input);
}
