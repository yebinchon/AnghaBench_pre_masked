
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver {int (* remove ) (struct vio_dev*) ;} ;
struct vio_dev {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct vio_dev*) ;
 struct vio_dev* FUNC_1 (struct device*) ;
 struct vio_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct vio_dev *VAR_1 = FUNC_1(VAR_0);
 struct vio_driver *VAR_2 = FUNC_2(VAR_0->driver);

 if (VAR_2->remove) {






  return VAR_2->remove(VAR_1);
 }

 return 1;
}
