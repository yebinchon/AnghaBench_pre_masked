
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_i2c_dev {scalar_t__ base; int dev; } ;
struct i2c_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 struct st_i2c_dev* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct st_i2c_dev*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_9)
{
 struct st_i2c_dev *VAR_10 = FUNC_1(VAR_9);
 u32 VAR_11;

 FUNC_0(VAR_10->dev, "Trying to recover bus\n");
 FUNC_6(0, VAR_10->base + VAR_7);

 FUNC_3(VAR_10);

 VAR_11 = VAR_1 | VAR_4 | VAR_2 | VAR_3;
 FUNC_4(VAR_10->base + VAR_0, VAR_11);

 FUNC_2(VAR_10->base + VAR_5, VAR_6);
 FUNC_5(8000, 10000);

 FUNC_6(0, VAR_10->base + VAR_8);
 FUNC_5(2000, 4000);
 FUNC_4(VAR_10->base + VAR_5, VAR_6);

 return 0;
}
