
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipack_driver {int id_table; } ;
struct ipack_device_id {int dummy; } ;
struct ipack_device {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct ipack_device_id* FUNC_0 (int ,struct ipack_device*) ;
 struct ipack_device* FUNC_1 (struct device*) ;
 struct ipack_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct ipack_device *VAR_2 = FUNC_1(VAR_0);
 struct ipack_driver *VAR_3 = FUNC_2(VAR_1);
 const struct ipack_device_id *VAR_4;

 VAR_4 = FUNC_0(VAR_3->id_table, VAR_2);
 return VAR_4 ? 1 : 0;
}
