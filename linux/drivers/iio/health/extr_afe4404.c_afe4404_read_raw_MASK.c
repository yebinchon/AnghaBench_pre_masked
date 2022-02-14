
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
struct afe4404_data {int * fields; int regmap; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 unsigned int* VAR_3 ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;
 struct afe4404_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,unsigned int,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7,
       int *VAR_8, int *VAR_9, long VAR_10)
{
 struct afe4404_data *VAR_11 = FUNC_0(VAR_6);
 unsigned int VAR_12 = VAR_5[VAR_7->address];
 unsigned int VAR_13 = VAR_3[VAR_7->address];
 unsigned int VAR_14 = VAR_4[VAR_7->address];
 int VAR_15;

 switch (VAR_7->type) {
 case 128:
  switch (VAR_10) {
  case 131:
   VAR_15 = FUNC_2(VAR_11->regmap, VAR_12, VAR_8);
   if (VAR_15)
    return VAR_15;
   return VAR_1;
  case 132:
   VAR_15 = FUNC_1(VAR_11->fields[VAR_14], VAR_8);
   if (VAR_15)
    return VAR_15;
   return VAR_1;
  }
  break;
 case 129:
  switch (VAR_10) {
  case 131:
   VAR_15 = FUNC_1(VAR_11->fields[VAR_13], VAR_8);
   if (VAR_15)
    return VAR_15;
   return VAR_1;
  case 130:
   *VAR_8 = 0;
   *VAR_9 = 800000;
   return VAR_2;
  }
  break;
 default:
  break;
 }

 return -VAR_0;
}
