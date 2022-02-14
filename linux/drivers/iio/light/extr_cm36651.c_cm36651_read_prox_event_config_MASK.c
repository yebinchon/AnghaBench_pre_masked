
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm36651_data {int lock; int flags; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 struct cm36651_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
     const struct iio_chan_spec *VAR_2,
     enum iio_event_type VAR_3,
     enum iio_event_direction VAR_4)
{
 struct cm36651_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 FUNC_1(&VAR_5->lock);

 VAR_6 = FUNC_3(VAR_0, &VAR_5->flags);

 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
