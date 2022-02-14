
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {scalar_t__ type; } ;
struct i2c_client {int dev; } ;
struct cm36651_data {struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct cm36651_data*,struct iio_chan_spec const*,int*) ;
 int FUNC_1 (struct cm36651_data*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cm36651_data *VAR_5,
    struct iio_chan_spec const *VAR_6, int *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_5->client;
 int VAR_9, VAR_10;

 if (VAR_6->type == VAR_3)
  VAR_9 = VAR_0;
 else if (VAR_6->type == VAR_4)
  VAR_9 = VAR_1;
 else
  return -VAR_2;

 VAR_10 = FUNC_1(VAR_5, VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "CM36651 set operation mode failed\n");
  return VAR_10;
 }

 FUNC_3(50);
 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_8->dev, "CM36651 read output failed\n");
  return VAR_10;
 }

 return VAR_10;
}
