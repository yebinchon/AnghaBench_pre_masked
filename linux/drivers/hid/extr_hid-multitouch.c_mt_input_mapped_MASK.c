
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_report_data {scalar_t__ is_mt_collection; } ;
struct mt_device {int dummy; } ;
struct hid_usage {int dummy; } ;
struct hid_input {int dummy; } ;
struct hid_field {int report; } ;
struct hid_device {int dummy; } ;


 struct mt_device* FUNC_0 (struct hid_device*) ;
 struct mt_report_data* FUNC_1 (struct mt_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_0, struct hid_input *VAR_1,
  struct hid_field *VAR_2, struct hid_usage *VAR_3,
  unsigned long **VAR_4, int *VAR_5)
{
 struct mt_device *VAR_6 = FUNC_0(VAR_0);
 struct mt_report_data *VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_2->report);
 if (VAR_7 && VAR_7->is_mt_collection) {

  return -1;
 }


 return 0;
}
