
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_report_enum {int report_list; } ;
struct hid_device {struct hid_report_enum* report_enum; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct hid_device *VAR_1)
{
 struct hid_report_enum *VAR_2;
 VAR_2 = &VAR_1->report_enum[VAR_0];
 return !FUNC_0(&VAR_2->report_list);
}
