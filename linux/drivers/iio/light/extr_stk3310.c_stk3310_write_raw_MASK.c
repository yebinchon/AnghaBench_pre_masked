
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stk3310_data {int lock; TYPE_1__* client; int reg_ps_gain; int reg_als_gain; int reg_ps_it; int reg_als_it; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*) ;
 struct stk3310_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int VAR_7, int VAR_8, long VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct stk3310_data *VAR_12 = FUNC_2(VAR_5);

 if (VAR_6->type != VAR_1 && VAR_6->type != VAR_2)
  return -VAR_0;

 switch (VAR_9) {
 case 129:
  VAR_11 = FUNC_6(VAR_3,
       FUNC_0(VAR_3),
       VAR_7, VAR_8);
  if (VAR_11 < 0)
   return -VAR_0;
  FUNC_3(&VAR_12->lock);
  if (VAR_6->type == VAR_1)
   VAR_10 = FUNC_5(VAR_12->reg_als_it, VAR_11);
  else
   VAR_10 = FUNC_5(VAR_12->reg_ps_it, VAR_11);
  if (VAR_10 < 0)
   FUNC_1(&VAR_12->client->dev,
    "sensor configuration failed\n");
  FUNC_4(&VAR_12->lock);
  return VAR_10;

 case 128:
  VAR_11 = FUNC_6(VAR_4,
       FUNC_0(VAR_4),
       VAR_7, VAR_8);
  if (VAR_11 < 0)
   return -VAR_0;
  FUNC_3(&VAR_12->lock);
  if (VAR_6->type == VAR_1)
   VAR_10 = FUNC_5(VAR_12->reg_als_gain, VAR_11);
  else
   VAR_10 = FUNC_5(VAR_12->reg_ps_gain, VAR_11);
  if (VAR_10 < 0)
   FUNC_1(&VAR_12->client->dev,
    "sensor configuration failed\n");
  FUNC_4(&VAR_12->lock);
  return VAR_10;
 }

 return -VAR_0;
}
