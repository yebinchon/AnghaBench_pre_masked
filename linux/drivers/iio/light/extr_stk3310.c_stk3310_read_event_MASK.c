
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct stk3310_data {TYPE_1__* client; int lock; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 struct stk3310_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_7,
         const struct iio_chan_spec *VAR_8,
         enum iio_event_type VAR_9,
         enum iio_event_direction VAR_10,
         enum iio_event_info VAR_11,
         int *VAR_12, int *VAR_13)
{
 u8 VAR_14;
 __be16 VAR_15;
 int VAR_16;
 struct stk3310_data *VAR_17 = FUNC_2(VAR_7);

 if (VAR_11 != VAR_3)
  return -VAR_0;


 if (VAR_10 == VAR_2)
  VAR_14 = VAR_5;
 else if (VAR_10 == VAR_1)
  VAR_14 = VAR_6;
 else
  return -VAR_0;

 FUNC_3(&VAR_17->lock);
 VAR_16 = FUNC_5(VAR_17->regmap, VAR_14, &VAR_15, 2);
 FUNC_4(&VAR_17->lock);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_17->client->dev, "register read failed\n");
  return VAR_16;
 }
 *VAR_12 = FUNC_0(VAR_15);

 return VAR_4;
}
