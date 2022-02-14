
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i2c_client {int dummy; } ;
struct ad5592r_state {int dev; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int ) ;
 scalar_t__ FUNC_2 (struct i2c_client*,int,int ) ;
 struct i2c_client* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ad5592r_state *VAR_3, unsigned VAR_4, u16 *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_3(VAR_3->dev);
 s32 VAR_7;

 VAR_7 = FUNC_2(VAR_6,
   VAR_2 | VAR_0, FUNC_0(VAR_4));
 if (VAR_7 < 0)
  return (int) VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7 < 0)
  return (int) VAR_7;

 *VAR_5 = (u16) VAR_7;

 return 0;
}
