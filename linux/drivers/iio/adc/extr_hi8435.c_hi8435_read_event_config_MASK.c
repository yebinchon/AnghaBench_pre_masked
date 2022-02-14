
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct hi8435_priv {int event_scan_mask; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int FUNC_0 (int ) ;
 struct hi8435_priv* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0,
        const struct iio_chan_spec *VAR_1,
        enum iio_event_type VAR_2,
        enum iio_event_direction VAR_3)
{
 struct hi8435_priv *VAR_4 = FUNC_1(VAR_0);

 return !!(VAR_4->event_scan_mask & FUNC_0(VAR_1->channel));
}
