
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 struct mma8452_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct mma8452_data*,struct iio_chan_spec const*,int,struct mma8452_event_regs const**) ;
 size_t FUNC_3 (struct mma8452_data*) ;
 int FUNC_4 (struct mma8452_data*) ;
 int FUNC_5 (struct mma8452_data*,int*,int*) ;
 int** VAR_6 ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_7,
          const struct iio_chan_spec *VAR_8,
          enum iio_event_type VAR_9,
          enum iio_event_direction VAR_10,
          enum iio_event_info VAR_11,
          int *VAR_12, int *VAR_13)
{
 struct mma8452_data *VAR_14 = FUNC_1(VAR_7);
 int VAR_15, VAR_16, VAR_17;
 const struct mma8452_event_regs *VAR_18;

 VAR_15 = FUNC_2(VAR_14, VAR_8, VAR_10, &VAR_18);
 if (VAR_15)
  return VAR_15;

 switch (VAR_11) {
 case 128:
  VAR_15 = FUNC_0(VAR_14->client, VAR_18->ev_ths);
  if (VAR_15 < 0)
   return VAR_15;

  *VAR_12 = VAR_15 & VAR_18->ev_ths_mask;

  return VAR_1;

 case 129:
  VAR_15 = FUNC_0(VAR_14->client, VAR_18->ev_count);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_17 = FUNC_4(VAR_14);
  if (VAR_17 < 0)
   return VAR_17;

  VAR_16 = VAR_15 * VAR_6[VAR_17][
    FUNC_3(VAR_14)];
  *VAR_12 = VAR_16 / VAR_5;
  *VAR_13 = VAR_16 % VAR_5;

  return VAR_2;

 case 130:
  VAR_15 = FUNC_0(VAR_14->client,
            VAR_3);
  if (VAR_15 < 0)
   return VAR_15;

  if (VAR_15 & VAR_4) {
   *VAR_12 = 0;
   *VAR_13 = 0;
  } else {
   VAR_15 = FUNC_5(VAR_14, VAR_12, VAR_13);
   if (VAR_15 < 0)
    return VAR_15;
  }

  return VAR_2;

 default:
  return -VAR_0;
 }
}
