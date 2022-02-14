
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_ht_dev {size_t res_index; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int* VAR_2 ;
 struct ms_ht_dev* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct ms_ht_dev*,unsigned int*) ;
 int FUNC_2 (struct ms_ht_dev*,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4, int *VAR_5,
     int *VAR_6, long VAR_7)
{
 int VAR_8, VAR_9;
 unsigned int VAR_10;
 struct ms_ht_dev *VAR_11 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 131:
  switch (VAR_4->type) {
  case 128:
   VAR_8 = FUNC_2(VAR_11,
            &VAR_9);
   if (VAR_8)
    return VAR_8;
   *VAR_5 = VAR_9;

   return VAR_1;
  case 129:
   VAR_8 = FUNC_1(VAR_11,
         &VAR_10);
   if (VAR_8)
    return VAR_8;
   *VAR_5 = VAR_10;

   return VAR_1;
  default:
   return -VAR_0;
  }
 case 130:
  *VAR_5 = VAR_2[VAR_11->res_index];

  return VAR_1;
 default:
  return -VAR_0;
 }
}
