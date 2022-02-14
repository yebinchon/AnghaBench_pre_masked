
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ads1015_data {int lock; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ads1015_data*,struct iio_chan_spec const*,int) ;
 int FUNC_1 (struct ads1015_data*,struct iio_chan_spec const*,int) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ads1015_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, enum iio_event_type VAR_5,
 enum iio_event_direction VAR_6, int VAR_7)
{
 struct ads1015_data *VAR_8 = FUNC_4(VAR_3);
 int VAR_9;
 int VAR_10 = (VAR_6 == VAR_2) ?
  VAR_1 : VAR_0;

 FUNC_5(&VAR_8->lock);


 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9) {
  FUNC_6(&VAR_8->lock);
  return VAR_9;
 }

 if (VAR_7)
  VAR_9 = FUNC_1(VAR_8, VAR_4, VAR_10);
 else
  VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_10);

 FUNC_3(VAR_3);
 FUNC_6(&VAR_8->lock);

 return VAR_9;
}
