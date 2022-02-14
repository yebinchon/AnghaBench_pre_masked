
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lenovo_drvdata_cptkbd {int fn_lock; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct lenovo_drvdata_cptkbd* FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (char const*,int,int*) ;
 int FUNC_2 (struct hid_device*) ;
 struct hid_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2,
  const char *VAR_3,
  size_t VAR_4)
{
 struct hid_device *VAR_5 = FUNC_3(VAR_1);
 struct lenovo_drvdata_cptkbd *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 if (FUNC_1(VAR_3, 10, &VAR_7))
  return -VAR_0;
 if (VAR_7 < 0 || VAR_7 > 1)
  return -VAR_0;

 VAR_6->fn_lock = !!VAR_7;
 FUNC_2(VAR_5);

 return VAR_4;
}
