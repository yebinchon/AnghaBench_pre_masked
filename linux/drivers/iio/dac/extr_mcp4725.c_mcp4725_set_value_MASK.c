
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcp4725_data {int client; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 struct mcp4725_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2, int VAR_3)
{
 struct mcp4725_data *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5[2];
 int VAR_6;

 if (VAR_3 >= (1 << 12) || VAR_3 < 0)
  return -VAR_0;

 VAR_5[0] = (VAR_3 >> 8) & 0xf;
 VAR_5[1] = VAR_3 & 0xff;

 VAR_6 = FUNC_0(VAR_4->client, VAR_5, 2);
 if (VAR_6 < 0)
  return VAR_6;
 else if (VAR_6 != 2)
  return -VAR_1;
 else
  return 0;
}
