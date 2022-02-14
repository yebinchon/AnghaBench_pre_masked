
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_i2c_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_i2c_dev*,int) ;
 int FUNC_1 (struct omap_i2c_dev*) ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_2, void *VAR_3)
{
 int VAR_4;
 struct omap_i2c_dev *VAR_5 = VAR_3;

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 != -VAR_0)
  FUNC_0(VAR_5, VAR_4);

 return VAR_1;
}
