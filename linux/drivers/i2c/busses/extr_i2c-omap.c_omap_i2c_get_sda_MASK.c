
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_i2c_dev {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct omap_i2c_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2)
{
 struct omap_i2c_dev *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);

 return VAR_4 & VAR_1;
}
