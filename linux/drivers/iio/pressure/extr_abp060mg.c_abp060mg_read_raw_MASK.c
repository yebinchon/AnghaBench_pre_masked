
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct abp_state {int offset; int scale; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct abp_state*,int*) ;
 struct abp_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
   struct iio_chan_spec const *VAR_5, int *VAR_6,
   int *VAR_7, long VAR_8)
{
 struct abp_state *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 FUNC_2(&VAR_9->lock);

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_0(VAR_9, VAR_6);
  break;
 case 130:
  *VAR_6 = VAR_9->offset;
  VAR_10 = VAR_3;
  break;
 case 128:
  *VAR_6 = VAR_9->scale;
  *VAR_7 = VAR_0 * 1000;
  VAR_10 = VAR_2;
  break;
 default:
  VAR_10 = -VAR_1;
  break;
 }

 FUNC_3(&VAR_9->lock);
 return VAR_10;
}
