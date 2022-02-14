
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;






 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_2(VAR_4);

  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   VAR_5 = FUNC_1(VAR_4, VAR_2, 0);
   if (!VAR_5 || VAR_5 == -VAR_0)
    return VAR_5;
  }
 }

 FUNC_0(&VAR_4->dev, "Failed to open bootloader: %d\n", VAR_5);

 return VAR_5;
}
