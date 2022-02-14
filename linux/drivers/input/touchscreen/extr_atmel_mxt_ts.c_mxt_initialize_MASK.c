
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {int in_bootloader; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mxt_data*) ;
 int VAR_4 ;
 int FUNC_4 (struct mxt_data*,int) ;
 int FUNC_5 (struct mxt_data*) ;
 int FUNC_6 (struct mxt_data*,int) ;
 int FUNC_7 (int ,int,int ,int *,int ,struct mxt_data*,int ) ;

__attribute__((used)) static int FUNC_8(struct mxt_data *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7 = 0;
 int VAR_8;

 while (1) {
  VAR_8 = FUNC_5(VAR_5);
  if (!VAR_8)
   break;


  VAR_8 = FUNC_4(VAR_5, 0);
  if (VAR_8) {
   FUNC_1(&VAR_6->dev, "Trying alternate bootloader address\n");
   VAR_8 = FUNC_4(VAR_5, 1);
   if (VAR_8) {

    return VAR_8;
   }
  }


  if (++VAR_7 > 1) {
   FUNC_0(&VAR_6->dev, "Could not recover from bootloader mode\n");




   VAR_5->in_bootloader = 1;
   return 0;
  }


  FUNC_6(VAR_5, 0);
  FUNC_2(VAR_2);
 }

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(VAR_3, 1, VAR_1,
     &VAR_6->dev, VAR_0, VAR_5,
     VAR_4);
 if (VAR_8) {
  FUNC_0(&VAR_6->dev, "Failed to invoke firmware loader: %d\n",
   VAR_8);
  return VAR_8;
 }

 return 0;
}
