
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vl53l0x_data {struct i2c_client* client; } ;
struct iio_chan_spec {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int,int*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct vl53l0x_data *VAR_5,
      const struct iio_chan_spec *VAR_6,
      int *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_5->client;
 u16 VAR_9 = 20;
 u8 VAR_10[12];
 int VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_4, 1);
 if (VAR_11 < 0)
  return VAR_11;

 do {
  VAR_11 = FUNC_0(VAR_8,
            VAR_2);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_11 & VAR_3)
   break;

  FUNC_3(1000, 5000);
 } while (--VAR_9);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_8, VAR_2,
         12, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 else if (VAR_11 != 12)
  return -VAR_0;


 *VAR_7 = (VAR_10[10] << 8) + VAR_10[11];

 return 0;
}
