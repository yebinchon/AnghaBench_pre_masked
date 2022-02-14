
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44009_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct max44009_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
          const struct iio_chan_spec *VAR_5,
          enum iio_event_type VAR_6,
          enum iio_event_direction VAR_7)
{
 struct max44009_data *VAR_8 = FUNC_1(VAR_4);

 if (VAR_5->type != VAR_2 || VAR_6 != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_8->client, VAR_3);
}
