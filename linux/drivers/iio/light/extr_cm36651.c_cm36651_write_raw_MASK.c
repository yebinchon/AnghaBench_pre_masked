
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct i2c_client {int dev; } ;
struct cm36651_data {struct i2c_client* client; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct cm36651_data*,struct iio_chan_spec const*,int) ;
 int FUNC_1 (int *,char*) ;
 struct cm36651_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5, long VAR_6)
{
 struct cm36651_data *VAR_7 = FUNC_2(VAR_2);
 struct i2c_client *VAR_8 = VAR_7->client;
 int VAR_9 = -VAR_0;

 if (VAR_6 == VAR_1) {
  VAR_9 = FUNC_0(VAR_7, VAR_3, VAR_5);
  if (VAR_9 < 0)
   FUNC_1(&VAR_8->dev, "Integration time write failed\n");
 }

 return VAR_9;
}
