
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int flags; int adap; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rcar_i2c_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct rcar_i2c_priv*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct rcar_i2c_priv *VAR_2 = FUNC_1(VAR_1);
 struct device *VAR_3 = &VAR_1->dev;

 FUNC_0(&VAR_2->adap);
 FUNC_4(VAR_2);
 if (VAR_2->flags & VAR_0)
  FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 return 0;
}
