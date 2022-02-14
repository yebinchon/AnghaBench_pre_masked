
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
typedef int u32 ;
struct hid_sensor_custom {int input_field_count; int hsdev; TYPE_3__* fields; } ;
struct TYPE_4__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_5__ {int report_id; } ;
struct TYPE_6__ {TYPE_2__ attribute; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct hid_sensor_custom* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int ,int ,int,int,int*) ;
 int FUNC_3 (int ,char*,int*,int*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct hid_sensor_custom *VAR_6 = FUNC_0(VAR_2);
 int VAR_7, VAR_8, VAR_9;
 char VAR_10[VAR_1];
 int VAR_11;

 if (FUNC_3(VAR_3->attr.name, "feature-%x-%x-%s", &VAR_7, &VAR_9,
     VAR_10) == 3) {
  VAR_8 = VAR_7 + VAR_6->input_field_count;
 } else
  return -VAR_0;

 if (!FUNC_5(VAR_10, "value", FUNC_4("value"))) {
  u32 VAR_12;
  int VAR_13;

  if (FUNC_1(VAR_4, 0, &VAR_11) != 0)
   return -VAR_0;

  VAR_12 = VAR_6->fields[VAR_8].attribute.
        report_id;
  VAR_13 = FUNC_2(VAR_6->hsdev, VAR_12,
          VAR_7, sizeof(VAR_11), &VAR_11);
 } else
  return -VAR_0;

 return VAR_5;
}
