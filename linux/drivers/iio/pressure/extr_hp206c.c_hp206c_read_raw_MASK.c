
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct hp206c_osr_setting {int osr_mask; int pres_conv_time_us; int temp_conv_time_us; } ;
struct hp206c_data {size_t temp_osr_index; size_t pres_osr_index; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iio_dev*,int,int ,int ) ;
 int* VAR_8 ;
 struct hp206c_osr_setting* VAR_9 ;
 struct hp206c_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_10,
      struct iio_chan_spec const *VAR_11, int *VAR_12,
      int *VAR_13, long VAR_14)
{
 int VAR_15;
 struct hp206c_data *VAR_16 = FUNC_1(VAR_10);
 const struct hp206c_osr_setting *VAR_17;
 u8 VAR_18;

 FUNC_2(&VAR_16->mutex);

 switch (VAR_14) {
 case 132:
  switch (VAR_11->type) {
  case 128:
   *VAR_12 = VAR_8[VAR_16->temp_osr_index];
   VAR_15 = VAR_6;
   break;

  case 129:
   *VAR_12 = VAR_8[VAR_16->pres_osr_index];
   VAR_15 = VAR_6;
   break;
  default:
   VAR_15 = -VAR_0;
  }
  break;

 case 131:
  switch (VAR_11->type) {
  case 128:
   VAR_17 = &VAR_9[VAR_16->temp_osr_index];
   VAR_18 = VAR_1 |
     VAR_17->osr_mask |
     VAR_3;
   VAR_15 = FUNC_0(VAR_10,
     VAR_18,
     VAR_5,
     VAR_17->temp_conv_time_us);
   if (VAR_15 >= 0) {



    *VAR_12 = FUNC_4(VAR_15, 19);
    VAR_15 = VAR_6;
   }
   break;

  case 129:
   VAR_17 = &VAR_9[VAR_16->pres_osr_index];
   VAR_18 = VAR_1 |
     VAR_17->osr_mask |
     VAR_2;
   VAR_15 = FUNC_0(VAR_10,
     VAR_18,
     VAR_4,
     VAR_17->pres_conv_time_us);
   if (VAR_15 >= 0) {
    *VAR_12 = VAR_15;
    VAR_15 = VAR_6;
   }
   break;
  default:
   VAR_15 = -VAR_0;
  }
  break;

 case 130:
  switch (VAR_11->type) {
  case 128:
   *VAR_12 = 0;
   *VAR_13 = 10000;
   VAR_15 = VAR_7;
   break;

  case 129:
   *VAR_12 = 0;
   *VAR_13 = 1000;
   VAR_15 = VAR_7;
   break;
  default:
   VAR_15 = -VAR_0;
  }
  break;

 default:
  VAR_15 = -VAR_0;
 }

 FUNC_3(&VAR_16->mutex);
 return VAR_15;
}
