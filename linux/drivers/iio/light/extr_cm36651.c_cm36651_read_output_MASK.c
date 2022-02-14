
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int type; int address; } ;
struct i2c_client {int dummy; } ;
struct cm36651_data {struct i2c_client* ps_client; int flags; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cm36651_data *VAR_7,
    struct iio_chan_spec const *VAR_8, int *VAR_9)
{
 struct i2c_client *VAR_10 = VAR_7->client;
 int VAR_11 = -VAR_5;

 switch (VAR_8->type) {
 case 129:
  *VAR_9 = FUNC_1(VAR_10, VAR_8->address);
  if (*VAR_9 < 0)
   return VAR_11;

  VAR_11 = FUNC_2(VAR_10, VAR_1,
       VAR_0);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_11 = VAR_6;
  break;
 case 128:
  *VAR_9 = FUNC_0(VAR_7->ps_client);
  if (*VAR_9 < 0)
   return VAR_11;

  if (!FUNC_3(VAR_2, &VAR_7->flags)) {
   VAR_11 = FUNC_2(VAR_7->ps_client,
     VAR_3, VAR_4);
   if (VAR_11 < 0)
    return VAR_11;
  }

  VAR_11 = VAR_6;
  break;
 default:
  break;
 }

 return VAR_11;
}
