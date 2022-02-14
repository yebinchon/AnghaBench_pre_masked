
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int ctrl_reg1; int data_cfg; int sleep_val; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ scan_index; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct mma8452_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct mma8452_data*) ;
 int FUNC_5 (struct mma8452_data*,scalar_t__,int) ;
 int FUNC_6 (struct mma8452_data*) ;
 int FUNC_7 (struct mma8452_data*,int,int) ;
 int FUNC_8 (struct mma8452_data*,int,int) ;
 int** VAR_8 ;
 int FUNC_9 (struct mma8452_data*,int,int) ;
 int FUNC_10 (struct mma8452_data*,int) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_9,
        struct iio_chan_spec const *VAR_10,
        int VAR_11, int VAR_12, long VAR_13)
{
 struct mma8452_data *VAR_14 = FUNC_3(VAR_9);
 int VAR_15, VAR_16;

 VAR_16 = FUNC_1(VAR_9);
 if (VAR_16)
  return VAR_16;

 switch (VAR_13) {
 case 129:
  VAR_15 = FUNC_7(VAR_14, VAR_11, VAR_12);
  if (VAR_15 < 0) {
   VAR_16 = VAR_15;
   break;
  }
  VAR_14->ctrl_reg1 &= ~VAR_1;
  VAR_14->ctrl_reg1 |= VAR_15 << VAR_2;

  VAR_14->sleep_val = FUNC_4(VAR_14);

  VAR_16 = FUNC_5(VAR_14, VAR_3,
         VAR_14->ctrl_reg1);
  break;
 case 128:
  VAR_15 = FUNC_8(VAR_14, VAR_11, VAR_12);
  if (VAR_15 < 0) {
   VAR_16 = VAR_15;
   break;
  }

  VAR_14->data_cfg &= ~VAR_5;
  VAR_14->data_cfg |= VAR_15;

  VAR_16 = FUNC_5(VAR_14, VAR_4,
         VAR_14->data_cfg);
  break;
 case 132:
  if (VAR_11 < -128 || VAR_11 > 127) {
   VAR_16 = -VAR_0;
   break;
  }

  VAR_16 = FUNC_5(VAR_14,
         VAR_7 + VAR_10->scan_index,
         VAR_11);
  break;

 case 131:
  if (VAR_11 == 0 && VAR_12 == 0) {
   VAR_14->data_cfg &= ~VAR_6;
  } else {
   VAR_14->data_cfg |= VAR_6;
   VAR_16 = FUNC_9(VAR_14, VAR_11, VAR_12);
   if (VAR_16 < 0)
    break;
  }

  VAR_16 = FUNC_5(VAR_14, VAR_4,
          VAR_14->data_cfg);
  break;

 case 130:
  VAR_16 = FUNC_6(VAR_14);

  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_8); VAR_15++) {
   if (VAR_8[VAR_15][VAR_16] == VAR_11) {
    VAR_16 = FUNC_10(VAR_14, VAR_15);
    break;
   }
  }
  break;
 default:
  VAR_16 = -VAR_0;
  break;
 }

 FUNC_2(VAR_9);
 return VAR_16;
}
