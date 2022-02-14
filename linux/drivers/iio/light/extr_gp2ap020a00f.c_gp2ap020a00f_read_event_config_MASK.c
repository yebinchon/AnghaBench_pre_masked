
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct gp2ap020a00f_data {int lock; int flags; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 struct gp2ap020a00f_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_6,
        const struct iio_chan_spec *VAR_7,
        enum iio_event_type VAR_8,
        enum iio_event_direction VAR_9)
{
 struct gp2ap020a00f_data *VAR_10 = FUNC_0(VAR_6);
 int VAR_11 = 0;

 FUNC_1(&VAR_10->lock);

 switch (VAR_7->type) {
 case 128:
  if (VAR_9 == VAR_5)
   VAR_11 = FUNC_3(VAR_4,
        &VAR_10->flags);
  else
   VAR_11 = FUNC_3(VAR_3,
        &VAR_10->flags);
  break;
 case 129:
  if (VAR_9 == VAR_5)
   VAR_11 = FUNC_3(VAR_2,
        &VAR_10->flags);
  else
   VAR_11 = FUNC_3(VAR_1,
        &VAR_10->flags);
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }

 FUNC_2(&VAR_10->lock);

 return VAR_11;
}
