
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct as5011_platform_data {int xp; int xn; int yp; int yn; } ;
struct as5011_device {struct i2c_client* i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct i2c_client*,int ,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct as5011_device *VAR_12,
    const struct as5011_platform_data *VAR_13)
{
 struct i2c_client *VAR_14 = VAR_12->i2c_client;
 int VAR_15;
 signed char VAR_16;


 VAR_15 = FUNC_1(VAR_14, VAR_0,
     VAR_4);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Soft reset failed\n");
  return VAR_15;
 }

 FUNC_3(10);

 VAR_15 = FUNC_1(VAR_14, VAR_0,
     VAR_3 |
     VAR_2 |
     VAR_1);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Power config failed\n");
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_14, VAR_5,
     VAR_6);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Can't invert spinning\n");
  return VAR_15;
 }


 VAR_15 = FUNC_1(VAR_14, VAR_8, VAR_13->xp);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Can't write threshold\n");
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_14, VAR_7, VAR_13->xn);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Can't write threshold\n");
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_14, VAR_11, VAR_13->yp);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Can't write threshold\n");
  return VAR_15;
 }

 VAR_15 = FUNC_1(VAR_14, VAR_10, VAR_13->yn);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Can't write threshold\n");
  return VAR_15;
 }


 VAR_15 = FUNC_0(VAR_14, VAR_9, &VAR_16);
 if (VAR_15 < 0) {
  FUNC_2(&VAR_14->dev, "Can't read i2c X resolution value\n");
  return VAR_15;
 }

 return 0;
}
