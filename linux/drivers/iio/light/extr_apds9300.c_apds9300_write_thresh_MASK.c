
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct apds9300_data {int mutex; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int FUNC_0 (struct apds9300_data*,int) ;
 int FUNC_1 (struct apds9300_data*,int) ;
 struct apds9300_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
  const struct iio_chan_spec *VAR_2, enum iio_event_type VAR_3,
  enum iio_event_direction VAR_4, enum iio_event_info VAR_5, int VAR_6,
  int VAR_7)
{
 struct apds9300_data *VAR_8 = FUNC_2(VAR_1);
 int VAR_9;

 FUNC_3(&VAR_8->mutex);
 if (VAR_4 == VAR_0)
  VAR_9 = FUNC_0(VAR_8, VAR_6);
 else
  VAR_9 = FUNC_1(VAR_8, VAR_6);
 FUNC_4(&VAR_8->mutex);

 return VAR_9;
}
