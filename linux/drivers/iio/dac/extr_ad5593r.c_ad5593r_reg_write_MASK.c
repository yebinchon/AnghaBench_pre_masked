
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
struct ad5592r_state {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int ) ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ad5592r_state *VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_1->dev);

 return FUNC_0(VAR_4,
   VAR_0 | VAR_2, VAR_3);
}
