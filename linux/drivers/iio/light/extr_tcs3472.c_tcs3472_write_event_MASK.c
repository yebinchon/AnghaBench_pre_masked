
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcs3472_data {int high_thresh; int low_thresh; int apers; int lock; int client; int atime; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int FUNC_0 (int*) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct tcs3472_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_6,
 const struct iio_chan_spec *VAR_7, enum iio_event_type VAR_8,
 enum iio_event_direction VAR_9, enum iio_event_info VAR_10, int VAR_11,
 int VAR_12)
{
 struct tcs3472_data *VAR_13 = FUNC_3(VAR_6);
 int VAR_14;
 u8 VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_4(&VAR_13->lock);
 switch (VAR_10) {
 case 128:
  switch (VAR_9) {
  case 130:
   VAR_15 = VAR_1;
   break;
  case 131:
   VAR_15 = VAR_2;
   break;
  default:
   VAR_14 = -VAR_0;
   goto error;
  }
  VAR_14 = FUNC_2(VAR_13->client, VAR_15, VAR_11);
  if (VAR_14)
   goto error;

  if (VAR_9 == 130)
   VAR_13->high_thresh = VAR_11;
  else
   VAR_13->low_thresh = VAR_11;
  break;
 case 129:
  VAR_16 = VAR_11 * VAR_4 + VAR_12;
  for (VAR_17 = 1; VAR_17 < FUNC_0(VAR_5) - 1; VAR_17++) {
   if (VAR_16 <= (256 - VAR_13->atime) * 2400 *
     VAR_5[VAR_17])
    break;
  }
  VAR_14 = FUNC_1(VAR_13->client, VAR_3, VAR_17);
  if (VAR_14)
   goto error;

  VAR_13->apers = VAR_17;
  break;
 default:
  VAR_14 = -VAR_0;
  break;
 }
error:
 FUNC_5(&VAR_13->lock);

 return VAR_14;
}
