
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int reg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client*,int *,int) ;
 int FUNC_2 (int *,void const*,int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4,
         u16 VAR_5, const void *VAR_6, u16 VAR_7)
{
 int VAR_8, VAR_9;
 u16 VAR_10 = sizeof(VAR_5) + VAR_7;
 u8 VAR_11[sizeof(VAR_5) + VAR_3];

 if (VAR_7 > VAR_3)
  return -VAR_0;

 FUNC_3(VAR_5, VAR_11);
 FUNC_2(VAR_11 + sizeof(VAR_5), VAR_6, VAR_7);






 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_8 = FUNC_1(VAR_4, VAR_11, VAR_10);
  if (VAR_8 == VAR_10)
   return 0;

  FUNC_4(200, 300);
 }

 if (VAR_8 >= 0)
  VAR_8 = -VAR_1;

 FUNC_0(&VAR_4->dev, "Failed to write to address 0x%04X: %d\n",
  VAR_5, VAR_8);

 return VAR_8;
}
