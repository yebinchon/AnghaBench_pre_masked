
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct hv_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct hv_device*,char*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct hv_device *VAR_4 = FUNC_0(VAR_1);
 char VAR_5[VAR_0 + 1];

 FUNC_1(VAR_4, VAR_5);
 return FUNC_2(VAR_3, "vmbus:%s\n", VAR_5);
}
