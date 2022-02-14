
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pa12203001_data {int map; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef int __le16 ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pa12203001_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 int* VAR_9 ;
 int FUNC_2 (struct pa12203001_data*,int,int ) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_10,
          struct iio_chan_spec const *VAR_11, int *VAR_12,
          int *VAR_13, long VAR_14)
{
 struct pa12203001_data *VAR_15 = FUNC_0(VAR_10);
 int VAR_16;
 u8 VAR_17;
 unsigned int VAR_18;
 __le16 VAR_19;

 switch (VAR_14) {
 case 131:
  switch (VAR_11->type) {
  case 129:
   VAR_17 = VAR_4;
   VAR_16 = FUNC_2(VAR_15, 1, VAR_17);
   if (VAR_16 < 0)
    return VAR_16;




   VAR_16 = FUNC_3(VAR_15->map, VAR_6,
            &VAR_19, 2);
   if (VAR_16 < 0)
    goto reg_err;

   *VAR_12 = FUNC_1(VAR_19);
   VAR_16 = FUNC_2(VAR_15, 0, VAR_17);
   if (VAR_16 < 0)
    return VAR_16;
   break;
  case 128:
   VAR_17 = VAR_5;
   VAR_16 = FUNC_2(VAR_15, 1, VAR_17);
   if (VAR_16 < 0)
    return VAR_16;
   VAR_16 = FUNC_4(VAR_15->map, VAR_8,
       &VAR_18);
   if (VAR_16 < 0)
    goto reg_err;

   *VAR_12 = VAR_18;
   VAR_16 = FUNC_2(VAR_15, 0, VAR_17);
   if (VAR_16 < 0)
    return VAR_16;
   break;
  default:
   return -VAR_0;
  }
  return VAR_1;
 case 130:
  VAR_16 = FUNC_4(VAR_15->map, VAR_7, &VAR_18);
  if (VAR_16 < 0)
   return VAR_16;
  *VAR_12 = 0;
  VAR_18 = (VAR_18 & VAR_3);
  *VAR_13 = VAR_9[VAR_18 >> 4];
  return VAR_2;
 default:
  return -VAR_0;
 }

reg_err:
 FUNC_2(VAR_15, 0, VAR_17);
 return VAR_16;
}
