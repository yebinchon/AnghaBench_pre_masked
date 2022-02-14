
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {int dummy; } ;
struct axxia_i2c_dev {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct axxia_i2c_dev* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct i2c_adapter *VAR_3, int VAR_4)
{
 struct axxia_i2c_dev *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;


 VAR_6 = FUNC_1(VAR_5->base + VAR_2) & VAR_1;
 if (!VAR_4)
  VAR_6 |= VAR_0;
 FUNC_2(VAR_6, VAR_5->base + VAR_2);
}
