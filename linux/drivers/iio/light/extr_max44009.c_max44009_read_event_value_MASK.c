
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_6,
         const struct iio_chan_spec *VAR_7,
         enum iio_event_type VAR_8,
         enum iio_event_direction VAR_9,
         enum iio_event_info VAR_10,
         int *VAR_11, int *VAR_12)
{
 int VAR_13;
 int VAR_14;

 if (VAR_7->type != VAR_2 || VAR_8 != VAR_1)
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_6, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_14 = VAR_13;

 *VAR_11 = VAR_14 * VAR_5;
 *VAR_12 = VAR_4;

 return VAR_3;
}
