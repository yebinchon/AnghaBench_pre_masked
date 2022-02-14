
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver {struct vio_device_id* id_table; } ;
struct vio_device_id {int dummy; } ;
struct vio_dev {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct vio_dev* FUNC_0 (struct device*) ;
 struct vio_driver* FUNC_1 (struct device_driver*) ;
 int * FUNC_2 (struct vio_device_id const*,struct vio_dev*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct vio_dev *VAR_2 = FUNC_0(VAR_0);
 struct vio_driver *VAR_3 = FUNC_1(VAR_1);
 const struct vio_device_id *VAR_4 = VAR_3->id_table;

 if (!VAR_4)
  return 0;

 return FUNC_2(VAR_4, VAR_2) != ((void*)0);
}
