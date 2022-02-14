
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3)
{
 int VAR_4, VAR_5;


 FUNC_3(VAR_3, VAR_2, 0x05);


 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev,
   "Could not read configuration register (%d)\n", VAR_4);
  return VAR_4;
 }

 VAR_5 = VAR_4;
 VAR_4 &= ~VAR_1;

 if (VAR_4 != VAR_5) {
  FUNC_1(&VAR_3->dev, "Enable monitoring chip\n");
  FUNC_3(VAR_3, VAR_0, VAR_4);
 }

 return 0;
}
