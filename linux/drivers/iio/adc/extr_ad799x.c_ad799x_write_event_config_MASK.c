
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
 int FUNC_1 (struct ad799x_state*,int) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ad799x_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
         const struct iio_chan_spec *VAR_3,
         enum iio_event_type VAR_4,
         enum iio_event_direction VAR_5,
         int VAR_6)
{
 struct ad799x_state *VAR_7 = FUNC_4(VAR_2);
 int VAR_8;

 VAR_8 = FUNC_2(VAR_2);
 if (VAR_8)
  return VAR_8;

 if (VAR_6)
  VAR_7->config |= FUNC_0(VAR_3->scan_index) << VAR_1;
 else
  VAR_7->config &= ~(FUNC_0(VAR_3->scan_index) << VAR_1);

 if (VAR_7->config >> VAR_1)
  VAR_7->config |= VAR_0;
 else
  VAR_7->config &= ~VAR_0;

 VAR_8 = FUNC_1(VAR_7, VAR_7->config);
 FUNC_3(VAR_2);
 return VAR_8;
}
