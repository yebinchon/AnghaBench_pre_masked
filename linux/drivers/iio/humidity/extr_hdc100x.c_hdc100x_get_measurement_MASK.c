
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct iio_chan_spec {size_t address; } ;
struct i2c_client {int dev; } ;
struct hdc100x_data {int* adc_int_us; struct i2c_client* client; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;
 int FUNC_3 (struct i2c_client*,size_t) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct hdc100x_data *VAR_0,
       struct iio_chan_spec const *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->client;
 int VAR_3 = VAR_0->adc_int_us[VAR_1->address];
 int VAR_4;
 __be16 VAR_5;


 VAR_4 = FUNC_3(VAR_2, VAR_1->address);
 if (VAR_4 < 0) {
  FUNC_1(&VAR_2->dev, "cannot start measurement");
  return VAR_4;
 }


 FUNC_4(VAR_3, VAR_3 + 1000);


 VAR_4 = FUNC_2(VAR_0->client, (char *)&VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0) {
  FUNC_1(&VAR_2->dev, "cannot read sensor data\n");
  return VAR_4;
 }
 return FUNC_0(VAR_5);
}
