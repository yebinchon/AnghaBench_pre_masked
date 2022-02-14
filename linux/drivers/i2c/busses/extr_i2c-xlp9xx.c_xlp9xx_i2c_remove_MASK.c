
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp9xx_i2c_dev {int adapter; int irq; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct xlp9xx_i2c_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xlp9xx_i2c_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct xlp9xx_i2c_dev *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_3, VAR_1, 0);
 FUNC_2(VAR_3->irq);
 FUNC_0(&VAR_3->adapter);
 FUNC_3(VAR_3, VAR_0, 0);

 return 0;
}
