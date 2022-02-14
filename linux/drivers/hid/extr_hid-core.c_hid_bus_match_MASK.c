
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_driver {int dummy; } ;
struct hid_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int * FUNC_0 (struct hid_device*,struct hid_driver*) ;
 struct hid_device* FUNC_1 (struct device*) ;
 struct hid_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct hid_driver *VAR_2 = FUNC_2(VAR_1);
 struct hid_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2) != ((void*)0);
}
