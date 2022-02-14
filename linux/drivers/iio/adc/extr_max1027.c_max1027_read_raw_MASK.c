
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1027_state {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;

 struct max1027_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,struct iio_chan_spec const*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5, int *VAR_6, long VAR_7)
{
 int VAR_8 = 0;
 struct max1027_state *VAR_9 = FUNC_0(VAR_3);

 FUNC_2(&VAR_9->lock);

 switch (VAR_7) {
 case 131:
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
  break;
 case 130:
  switch (VAR_4->type) {
  case 129:
   *VAR_5 = 1;
   *VAR_6 = 8;
   VAR_8 = VAR_1;
   break;
  case 128:
   *VAR_5 = 2500;
   *VAR_6 = 10;
   VAR_8 = VAR_2;
   break;
  default:
   VAR_8 = -VAR_0;
   break;
  }
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 FUNC_3(&VAR_9->lock);

 return VAR_8;
}
