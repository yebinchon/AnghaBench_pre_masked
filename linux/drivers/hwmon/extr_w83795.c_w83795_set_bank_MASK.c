
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83795_data {int bank; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct w83795_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u8 VAR_2)
{
 struct w83795_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;


 if ((VAR_3->bank & 0x07) == VAR_2)
  return 0;


 VAR_2 |= VAR_3->bank & ~0x07;
 VAR_4 = FUNC_2(VAR_1, VAR_0, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->dev,
   "Failed to set bank to %d, err %d\n",
   (int)VAR_2, VAR_4);
  return VAR_4;
 }
 VAR_3->bank = VAR_2;

 return 0;
}
