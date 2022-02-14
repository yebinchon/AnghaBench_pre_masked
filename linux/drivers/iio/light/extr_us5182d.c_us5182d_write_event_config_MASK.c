
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct us5182d_data {int rising_en; int falling_en; int lock; void* power_mode; int default_continuous; int px_low_th; int px_high_th; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct us5182d_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct us5182d_data*) ;
 int FUNC_4 (struct us5182d_data*,int) ;
 int FUNC_5 (struct iio_dev*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
 const struct iio_chan_spec *VAR_6, enum iio_event_type VAR_7,
 enum iio_event_direction VAR_8, int VAR_9)
{
 struct us5182d_data *VAR_10 = FUNC_0(VAR_5);
 int VAR_11;
 u16 VAR_12;

 FUNC_1(&VAR_10->lock);

 switch (VAR_8) {
 case 128:
  if (VAR_10->rising_en == VAR_9) {
   FUNC_2(&VAR_10->lock);
   return 0;
  }
  VAR_12 = VAR_3;
  if (VAR_9) {
   VAR_10->power_mode = VAR_1;
   VAR_11 = FUNC_4(VAR_10, 1);
   if (VAR_11 < 0)
    goto err;
   VAR_11 = FUNC_3(VAR_10);
   if (VAR_11 < 0)
    goto err_poweroff;
   VAR_12 = VAR_10->px_high_th;
  }
  VAR_11 = FUNC_5(VAR_5, VAR_8, VAR_12);
  if (VAR_11 < 0)
   goto err_poweroff;
  VAR_10->rising_en = VAR_9;
  break;
 case 129:
  if (VAR_10->falling_en == VAR_9) {
   FUNC_2(&VAR_10->lock);
   return 0;
  }
  VAR_12 = VAR_4;
  if (VAR_9) {
   VAR_10->power_mode = VAR_1;
   VAR_11 = FUNC_4(VAR_10, 1);
   if (VAR_11 < 0)
    goto err;
   VAR_11 = FUNC_3(VAR_10);
   if (VAR_11 < 0)
    goto err_poweroff;
   VAR_12 = VAR_10->px_low_th;
  }
  VAR_11 = FUNC_5(VAR_5, VAR_8, VAR_12);
  if (VAR_11 < 0)
   goto err_poweroff;
  VAR_10->falling_en = VAR_9;
  break;
 default:
  VAR_11 = -VAR_0;
  goto err;
 }

 if (!VAR_9) {
  VAR_11 = FUNC_4(VAR_10, 0);
  if (VAR_11 < 0)
   goto err;
 }

 if (!VAR_10->falling_en && !VAR_10->rising_en && !VAR_10->default_continuous)
  VAR_10->power_mode = VAR_2;

 FUNC_2(&VAR_10->lock);
 return 0;

err_poweroff:
 if (VAR_9)
  FUNC_4(VAR_10, 0);
err:
 FUNC_2(&VAR_10->lock);
 return VAR_11;
}
