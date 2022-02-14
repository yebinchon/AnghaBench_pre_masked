
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tsl2563_chip {int high_thres; int low_thres; int lock; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 struct tsl2563_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
 const struct iio_chan_spec *VAR_5, enum iio_event_type VAR_6,
 enum iio_event_direction VAR_7, enum iio_event_info VAR_8, int VAR_9,
 int VAR_10)
{
 struct tsl2563_chip *VAR_11 = FUNC_1(VAR_4);
 int VAR_12;
 u8 VAR_13;

 if (VAR_7 == VAR_0)
  VAR_13 = VAR_2;
 else
  VAR_13 = VAR_3;
 FUNC_2(&VAR_11->lock);
 VAR_12 = FUNC_0(VAR_11->client, VAR_1 | VAR_13,
     VAR_9 & 0xFF);
 if (VAR_12)
  goto error_ret;
 VAR_12 = FUNC_0(VAR_11->client,
     VAR_1 | (VAR_13 + 1),
     (VAR_9 >> 8) & 0xFF);
 if (VAR_7 == VAR_0)
  VAR_11->high_thres = VAR_9;
 else
  VAR_11->low_thres = VAR_9;

error_ret:
 FUNC_3(&VAR_11->lock);

 return VAR_12;
}
