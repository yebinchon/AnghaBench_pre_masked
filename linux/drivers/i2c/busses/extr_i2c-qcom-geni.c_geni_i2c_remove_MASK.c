
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct geni_i2c_dev {TYPE_1__ se; int adap; } ;


 int FUNC_0 (int *) ;
 struct geni_i2c_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct geni_i2c_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->adap);
 FUNC_2(VAR_1->se.dev);
 return 0;
}
