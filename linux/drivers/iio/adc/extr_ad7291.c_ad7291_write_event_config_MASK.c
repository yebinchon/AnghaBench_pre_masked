
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; scalar_t__ channel; } ;
struct ad7291_chip_info {unsigned int command; unsigned int c_mask; int state_lock; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_2 ;

 int FUNC_1 (struct ad7291_chip_info*,int ,unsigned int) ;
 struct ad7291_chip_info* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
         const struct iio_chan_spec *VAR_4,
         enum iio_event_type VAR_5,
         enum iio_event_direction VAR_6,
         int VAR_7)
{
 int VAR_8 = 0;
 struct ad7291_chip_info *VAR_9 = FUNC_2(VAR_3);
 unsigned int VAR_10;
 u16 VAR_11;

 FUNC_3(&VAR_9->state_lock);
 VAR_11 = VAR_9->command;






 VAR_10 = FUNC_0(15 - VAR_4->channel);

 switch (VAR_4->type) {
 case 128:
  if ((!VAR_7) && (VAR_9->c_mask & VAR_10))
   VAR_9->c_mask &= ~VAR_10;
  else if (VAR_7 && (!(VAR_9->c_mask & VAR_10)))
   VAR_9->c_mask |= VAR_10;
  else
   break;

  VAR_11 &= ~VAR_0;
  VAR_11 |= VAR_9->c_mask;
  if (VAR_9->c_mask)
   VAR_11 |= VAR_0;

  VAR_8 = FUNC_1(VAR_9, VAR_1, VAR_11);
  if (VAR_8 < 0)
   goto error_ret;

  VAR_9->command = VAR_11;
  break;
 default:
  VAR_8 = -VAR_2;
 }

error_ret:
 FUNC_4(&VAR_9->state_lock);
 return VAR_8;
}
