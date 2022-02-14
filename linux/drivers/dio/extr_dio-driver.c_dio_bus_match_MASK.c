
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio_driver {struct dio_device_id* id_table; } ;
struct dio_device_id {int dummy; } ;
struct dio_dev {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct dio_device_id const*,struct dio_dev*) ;
 struct dio_dev* FUNC_1 (struct device*) ;
 struct dio_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct dio_dev *VAR_2 = FUNC_1(VAR_0);
 struct dio_driver *VAR_3 = FUNC_2(VAR_1);
 const struct dio_device_id *VAR_4 = VAR_3->id_table;

 if (!VAR_4)
  return 0;

 return FUNC_0(VAR_4, VAR_2) ? 1 : 0;
}
