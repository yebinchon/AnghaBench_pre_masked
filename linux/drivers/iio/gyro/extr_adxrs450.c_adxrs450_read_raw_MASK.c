
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iio_dev*,int ,int*) ;
 int FUNC_1 (struct iio_dev*,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
        struct iio_chan_spec const *VAR_7,
        int *VAR_8,
        int *VAR_9,
        long VAR_10)
{
 int VAR_11;
 s16 VAR_12;

 switch (VAR_10) {
 case 130:
  switch (VAR_7->type) {
  case 133:
   VAR_11 = FUNC_1(VAR_6, &VAR_12);
   if (VAR_11)
    break;
   *VAR_8 = VAR_12;
   VAR_11 = VAR_4;
   break;
  case 128:
   VAR_11 = FUNC_0(VAR_6,
             VAR_2, &VAR_12);
   if (VAR_11)
    break;
   *VAR_8 = (VAR_12 >> 6) + 225;
   VAR_11 = VAR_4;
   break;
  default:
   VAR_11 = -VAR_3;
   break;
  }
  break;
 case 129:
  switch (VAR_7->type) {
  case 133:
   *VAR_8 = 0;
   *VAR_9 = 218166;
   return VAR_5;
  case 128:
   *VAR_8 = 200;
   *VAR_9 = 0;
   return VAR_4;
  default:
   return -VAR_3;
  }
 case 131:
  VAR_11 = FUNC_0(VAR_6, VAR_1, &VAR_12);
  if (VAR_11)
   break;
  *VAR_8 = VAR_12;
  VAR_11 = VAR_4;
  break;
 case 132:
  VAR_11 = FUNC_0(VAR_6, VAR_0, &VAR_12);
  if (VAR_11)
   break;
  *VAR_8 = FUNC_2(VAR_12, 9);
  VAR_11 = VAR_4;
  break;
 default:
  VAR_11 = -VAR_3;
  break;
 }

 return VAR_11;
}
