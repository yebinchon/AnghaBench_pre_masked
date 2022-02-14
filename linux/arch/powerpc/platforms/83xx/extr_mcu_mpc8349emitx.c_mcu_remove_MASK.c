
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcu {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct mcu* VAR_1 ;
 struct mcu* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct mcu*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mcu*) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4)
{
 struct mcu *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 FUNC_3(VAR_3);

 FUNC_0(&VAR_4->dev, &VAR_0);

 if (VAR_1 == VAR_5) {
  VAR_2 = ((void*)0);
  VAR_1 = ((void*)0);
 }

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  return VAR_6;
 FUNC_2(VAR_5);
 return 0;
}
