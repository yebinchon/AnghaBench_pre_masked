
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp007_data {int status_mask; int client; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct tmp007_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_7,
  const struct iio_chan_spec *VAR_8, enum iio_event_type VAR_9,
  enum iio_event_direction VAR_10, int VAR_11)
{
 struct tmp007_data *VAR_12 = FUNC_2(VAR_7);
 unsigned int VAR_13;
 int VAR_14;

 switch (VAR_8->channel2) {
 case 129:
 if (VAR_10 == VAR_1)
   VAR_13 = VAR_2;
  else
   VAR_13 = VAR_3;
  break;
 case 128:
  if (VAR_10 == VAR_1)
   VAR_13 = VAR_5;
  else
   VAR_13 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(&VAR_12->lock);
 VAR_14 = FUNC_0(VAR_12->client, VAR_4);
 FUNC_4(&VAR_12->lock);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_11)
  VAR_14 |= VAR_13;
 else
  VAR_14 &= ~VAR_13;

 return FUNC_1(VAR_12->client, VAR_4,
     VAR_12->status_mask = VAR_14);
}
