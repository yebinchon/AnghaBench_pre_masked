
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl2832_dev {int regmap; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int msb; int lsb; int start_address; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct rtl2832_dev *VAR_1, int VAR_2, u32 VAR_3)
{
 struct i2c_client *VAR_4 = VAR_1->client;
 int VAR_5, VAR_6;
 u16 VAR_7;
 u8 VAR_8, VAR_9, VAR_10[4], VAR_11[4], VAR_12;
 u32 VAR_13, VAR_14, VAR_15;

 VAR_7 = VAR_0[VAR_2].start_address;
 VAR_8 = VAR_0[VAR_2].msb;
 VAR_9 = VAR_0[VAR_2].lsb;
 VAR_12 = (VAR_8 >> 3) + 1;
 VAR_15 = FUNC_0(VAR_8 - VAR_9);

 VAR_5 = FUNC_2(VAR_1->regmap, VAR_7, VAR_10, VAR_12);
 if (VAR_5)
  goto err;

 VAR_13 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++)
  VAR_13 |= VAR_10[VAR_6] << ((VAR_12 - 1 - VAR_6) * 8);

 VAR_14 = VAR_13 & ~(VAR_15 << VAR_9);
 VAR_14 |= ((VAR_3 & VAR_15) << VAR_9);

 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++)
  VAR_11[VAR_6] = (VAR_14 >> ((VAR_12 - 1 - VAR_6) * 8)) & 0xff;

 VAR_5 = FUNC_3(VAR_1->regmap, VAR_7, VAR_11, VAR_12);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_4->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
