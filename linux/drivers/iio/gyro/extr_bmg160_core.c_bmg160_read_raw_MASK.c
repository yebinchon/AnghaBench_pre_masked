
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int const type; int scan_index; } ;
struct bmg160_data {int mutex; int dps_range; } ;
struct TYPE_3__ {int scale; int dps_range; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bmg160_data*,int ,int*) ;
 int FUNC_2 (struct bmg160_data*,int*) ;
 int FUNC_3 (struct bmg160_data*,int*) ;
 int FUNC_4 (struct bmg160_data*,int*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct iio_dev*) ;
 struct bmg160_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_6,
      struct iio_chan_spec const *VAR_7,
      int *VAR_8, int *VAR_9, long VAR_10)
{
 struct bmg160_data *VAR_11 = FUNC_6(VAR_6);
 int VAR_12;

 switch (VAR_10) {
 case 131:
  switch (VAR_7->type) {
  case 128:
   return FUNC_4(VAR_11, VAR_8);
  case 134:
   if (FUNC_5(VAR_6))
    return -VAR_1;
   else
    return FUNC_1(VAR_11, VAR_7->scan_index,
             VAR_8);
  default:
   return -VAR_2;
  }
 case 132:
  if (VAR_7->type == 128) {
   *VAR_8 = VAR_0;
   return VAR_3;
  } else
   return -VAR_2;
 case 133:
  return FUNC_3(VAR_11, VAR_8);
 case 129:
  switch (VAR_7->type) {
  case 128:
   *VAR_8 = 500;
   return VAR_3;
  case 134:
  {
   int VAR_13;

   for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); ++VAR_13) {
    if (VAR_5[VAR_13].dps_range ==
       VAR_11->dps_range) {
     *VAR_8 = 0;
     *VAR_9 = VAR_5[VAR_13].scale;
     return VAR_4;
    }
   }
   return -VAR_2;
  }
  default:
   return -VAR_2;
  }
 case 130:
  *VAR_9 = 0;
  FUNC_7(&VAR_11->mutex);
  VAR_12 = FUNC_2(VAR_11, VAR_8);
  FUNC_8(&VAR_11->mutex);
  return VAR_12;
 default:
  return -VAR_2;
 }
}
