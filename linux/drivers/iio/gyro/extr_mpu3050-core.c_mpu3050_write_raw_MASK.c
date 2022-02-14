
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpu3050 {int* calibration; int divisor; void* fullscale; int lpf; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int scan_index; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mpu3050* FUNC_1 (struct iio_dev*) ;
 int* VAR_9 ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_10,
        const struct iio_chan_spec *VAR_11,
        int VAR_12, int VAR_13, long VAR_14)
{
 struct mpu3050 *VAR_15 = FUNC_1(VAR_10);



 unsigned int VAR_16 =
  FUNC_0(VAR_9[0] * 1000000 * 2,
      VAR_8);
 unsigned int VAR_17 =
  FUNC_0(VAR_9[1] * 1000000 * 2,
      VAR_8);
 unsigned int VAR_18 =
  FUNC_0(VAR_9[2] * 1000000 * 2,
      VAR_8);
 unsigned int VAR_19 =
  FUNC_0(VAR_9[3] * 1000000 * 2,
      VAR_8);

 switch (VAR_14) {
 case 130:
  if (VAR_11->type != VAR_5)
   return -VAR_0;
  VAR_15->calibration[VAR_11->scan_index-1] = VAR_12;
  return 0;
 case 129:




  if (VAR_12 < 4 || VAR_12 > 8000)
   return -VAR_0;





  if (VAR_12 > 1000) {
   VAR_15->lpf = VAR_7;
   VAR_15->divisor = FUNC_0(8000, VAR_12) - 1;
   return 0;
  }

  VAR_15->lpf = VAR_6;
  VAR_15->divisor = FUNC_0(1000, VAR_12) - 1;
  return 0;
 case 128:
  if (VAR_11->type != VAR_5)
   return -VAR_0;
  if (VAR_12 != 0) {
   VAR_15->fullscale = VAR_2;
   return 0;
  }






  if (VAR_13 <= VAR_16 ||
      VAR_13 < ((VAR_17 + VAR_16) / 2))
   VAR_15->fullscale = VAR_3;
  else if (VAR_13 <= VAR_17 ||
    VAR_13 < ((VAR_18 + VAR_17) / 2))
   VAR_15->fullscale = VAR_4;
  else if (VAR_13 <= VAR_18 ||
    VAR_13 < ((VAR_19 + VAR_18) / 2))
   VAR_15->fullscale = VAR_1;
  else

   VAR_15->fullscale = VAR_2;
  return 0;
 default:
  break;
 }

 return -VAR_0;
}
