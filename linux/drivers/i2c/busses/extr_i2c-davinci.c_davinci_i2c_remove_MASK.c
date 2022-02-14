
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct davinci_i2c_dev {int dev; int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (struct davinci_i2c_dev*,int ,int ) ;
 int FUNC_1 (struct davinci_i2c_dev*) ;
 int FUNC_2 (int *) ;
 struct davinci_i2c_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct davinci_i2c_dev *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_1(VAR_2);

 FUNC_2(&VAR_2->adapter);

 VAR_3 = FUNC_6(&VAR_1->dev);
 if (VAR_3 < 0) {
  FUNC_7(&VAR_1->dev);
  return VAR_3;
 }

 FUNC_0(VAR_2, VAR_0, 0);

 FUNC_5(VAR_2->dev);
 FUNC_8(VAR_2->dev);
 FUNC_4(VAR_2->dev);

 return 0;
}
