
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mmc35240_data {int res; int* axis_scale; int * axis_coef; int regmap; TYPE_1__* client; } ;
typedef int otp_data ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,unsigned int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct mmc35240_data*,int) ;
 int FUNC_8 (int ,int ,int*,int) ;
 int FUNC_9 (int ,int ,unsigned int*) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct mmc35240_data *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;
 u8 VAR_11[6];

 VAR_7 = FUNC_9(VAR_6->regmap, VAR_4, &VAR_10);
 if (VAR_7 < 0) {
  FUNC_6(&VAR_6->client->dev, "Error reading product id\n");
  return VAR_7;
 }

 FUNC_5(&VAR_6->client->dev, "MMC35240 chip id %x\n", VAR_10);






 VAR_7 = FUNC_7(VAR_6, 1);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_11(VAR_5, VAR_5 + 1);

 VAR_7 = FUNC_7(VAR_6, 0);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_10(VAR_6->regmap, VAR_3,
     VAR_0,
     VAR_6->res << VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_6->regmap, VAR_2,
          (u8 *)VAR_11, sizeof(VAR_11));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = FUNC_0(((VAR_11[1] & 0x03) << 4) |
        (VAR_11[2] >> 4));
 VAR_9 = FUNC_1(VAR_11[3] & 0x3f);

 VAR_6->axis_coef[0] = FUNC_2(1);
 VAR_6->axis_coef[1] = FUNC_3(VAR_8);
 VAR_6->axis_coef[2] = FUNC_4(VAR_9);

 VAR_6->axis_scale[0] = 1;
 VAR_6->axis_scale[1] = 1000;
 VAR_6->axis_scale[2] = 10000;

 return 0;
}
