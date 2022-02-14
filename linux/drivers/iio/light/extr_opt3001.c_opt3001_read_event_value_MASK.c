
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt3001 {int lock; int low_thresh_mantissa; int low_thresh_exp; int high_thresh_mantissa; int high_thresh_exp; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int VAR_1 ;
 struct opt3001* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct opt3001*,int ,int ,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
  const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
  enum iio_event_direction VAR_5, enum iio_event_info VAR_6,
  int *VAR_7, int *VAR_8)
{
 struct opt3001 *VAR_9 = FUNC_0(VAR_2);
 int VAR_10 = VAR_1;

 FUNC_1(&VAR_9->lock);

 switch (VAR_5) {
 case 128:
  FUNC_3(VAR_9, VAR_9->high_thresh_exp,
    VAR_9->high_thresh_mantissa, VAR_7, VAR_8);
  break;
 case 129:
  FUNC_3(VAR_9, VAR_9->low_thresh_exp,
    VAR_9->low_thresh_mantissa, VAR_7, VAR_8);
  break;
 default:
  VAR_10 = -VAR_0;
 }

 FUNC_2(&VAR_9->lock);

 return VAR_10;
}
