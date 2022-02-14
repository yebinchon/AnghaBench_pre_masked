
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
 int FUNC_2 (struct omap_i2c_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_adapter *VAR_2, int VAR_3)
{
 struct omap_i2c_dev *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_0, VAR_5);
}
