
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int als_interrupt_en; int prox_interrupt_en; } ;
struct tsl2772_chip {TYPE_1__ settings; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 scalar_t__ VAR_0 ;
 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
       const struct iio_chan_spec *VAR_2,
       enum iio_event_type VAR_3,
       enum iio_event_direction VAR_4,
       int VAR_5)
{
 struct tsl2772_chip *VAR_6 = FUNC_0(VAR_1);

 if (VAR_2->type == VAR_0)
  VAR_6->settings.als_interrupt_en = VAR_5 ? 1 : 0;
 else
  VAR_6->settings.prox_interrupt_en = VAR_5 ? 1 : 0;

 return FUNC_1(VAR_1);
}
