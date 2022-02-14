
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2563_chip {int lock; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct tsl2563_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
 enum iio_event_direction VAR_5)
{
 struct tsl2563_chip *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 FUNC_2(&VAR_6->lock);
 VAR_7 = FUNC_0(VAR_6->client,
           VAR_0 | VAR_1);
 FUNC_3(&VAR_6->lock);
 if (VAR_7 < 0)
  return VAR_7;

 return !!(VAR_7 & 0x30);
}
