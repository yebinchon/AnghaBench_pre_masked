
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int __be16 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_client*,int,int ,int ,int *,int ,int*,int) ;

int FUNC_4(struct i2c_client *VAR_3, u8 VAR_4,
         u16 VAR_5, u8 VAR_6, u16 *VAR_7)
{
 int VAR_8, VAR_9;
 __be16 VAR_10[VAR_2 / 2];

 if (VAR_6 > FUNC_0(VAR_10)) {
  FUNC_2(&VAR_3->dev, "Invalid buffer size %d\n", VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_1,
          VAR_5, ((void*)0), 0, (u8 *)VAR_10, VAR_6 * sizeof(u16));
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  VAR_7[VAR_9] = FUNC_1(VAR_10[VAR_9]);

 return 0;
}
