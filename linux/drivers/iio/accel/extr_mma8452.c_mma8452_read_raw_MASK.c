
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mma8452_data {int data_cfg; int client; TYPE_2__* chip_info; int lock; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int shift; int realbits; } ;
struct iio_chan_spec {size_t scan_index; TYPE_1__ scan_type; } ;
typedef int __be16 ;
struct TYPE_4__ {int** mma_scales; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct mma8452_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct mma8452_data*) ;
 int FUNC_6 (struct mma8452_data*) ;
 int** VAR_6 ;
 int FUNC_7 (struct mma8452_data*,int *) ;
 int FUNC_8 (struct mma8452_data*,int*,int*) ;
 int** VAR_7 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct iio_dev *VAR_8,
       struct iio_chan_spec const *VAR_9,
       int *VAR_10, int *VAR_11, long VAR_12)
{
 struct mma8452_data *VAR_13 = FUNC_4(VAR_8);
 __be16 VAR_14[3];
 int VAR_15, VAR_16;

 switch (VAR_12) {
 case 130:
  VAR_16 = FUNC_2(VAR_8);
  if (VAR_16)
   return VAR_16;

  FUNC_9(&VAR_13->lock);
  VAR_16 = FUNC_7(VAR_13, VAR_14);
  FUNC_10(&VAR_13->lock);
  FUNC_3(VAR_8);
  if (VAR_16 < 0)
   return VAR_16;

  *VAR_10 = FUNC_11(FUNC_0(
   VAR_14[VAR_9->scan_index]) >> VAR_9->scan_type.shift,
   VAR_9->scan_type.realbits - 1);

  return VAR_1;
 case 128:
  VAR_15 = VAR_13->data_cfg & VAR_3;
  *VAR_10 = VAR_13->chip_info->mma_scales[VAR_15][0];
  *VAR_11 = VAR_13->chip_info->mma_scales[VAR_15][1];

  return VAR_2;
 case 129:
  VAR_15 = FUNC_5(VAR_13);
  *VAR_10 = VAR_7[VAR_15][0];
  *VAR_11 = VAR_7[VAR_15][1];

  return VAR_2;
 case 133:
  VAR_16 = FUNC_1(VAR_13->client,
            VAR_5 +
            VAR_9->scan_index);
  if (VAR_16 < 0)
   return VAR_16;

  *VAR_10 = FUNC_11(VAR_16, 7);

  return VAR_1;
 case 132:
  if (VAR_13->data_cfg & VAR_4) {
   VAR_16 = FUNC_8(VAR_13, VAR_10, VAR_11);
   if (VAR_16 < 0)
    return VAR_16;
  } else {
   *VAR_10 = 0;
   *VAR_11 = 0;
  }

  return VAR_2;
 case 131:
  VAR_16 = FUNC_6(VAR_13);
  if (VAR_16 < 0)
   return VAR_16;

  VAR_15 = FUNC_5(VAR_13);

  *VAR_10 = VAR_6[VAR_16][VAR_15];
  return VAR_1;
 }

 return -VAR_0;
}
