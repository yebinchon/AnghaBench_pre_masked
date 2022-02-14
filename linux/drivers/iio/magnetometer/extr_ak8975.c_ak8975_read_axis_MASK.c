
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dev; } ;
struct ak_def {int range; int * data_regs; } ;
struct ak8975_data {int lock; struct i2c_client* client; struct ak_def* def; } ;
typedef int rval ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct ak8975_data*,struct i2c_client const*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_client const*,int ,int,int *) ;
 struct ak8975_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_2, int VAR_3, int *VAR_4)
{
 struct ak8975_data *VAR_5 = FUNC_4(VAR_2);
 const struct i2c_client *VAR_6 = VAR_5->client;
 const struct ak_def *VAR_7 = VAR_5->def;
 __le16 VAR_8;
 u16 VAR_9;
 int VAR_10;

 FUNC_8(&VAR_5->client->dev);

 FUNC_6(&VAR_5->lock);

 VAR_10 = FUNC_0(VAR_5, VAR_6);
 if (VAR_10)
  goto exit;

 VAR_10 = FUNC_3(
   VAR_6, VAR_7->data_regs[VAR_3],
   sizeof(VAR_8), (u8*)&VAR_8);
 if (VAR_10 < 0)
  goto exit;

 FUNC_7(&VAR_5->lock);

 FUNC_9(&VAR_5->client->dev);
 FUNC_10(&VAR_5->client->dev);


 VAR_9 = FUNC_5(VAR_8);
 *VAR_4 = FUNC_1(VAR_1, VAR_9, -VAR_7->range, VAR_7->range);
 return VAR_0;

exit:
 FUNC_7(&VAR_5->lock);
 FUNC_2(&VAR_6->dev, "Error in reading axis\n");
 return VAR_10;
}
