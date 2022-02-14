
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hp03_priv {int pressure; int temp; int xclr_gpio; int eeprom_regmap; TYPE_1__* client; } ;
struct device {int dummy; } ;
typedef int coefs ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct hp03_priv*,int ) ;
 int FUNC_3 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct hp03_priv *VAR_3)
{
 struct device *VAR_4 = &VAR_3->client->dev;
 u8 VAR_5[18];
 u16 VAR_6[7];
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;


 VAR_16 = FUNC_3(VAR_3->eeprom_regmap, VAR_2,
          VAR_5, sizeof(VAR_5));
 if (VAR_16 < 0) {
  FUNC_0(VAR_4, "Failed to read EEPROM (reg=%02x)\n",
   VAR_2);
  return VAR_16;
 }


 FUNC_1(VAR_3->xclr_gpio, 1);

 VAR_16 = FUNC_2(VAR_3, VAR_0);
 if (VAR_16 < 0) {
  FUNC_0(VAR_4, "Failed to read pressure\n");
  goto err_adc;
 }
 VAR_8 = VAR_16;

 VAR_16 = FUNC_2(VAR_3, VAR_1);
 if (VAR_16 < 0) {
  FUNC_0(VAR_4, "Failed to read temperature\n");
  goto err_adc;
 }
 VAR_9 = VAR_16;

 FUNC_1(VAR_3->xclr_gpio, 0);


 for (VAR_15 = 0; VAR_15 < 7; VAR_15++)
  VAR_6[VAR_15] = (VAR_5[2 * VAR_15] << 8) | (VAR_5[(2 * VAR_15) + 1] << 0);
 VAR_8 = ((VAR_8 >> 8) & 0xff) | ((VAR_8 & 0xff) << 8);
 VAR_9 = ((VAR_9 >> 8) & 0xff) | ((VAR_9 & 0xff) << 8);


 if (VAR_9 >= VAR_6[4])
  VAR_7 = VAR_5[14];
 else
  VAR_7 = VAR_5[15];

 VAR_10 = VAR_9 - VAR_6[4];
 VAR_11 = (VAR_7 * (VAR_10 >> 7) * (VAR_10 >> 7)) >> VAR_5[16];
 VAR_11 = VAR_10 - VAR_11;

 VAR_12 = (VAR_6[1] + (((VAR_6[3] - 1024) * VAR_11) >> 14)) * 4;
 VAR_13 = VAR_6[0] + ((VAR_6[2] * VAR_11) >> 10);
 VAR_14 = ((VAR_13 * (VAR_8 - 7168)) >> 14) - VAR_12;

 VAR_3->pressure = ((VAR_14 * 100) >> 5) + (VAR_6[6] * 10);
 VAR_3->temp = 250 + ((VAR_11 * VAR_6[5]) >> 16) - (VAR_11 >> VAR_5[17]);

 return 0;

err_adc:
 FUNC_1(VAR_3->xclr_gpio, 0);
 return VAR_16;
}
