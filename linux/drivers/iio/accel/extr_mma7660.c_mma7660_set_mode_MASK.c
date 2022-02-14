
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma7660_data {int mode; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef enum mma7660_mode { ____Placeholder_mma7660_mode } mma7660_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mma7660_data *VAR_4,
    enum mma7660_mode VAR_5)
{
 int VAR_6;
 struct i2c_client *VAR_7 = VAR_4->client;

 if (VAR_5 == VAR_4->mode)
  return 0;

 VAR_6 = FUNC_1(VAR_7, VAR_1);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_7->dev, "failed to read sensor mode\n");
  return VAR_6;
 }

 if (VAR_5 == VAR_0) {
  VAR_6 &= ~VAR_3;
  VAR_6 |= VAR_2;
 } else {
  VAR_6 &= ~VAR_3;
  VAR_6 &= ~VAR_2;
 }

 VAR_6 = FUNC_2(VAR_7, VAR_1, VAR_6);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_7->dev, "failed to change sensor mode\n");
  return VAR_6;
 }

 VAR_4->mode = VAR_5;

 return VAR_6;
}
