
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct apds9300_data {int mutex; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int FUNC_0 (struct apds9300_data*,int) ;
 struct apds9300_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0,
  const struct iio_chan_spec *VAR_1, enum iio_event_type VAR_2,
  enum iio_event_direction VAR_3, int VAR_4)
{
 struct apds9300_data *VAR_5 = FUNC_1(VAR_0);
 int VAR_6;

 FUNC_2(&VAR_5->mutex);
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 FUNC_3(&VAR_5->mutex);

 return VAR_6;
}
