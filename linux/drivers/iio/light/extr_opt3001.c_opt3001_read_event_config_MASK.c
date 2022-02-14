
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt3001 {scalar_t__ mode; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 scalar_t__ VAR_0 ;
 struct opt3001* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
  const struct iio_chan_spec *VAR_2, enum iio_event_type VAR_3,
  enum iio_event_direction VAR_4)
{
 struct opt3001 *VAR_5 = FUNC_0(VAR_1);

 return VAR_5->mode == VAR_0;
}
