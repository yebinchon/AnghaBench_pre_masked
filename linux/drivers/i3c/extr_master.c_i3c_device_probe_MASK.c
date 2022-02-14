
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3c_driver {int (* probe ) (struct i3c_device*) ;} ;
struct i3c_device {int dummy; } ;
struct device {int driver; } ;


 struct i3c_device* FUNC_0 (struct device*) ;
 struct i3c_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct i3c_device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct i3c_device *VAR_1 = FUNC_0(VAR_0);
 struct i3c_driver *VAR_2 = FUNC_1(VAR_0->driver);

 return VAR_2->probe(VAR_1);
}
