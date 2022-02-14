
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int features; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 struct hid_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct hid_device*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct hid_device *VAR_5 = FUNC_2(VAR_1);
 struct wacom *VAR_6 = FUNC_0(VAR_5);
 u8 VAR_7;

 if (FUNC_1(VAR_3, 0, &VAR_7))
  return -VAR_0;

 if (VAR_7 != 0 && VAR_7 != 1)
  return -VAR_0;

 FUNC_3(VAR_5, VAR_7, &VAR_6->wacom_wac.features);

 return VAR_4;
}
