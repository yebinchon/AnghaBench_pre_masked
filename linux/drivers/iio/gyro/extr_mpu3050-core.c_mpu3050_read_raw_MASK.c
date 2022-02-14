
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {int* calibration; size_t fullscale; int dev; int lock; int map; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int scan_index; int type; } ;
typedef int raw_val ;
typedef int __be16 ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct mpu3050* FUNC_3 (struct iio_dev*) ;
 int* VAR_5 ;
 int FUNC_4 (struct mpu3050*) ;
 int FUNC_5 (struct mpu3050*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_12(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7,
       int *VAR_8, int *VAR_9,
       long VAR_10)
{
 struct mpu3050 *VAR_11 = FUNC_3(VAR_6);
 int VAR_12;
 __be16 VAR_13;

 switch (VAR_10) {
 case 132:
  switch (VAR_7->type) {
  case 128:

   *VAR_8 = 23000;
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 133:
  switch (VAR_7->type) {
  case 134:
   *VAR_8 = VAR_11->calibration[VAR_7->scan_index-1];
   return VAR_2;
  default:
   return -VAR_0;
  }
 case 130:
  *VAR_8 = FUNC_4(VAR_11);
  return VAR_2;
 case 129:
  switch (VAR_7->type) {
  case 128:

   *VAR_8 = 1000;
   *VAR_9 = 280;
   return VAR_1;
  case 134:







   *VAR_8 = VAR_5[VAR_11->fullscale] * 2;
   *VAR_9 = VAR_4;
   return VAR_1;
  default:
   return -VAR_0;
  }
 case 131:

  FUNC_8(VAR_11->dev);
  FUNC_6(&VAR_11->lock);

  VAR_12 = FUNC_5(VAR_11);
  if (VAR_12)
   goto out_read_raw_unlock;

  switch (VAR_7->type) {
  case 128:
   VAR_12 = FUNC_11(VAR_11->map, VAR_3,
            &VAR_13, sizeof(VAR_13));
   if (VAR_12) {
    FUNC_2(VAR_11->dev,
     "error reading temperature\n");
    goto out_read_raw_unlock;
   }

   *VAR_8 = FUNC_1(VAR_13);
   VAR_12 = VAR_2;

   goto out_read_raw_unlock;
  case 134:
   VAR_12 = FUNC_11(VAR_11->map,
           FUNC_0(VAR_7->scan_index-1),
           &VAR_13,
           sizeof(VAR_13));
   if (VAR_12) {
    FUNC_2(VAR_11->dev,
     "error reading axis data\n");
    goto out_read_raw_unlock;
   }

   *VAR_8 = FUNC_1(VAR_13);
   VAR_12 = VAR_2;

   goto out_read_raw_unlock;
  default:
   VAR_12 = -VAR_0;
   goto out_read_raw_unlock;
  }
 default:
  break;
 }

 return -VAR_0;

out_read_raw_unlock:
 FUNC_7(&VAR_11->lock);
 FUNC_9(VAR_11->dev);
 FUNC_10(VAR_11->dev);

 return VAR_12;
}
