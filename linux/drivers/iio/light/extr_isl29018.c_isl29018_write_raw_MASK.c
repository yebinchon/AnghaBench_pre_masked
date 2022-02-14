
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29018_chip {int calibscale; int ucalibscale; int lock; scalar_t__ suspended; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 struct isl29018_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct isl29018_chip*,int) ;
 int FUNC_2 (struct isl29018_chip*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
         struct iio_chan_spec const *VAR_4,
         int VAR_5,
         int VAR_6,
         long VAR_7)
{
 struct isl29018_chip *VAR_8 = FUNC_0(VAR_3);
 int VAR_9 = -VAR_1;

 FUNC_3(&VAR_8->lock);
 if (VAR_8->suspended) {
  VAR_9 = -VAR_0;
  goto write_done;
 }
 switch (VAR_7) {
 case 130:
  if (VAR_4->type == VAR_2) {
   VAR_8->calibscale = VAR_5;
   VAR_8->ucalibscale = VAR_6;
   VAR_9 = 0;
  }
  break;
 case 129:
  if (VAR_4->type == VAR_2 && !VAR_5)
   VAR_9 = FUNC_1(VAR_8, VAR_6);
  break;
 case 128:
  if (VAR_4->type == VAR_2)
   VAR_9 = FUNC_2(VAR_8, VAR_5, VAR_6);
  break;
 default:
  break;
 }

write_done:
 FUNC_4(&VAR_8->lock);

 return VAR_9;
}
