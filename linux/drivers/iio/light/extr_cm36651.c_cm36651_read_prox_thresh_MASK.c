
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm36651_data {int* ps_ctrl_regs; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 size_t VAR_0 ;
 struct cm36651_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
     const struct iio_chan_spec *VAR_2,
     enum iio_event_type VAR_3,
     enum iio_event_direction VAR_4,
     enum iio_event_info VAR_5,
     int *VAR_6, int *VAR_7)
{
 struct cm36651_data *VAR_8 = FUNC_0(VAR_1);

 *VAR_6 = VAR_8->ps_ctrl_regs[VAR_0];

 return 0;
}
