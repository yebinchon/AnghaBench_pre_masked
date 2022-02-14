
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvbios_init {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 struct i2c_adapter* FUNC_1 (struct nvbios_init*,int ) ;
 int FUNC_2 (struct i2c_adapter*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct nvbios_init *VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct i2c_adapter *VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6 && FUNC_0(VAR_1))
  return FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);
 return -VAR_0;
}
