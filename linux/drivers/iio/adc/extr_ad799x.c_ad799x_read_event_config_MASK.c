
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; } ;
struct ad799x_state {int config; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct ad799x_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
        const struct iio_chan_spec *VAR_3,
        enum iio_event_type VAR_4,
        enum iio_event_direction VAR_5)
{
 struct ad799x_state *VAR_6 = FUNC_1(VAR_2);

 if (!(VAR_6->config & VAR_0))
  return 0;

 if ((VAR_6->config >> VAR_1) & FUNC_0(VAR_3->scan_index))
  return 1;

 return 0;
}
