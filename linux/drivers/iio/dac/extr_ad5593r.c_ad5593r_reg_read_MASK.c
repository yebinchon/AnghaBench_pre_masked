
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct i2c_client {int dummy; } ;
struct ad5592r_state {int dev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int) ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ad5592r_state *VAR_1, u8 VAR_2, u16 *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_1->dev);
 s32 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0 | VAR_2);
 if (VAR_5 < 0)
  return (int) VAR_5;

 *VAR_3 = (u16) VAR_5;

 return 0;
}
