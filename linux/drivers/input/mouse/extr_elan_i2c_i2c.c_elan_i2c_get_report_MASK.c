
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct i2c_client*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->dev, "failed to read report data: %d\n", VAR_4);
  return VAR_4;
 }

 if (VAR_4 != VAR_1) {
  FUNC_0(&VAR_2->dev,
   "wrong report length (%d vs %d expected)\n",
   VAR_4, VAR_1);
  return -VAR_0;
 }

 return 0;
}
