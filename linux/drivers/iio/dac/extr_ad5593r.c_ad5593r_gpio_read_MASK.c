
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dummy; } ;
struct ad5592r_state {int dev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int ) ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ad5592r_state *VAR_1, u8 *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_1->dev);
 s32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 < 0)
  return (int) VAR_4;

 *VAR_2 = (u8) VAR_4;

 return 0;
}
