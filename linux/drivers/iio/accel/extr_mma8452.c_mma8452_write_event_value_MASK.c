
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_event_regs {int ev_ths_mask; int ev_count; int ev_ths; } ;
struct mma8452_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct mma8452_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct mma8452_data*,int ,int) ;
 int FUNC_3 (struct mma8452_data*,struct iio_chan_spec const*,int,struct mma8452_event_regs const**) ;
 size_t FUNC_4 (struct mma8452_data*) ;
 int FUNC_5 (struct mma8452_data*) ;
 int FUNC_6 (struct mma8452_data*,int,int) ;
 int** VAR_4 ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
    const struct iio_chan_spec *VAR_6,
    enum iio_event_type VAR_7,
    enum iio_event_direction VAR_8,
    enum iio_event_info VAR_9,
    int VAR_10, int VAR_11)
{
 struct mma8452_data *VAR_12 = FUNC_1(VAR_5);
 int VAR_13, VAR_14, VAR_15;
 const struct mma8452_event_regs *VAR_16;

 VAR_13 = FUNC_3(VAR_12, VAR_6, VAR_8, &VAR_16);
 if (VAR_13)
  return VAR_13;

 switch (VAR_9) {
 case 128:
  if (VAR_10 < 0 || VAR_10 > VAR_16->ev_ths_mask)
   return -VAR_0;

  return FUNC_2(VAR_12, VAR_16->ev_ths, VAR_10);

 case 129:
  VAR_13 = FUNC_5(VAR_12);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_15 = (VAR_10 * VAR_3 + VAR_11) /
    VAR_4[VAR_13][
     FUNC_4(VAR_12)];

  if (VAR_15 < 0 || VAR_15 > 0xff)
   return -VAR_0;

  return FUNC_2(VAR_12, VAR_16->ev_count, VAR_15);

 case 130:
  VAR_14 = FUNC_0(VAR_12->client,
            VAR_1);
  if (VAR_14 < 0)
   return VAR_14;

  if (VAR_10 == 0 && VAR_11 == 0) {
   VAR_14 |= VAR_2;
  } else {
   VAR_14 &= ~VAR_2;
   VAR_13 = FUNC_6(VAR_12, VAR_10, VAR_11);
   if (VAR_13 < 0)
    return VAR_13;
  }

  return FUNC_2(VAR_12, VAR_1, VAR_14);

 default:
  return -VAR_0;
 }
}
