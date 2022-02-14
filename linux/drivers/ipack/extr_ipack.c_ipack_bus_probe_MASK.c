
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipack_driver {TYPE_1__* ops; } ;
struct ipack_device {int dummy; } ;
struct device {int driver; } ;
struct TYPE_2__ {int (* probe ) (struct ipack_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ipack_device*) ;
 struct ipack_device* FUNC_1 (struct device*) ;
 struct ipack_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct ipack_device *VAR_2 = FUNC_1(VAR_1);
 struct ipack_driver *VAR_3 = FUNC_2(VAR_1->driver);

 if (!VAR_3->ops->probe)
  return -VAR_0;

 return VAR_3->ops->probe(VAR_2);
}
