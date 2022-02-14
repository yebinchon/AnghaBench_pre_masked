
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsl2563_chip {int data0; int cover_comp_gain; int data1; int lock; int calib1; int calib0; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int type; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 struct tsl2563_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tsl2563_chip*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5,
       int *VAR_6,
       long VAR_7)
{
 int VAR_8 = -VAR_0;
 u32 VAR_9, VAR_10;
 struct tsl2563_chip *VAR_11 = FUNC_0(VAR_3);

 FUNC_1(&VAR_11->lock);
 switch (VAR_7) {
 case 130:
 case 131:
  switch (VAR_4->type) {
  case 128:
   VAR_8 = FUNC_6(VAR_11);
   if (VAR_8)
    goto error_ret;
   VAR_9 = FUNC_4(VAR_11->data0, VAR_11->calib0) *
    VAR_11->cover_comp_gain;
   VAR_10 = FUNC_4(VAR_11->data1, VAR_11->calib1) *
    VAR_11->cover_comp_gain;
   *VAR_5 = FUNC_3(VAR_9, VAR_10);
   VAR_8 = VAR_2;
   break;
  case 129:
   VAR_8 = FUNC_6(VAR_11);
   if (VAR_8)
    goto error_ret;
   if (VAR_4->channel2 == VAR_1)
    *VAR_5 = VAR_11->data0;
   else
    *VAR_5 = VAR_11->data1;
   VAR_8 = VAR_2;
   break;
  default:
   break;
  }
  break;

 case 132:
  if (VAR_4->channel2 == VAR_1)
   *VAR_5 = FUNC_5(VAR_11->calib0);
  else
   *VAR_5 = FUNC_5(VAR_11->calib1);
  VAR_8 = VAR_2;
  break;
 default:
  VAR_8 = -VAR_0;
  goto error_ret;
 }

error_ret:
 FUNC_2(&VAR_11->lock);
 return VAR_8;
}
