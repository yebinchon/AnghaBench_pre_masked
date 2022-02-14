
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dax_device_driver {int dummy; } ;


 int FUNC_0 (struct dax_device_driver*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dax_device_driver *VAR_1, struct device *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = !!FUNC_0(VAR_1, FUNC_1(VAR_2));
 FUNC_3(&VAR_0);

 return VAR_3;
}
