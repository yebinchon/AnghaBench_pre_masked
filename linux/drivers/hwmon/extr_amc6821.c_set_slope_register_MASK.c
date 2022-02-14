
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static inline ssize_t FUNC_2(struct i2c_client *VAR_1,
  u8 VAR_2,
  u8 VAR_3,
  u8 *VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 VAR_5 = VAR_4[2]-VAR_4[1];
 for (VAR_6 = 4; VAR_6 > 0; VAR_6--) {
  if (VAR_5 * (0x20 >> VAR_6) >= VAR_3)
   break;
 }
 VAR_6 |= (VAR_4[1] & 0x7C) << 1;
 if (FUNC_1(VAR_1,
   VAR_2, VAR_6)) {
  FUNC_0(&VAR_1->dev, "Register write error, aborting.\n");
  return -VAR_0;
 }
 return 0;
}
