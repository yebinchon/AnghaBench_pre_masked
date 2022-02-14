
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mcp4725_data {int ref_mode; int powerdown_mode; int dac_value; TYPE_1__* client; scalar_t__ powerdown; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_1__*,int*,int) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 struct mcp4725_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
 struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_1);
 struct mcp4725_data *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = 20;
 u8 VAR_8[3];
 bool VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(VAR_3, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (!VAR_9)
  return 0;

 VAR_8[0] = 0x60;
 VAR_8[0] |= VAR_6->ref_mode << 3;
 VAR_8[0] |= VAR_6->powerdown ? ((VAR_6->powerdown_mode + 1) << 1) : 0;
 VAR_8[1] = VAR_6->dac_value >> 4;
 VAR_8[2] = (VAR_6->dac_value & 0xf) << 4;

 VAR_10 = FUNC_3(VAR_6->client, VAR_8, 3);
 if (VAR_10 < 0)
  return VAR_10;
 else if (VAR_10 != 3)
  return -VAR_0;


 while (VAR_7--) {
  FUNC_5(20);
  VAR_10 = FUNC_2(VAR_6->client, VAR_8, 3);
  if (VAR_10 < 0)
   return VAR_10;
  else if (VAR_10 != 3)
   return -VAR_0;

  if (VAR_8[0] & 0x80)
   break;
 }

 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->client->dev,
   "mcp4725_store_eeprom() failed, incomplete\n");
  return -VAR_0;
 }

 return VAR_4;
}
