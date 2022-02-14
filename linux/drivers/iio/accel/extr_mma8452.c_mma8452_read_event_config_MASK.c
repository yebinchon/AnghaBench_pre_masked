
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_event_regs {scalar_t__ ev_cfg_chan_shift; int ev_cfg; } ;
struct mma8452_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ scan_index; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;


 int FUNC_1 (int ,int ) ;
 struct mma8452_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct mma8452_data*) ;
 int FUNC_4 (struct mma8452_data*,struct iio_chan_spec const*,int,struct mma8452_event_regs const**) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
         const struct iio_chan_spec *VAR_2,
         enum iio_event_type VAR_3,
         enum iio_event_direction VAR_4)
{
 struct mma8452_data *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;
 const struct mma8452_event_regs *VAR_7;

 VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_4, &VAR_7);
 if (VAR_6)
  return VAR_6;

 switch (VAR_4) {
 case 129:
  return FUNC_3(VAR_5);
 case 128:
  VAR_6 = FUNC_1(VAR_5->client,
    VAR_7->ev_cfg);
  if (VAR_6 < 0)
   return VAR_6;

  return !!(VAR_6 & FUNC_0(VAR_2->scan_index +
    VAR_7->ev_cfg_chan_shift));
 default:
  return -VAR_0;
 }
}
