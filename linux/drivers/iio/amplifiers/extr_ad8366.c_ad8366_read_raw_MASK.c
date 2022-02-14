
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad8366_state {int* ch; int lock; int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 struct ad8366_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4,
      int *VAR_5,
      long VAR_6)
{
 struct ad8366_state *VAR_7 = FUNC_0(VAR_2);
 int VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_1(&VAR_7->lock);
 switch (VAR_6) {
 case 128:
  VAR_9 = VAR_7->ch[VAR_3->channel];

  switch (VAR_7->type) {
  case 131:
   VAR_10 = VAR_9 * 253 + 4500;
   break;
  case 130:
   VAR_10 = 15000 - VAR_9 * 1000;
   break;
  case 129:
   VAR_10 = 20000 - 31500 + VAR_9 * 500;
   break;
  }


  *VAR_4 = VAR_10 / 1000;
  *VAR_5 = (VAR_10 % 1000) * 1000;

  VAR_8 = VAR_1;
  break;
 default:
  VAR_8 = -VAR_0;
 }
 FUNC_2(&VAR_7->lock);

 return VAR_8;
}
