
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcb_driver {int id_table; } ;
struct mcb_device_id {int dummy; } ;
struct mcb_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct mcb_device_id* FUNC_0 (int ,struct mcb_device*) ;
 struct mcb_device* FUNC_1 (struct device*) ;
 struct mcb_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct mcb_driver *VAR_2 = FUNC_2(VAR_1);
 struct mcb_device *VAR_3 = FUNC_1(VAR_0);
 const struct mcb_device_id *VAR_4;

 VAR_4 = FUNC_0(VAR_2->id_table, VAR_3);
 if (VAR_4)
  return 1;

 return 0;
}
