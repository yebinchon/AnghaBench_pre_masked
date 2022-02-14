
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct gp2ap020a00f_data {int* thresh_val; int lock; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct iio_chan_spec const*,int) ;
 struct gp2ap020a00f_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
           const struct iio_chan_spec *VAR_4,
           enum iio_event_type VAR_5,
           enum iio_event_direction VAR_6,
           enum iio_event_info VAR_7,
           int *VAR_8, int *VAR_9)
{
 struct gp2ap020a00f_data *VAR_10 = FUNC_2(VAR_3);
 u8 VAR_11;
 int VAR_12 = VAR_2;

 FUNC_3(&VAR_10->lock);

 VAR_11 = FUNC_1(VAR_4, VAR_6);

 if (VAR_11 > VAR_1) {
  VAR_12 = -VAR_0;
  goto error_unlock;
 }

 *VAR_8 = VAR_10->thresh_val[FUNC_0(VAR_11)];

error_unlock:
 FUNC_4(&VAR_10->lock);

 return VAR_12;
}
