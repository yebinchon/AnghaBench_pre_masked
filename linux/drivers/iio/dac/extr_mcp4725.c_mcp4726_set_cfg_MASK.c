
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcp4725_data {int ref_mode; int powerdown; int dac_value; int client; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 struct mcp4725_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1)
{
 struct mcp4725_data *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3[3];
 int VAR_4;

 VAR_3[0] = 0x40;
 VAR_3[0] |= VAR_2->ref_mode << 3;
 if (VAR_2->powerdown)
  VAR_3[0] |= VAR_2->powerdown << 1;
 VAR_3[1] = VAR_2->dac_value >> 4;
 VAR_3[2] = (VAR_2->dac_value & 0xf) << 4;

 VAR_4 = FUNC_0(VAR_2->client, VAR_3, 3);
 if (VAR_4 < 0)
  return VAR_4;
 else if (VAR_4 != 3)
  return -VAR_0;
 else
  return 0;
}
