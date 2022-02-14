
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk3310_data {int reg_int_ps; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 struct stk3310_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0,
         const struct iio_chan_spec *VAR_1,
         enum iio_event_type VAR_2,
         enum iio_event_direction VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;
 struct stk3310_data *VAR_6 = FUNC_0(VAR_0);

 VAR_5 = FUNC_1(VAR_6->reg_int_ps, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4;
}
