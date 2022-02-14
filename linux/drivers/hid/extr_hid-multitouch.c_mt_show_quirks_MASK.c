
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quirks; } ;
struct mt_device {TYPE_1__ mtclass; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct mt_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct hid_device *VAR_3 = FUNC_2(VAR_0);
 struct mt_device *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, "%u\n", VAR_4->mtclass.quirks);
}
