
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_i2c_dev {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct omap_i2c_dev*,int ,int ) ;
 struct omap_i2c_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct omap_i2c_dev *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 FUNC_0(&VAR_2->adapter);
 VAR_3 = FUNC_5(&VAR_1->dev);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_4(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);
 FUNC_3(&VAR_1->dev);
 return 0;
}
