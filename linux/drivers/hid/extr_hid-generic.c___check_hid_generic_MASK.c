
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_driver {int dummy; } ;
struct hid_device {int dummy; } ;
struct device_driver {int dummy; } ;


 struct hid_driver VAR_0 ;
 int * FUNC_0 (struct hid_device*,struct hid_driver*) ;
 struct hid_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device_driver *VAR_1, void *VAR_2)
{
 struct hid_driver *VAR_3 = FUNC_1(VAR_1);
 struct hid_device *VAR_4 = VAR_2;

 if (VAR_3 == &VAR_0)
  return 0;

 return FUNC_0(VAR_4, VAR_3) != ((void*)0);
}
