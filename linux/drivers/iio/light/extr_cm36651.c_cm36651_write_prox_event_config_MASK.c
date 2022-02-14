
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm36651_data {int lock; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cm36651_data*,int) ;
 struct cm36651_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
     const struct iio_chan_spec *VAR_4,
     enum iio_event_type VAR_5,
     enum iio_event_direction VAR_6,
     int VAR_7)
{
 struct cm36651_data *VAR_8 = FUNC_1(VAR_3);
 int VAR_9, VAR_10 = -VAR_2;

 FUNC_2(&VAR_8->lock);

 VAR_9 = VAR_7 ? VAR_1 : VAR_0;
 VAR_10 = FUNC_0(VAR_8, VAR_9);

 FUNC_3(&VAR_8->lock);

 return VAR_10;
}
