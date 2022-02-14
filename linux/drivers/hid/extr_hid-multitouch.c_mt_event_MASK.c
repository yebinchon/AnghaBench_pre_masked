
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt_report_data {scalar_t__ is_mt_collection; } ;
struct mt_device {int dummy; } ;
struct hid_usage {int dummy; } ;
struct hid_field {int report; } ;
struct hid_device {int dummy; } ;
typedef int __s32 ;


 struct mt_device* FUNC_0 (struct hid_device*) ;
 struct mt_report_data* FUNC_1 (struct mt_device*,int ) ;
 int FUNC_2 (struct hid_device*,struct hid_field*,struct hid_usage*,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_0, struct hid_field *VAR_1,
    struct hid_usage *VAR_2, __s32 VAR_3)
{
 struct mt_device *VAR_4 = FUNC_0(VAR_0);
 struct mt_report_data *VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1->report);
 if (VAR_5 && VAR_5->is_mt_collection)
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 return 0;
}
