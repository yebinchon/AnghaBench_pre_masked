
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct xadc {unsigned int alarm_mask; int mutex; TYPE_1__* ops; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_2__ {int (* update_alarm ) (struct xadc*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xadc*,int ,int*) ;
 int FUNC_1 (struct xadc*,int ,int) ;
 struct xadc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct xadc*,unsigned int) ;
 unsigned int FUNC_6 (struct iio_chan_spec const*) ;

int FUNC_7(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
 enum iio_event_direction VAR_5, int VAR_6)
{
 unsigned int VAR_7 = FUNC_6(VAR_3);
 struct xadc *VAR_8 = FUNC_2(VAR_2);
 uint16_t VAR_9, VAR_10;
 int VAR_11;

 FUNC_3(&VAR_8->mutex);

 if (VAR_6)
  VAR_8->alarm_mask |= VAR_7;
 else
  VAR_8->alarm_mask &= ~VAR_7;

 VAR_8->ops->update_alarm(VAR_8, VAR_8->alarm_mask);

 VAR_11 = FUNC_0(VAR_8, VAR_1, &VAR_9);
 if (VAR_11)
  goto err_out;

 VAR_10 = VAR_9;
 VAR_9 |= VAR_0;
 VAR_9 &= ~((VAR_8->alarm_mask & 0xf0) << 4);
 VAR_9 &= ~((VAR_8->alarm_mask & 0x08) >> 3);
 VAR_9 &= ~((VAR_8->alarm_mask & 0x07) << 1);
 if (VAR_10 != VAR_9)
  VAR_11 = FUNC_1(VAR_8, VAR_1, VAR_9);

err_out:
 FUNC_4(&VAR_8->mutex);

 return VAR_11;
}
