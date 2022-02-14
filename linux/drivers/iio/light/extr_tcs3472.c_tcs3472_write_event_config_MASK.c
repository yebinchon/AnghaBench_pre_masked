
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcs3472_data {int lock; int enable; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct tcs3472_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
 enum iio_event_direction VAR_5, int VAR_6)
{
 struct tcs3472_data *VAR_7 = FUNC_1(VAR_2);
 int VAR_8 = 0;
 u8 VAR_9;

 FUNC_2(&VAR_7->lock);

 VAR_9 = VAR_7->enable;

 if (VAR_6)
  VAR_7->enable |= VAR_1;
 else
  VAR_7->enable &= ~VAR_1;

 if (VAR_9 != VAR_7->enable) {
  VAR_8 = FUNC_0(VAR_7->client, VAR_0,
      VAR_7->enable);
  if (VAR_8)
   VAR_7->enable = VAR_9;
 }
 FUNC_3(&VAR_7->lock);

 return VAR_8;
}
