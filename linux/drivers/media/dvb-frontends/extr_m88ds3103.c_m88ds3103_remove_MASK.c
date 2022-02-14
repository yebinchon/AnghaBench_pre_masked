
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m88ds3103_dev {int muxc; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct m88ds3103_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct m88ds3103_dev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct m88ds3103_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_2(VAR_1->muxc);

 FUNC_3(VAR_1);
 return 0;
}
