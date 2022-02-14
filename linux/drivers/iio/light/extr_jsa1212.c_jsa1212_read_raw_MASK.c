
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jsa1212_data {size_t als_rng_idx; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct jsa1212_data* FUNC_1 (struct iio_dev*) ;
 int* VAR_3 ;
 int FUNC_2 (struct jsa1212_data*,int*) ;
 int FUNC_3 (struct jsa1212_data*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5,
    int *VAR_6, int *VAR_7, long VAR_8)
{
 int VAR_9;
 struct jsa1212_data *VAR_10 = FUNC_1(VAR_4);

 switch (VAR_8) {
 case 131:
  FUNC_4(&VAR_10->lock);
  switch (VAR_5->type) {
  case 129:
   VAR_9 = FUNC_2(VAR_10, VAR_6);
   break;
  case 128:
   VAR_9 = FUNC_3(VAR_10, VAR_6);
   break;
  default:
   VAR_9 = -VAR_0;
   break;
  }
  FUNC_5(&VAR_10->lock);
  return VAR_9 < 0 ? VAR_9 : VAR_2;
 case 130:
  switch (VAR_5->type) {
  case 129:
   *VAR_6 = VAR_3[VAR_10->als_rng_idx];
   *VAR_7 = FUNC_0(12);
   return VAR_1;
  default:
   break;
  }
  break;
 default:
  break;
 }

 return -VAR_0;
}
