
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct i2c_client*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_5, u8 *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_4 > VAR_2);

 VAR_7 = FUNC_2(VAR_5,
     VAR_1,
     &VAR_6[VAR_3]);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_5->dev, "failed to read report data: %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_7 != VAR_2) {
  FUNC_1(&VAR_5->dev,
   "wrong report length (%d vs %d expected)\n",
   VAR_7, VAR_2);
  return -VAR_0;
 }

 return 0;
}
