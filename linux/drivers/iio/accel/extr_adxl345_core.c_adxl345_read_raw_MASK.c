
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct adxl345_data {int regmap; int type; } ;
typedef int accel ;
typedef int __le16 ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (long long,int ,int*) ;
 struct adxl345_data* FUNC_3 (struct iio_dev*) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_10,
       struct iio_chan_spec const *VAR_11,
       int *VAR_12, int *VAR_13, long VAR_14)
{
 struct adxl345_data *VAR_15 = FUNC_3(VAR_10);
 __le16 VAR_16;
 long long VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 switch (VAR_14) {
 case 130:





  VAR_19 = FUNC_5(VAR_15->regmap,
           FUNC_0(VAR_11->address),
           &VAR_16, sizeof(VAR_16));
  if (VAR_19 < 0)
   return VAR_19;

  *VAR_12 = FUNC_7(FUNC_4(VAR_16), 12);
  return VAR_4;
 case 128:
  *VAR_12 = 0;
  switch (VAR_15->type) {
  case 133:
   *VAR_13 = VAR_8;
   break;
  case 132:
   *VAR_13 = VAR_9;
   break;
  }

  return VAR_5;
 case 131:
  VAR_19 = FUNC_6(VAR_15->regmap,
      FUNC_1(VAR_11->address), &VAR_18);
  if (VAR_19 < 0)
   return VAR_19;




  *VAR_12 = FUNC_7(VAR_18, 7) * 4;

  return VAR_4;
 case 129:
  VAR_19 = FUNC_6(VAR_15->regmap, VAR_2, &VAR_18);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_17 = VAR_0 <<
    (VAR_18 & VAR_1);
  *VAR_12 = FUNC_2(VAR_17, VAR_7, VAR_13);

  return VAR_6;
 }

 return -VAR_3;
}
