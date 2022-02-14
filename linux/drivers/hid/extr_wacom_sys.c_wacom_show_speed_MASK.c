
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bt_high_speed; } ;
struct wacom {TYPE_1__ wacom_wac; } ;
struct hid_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute
    *VAR_2, char *VAR_3)
{
 struct hid_device *VAR_4 = FUNC_2(VAR_1);
 struct wacom *VAR_5 = FUNC_0(VAR_4);

 return FUNC_1(VAR_3, VAR_0, "%i\n", VAR_5->wacom_wac.bt_high_speed);
}
