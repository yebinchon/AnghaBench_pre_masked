
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2772_chip {size_t id; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tsl2772_chip* FUNC_1 (struct iio_dev*) ;
 int* VAR_6 ;
 int** VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_9,
         struct iio_chan_spec const *VAR_10,
         const int **VAR_11, int *VAR_12, int *VAR_13,
         long VAR_14)
{
 struct tsl2772_chip *VAR_15 = FUNC_1(VAR_9);

 switch (VAR_14) {
 case 129:
  if (VAR_10->type == VAR_3) {
   *VAR_13 = FUNC_0(VAR_6);
   *VAR_11 = VAR_6;
  } else {
   *VAR_13 = FUNC_0(VAR_8);
   *VAR_11 = VAR_8;
  }
  *VAR_12 = VAR_4;
  return VAR_1;
 case 128:
  *VAR_13 = FUNC_0(VAR_7[VAR_15->id]);
  *VAR_11 = VAR_7[VAR_15->id];
  *VAR_12 = VAR_5;
  return VAR_2;
 }

 return -VAR_0;
}
