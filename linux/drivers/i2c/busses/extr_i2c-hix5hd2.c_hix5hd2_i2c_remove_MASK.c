
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct hix5hd2_i2c_priv {int dev; int adap; } ;


 int FUNC_0 (int *) ;
 struct hix5hd2_i2c_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct hix5hd2_i2c_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->adap);
 FUNC_2(VAR_1->dev);
 FUNC_3(VAR_1->dev);

 return 0;
}
