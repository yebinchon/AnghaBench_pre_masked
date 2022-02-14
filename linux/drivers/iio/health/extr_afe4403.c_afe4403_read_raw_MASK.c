
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
struct afe4403_data {int * fields; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 unsigned int* VAR_4 ;
 int FUNC_0 (struct afe4403_data*,unsigned int,int*) ;
 struct afe4403_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int *VAR_7, int *VAR_8, long VAR_9)
{
 struct afe4403_data *VAR_10 = FUNC_1(VAR_5);
 unsigned int VAR_11 = VAR_4[VAR_6->address];
 unsigned int VAR_12 = VAR_3[VAR_6->address];
 int VAR_13;

 switch (VAR_6->type) {
 case 128:
  switch (VAR_9) {
  case 131:
   VAR_13 = FUNC_0(VAR_10, VAR_11, VAR_7);
   if (VAR_13)
    return VAR_13;
   return VAR_1;
  }
  break;
 case 129:
  switch (VAR_9) {
  case 131:
   VAR_13 = FUNC_2(VAR_10->fields[VAR_12], VAR_7);
   if (VAR_13)
    return VAR_13;
   return VAR_1;
  case 130:
   *VAR_7 = 0;
   *VAR_8 = 800000;
   return VAR_2;
  }
  break;
 default:
  break;
 }

 return -VAR_0;
}
