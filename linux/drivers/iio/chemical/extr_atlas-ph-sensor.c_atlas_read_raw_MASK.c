
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;
struct atlas_data {int regmap; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (struct atlas_data*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct atlas_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4,
     struct iio_chan_spec const *VAR_5,
     int *VAR_6, int *VAR_7, long VAR_8)
{
 struct atlas_data *VAR_9 = FUNC_4(VAR_4);

 switch (VAR_8) {
 case 134: {
  int VAR_10;
  __be32 VAR_11;

  switch (VAR_5->type) {
  case 129:
   VAR_10 = FUNC_5(VAR_9->regmap, VAR_5->address,
           (u8 *) &VAR_11, sizeof(VAR_11));
   break;
  case 130:
  case 132:
  case 131:
  case 128:
   VAR_10 = FUNC_2(VAR_4);
   if (VAR_10)
    return VAR_10;

   VAR_10 = FUNC_0(VAR_9, VAR_5->address, &VAR_11);

   FUNC_3(VAR_4);
   break;
  default:
   VAR_10 = -VAR_0;
  }

  if (!VAR_10) {
   *VAR_6 = FUNC_1(VAR_11);
   VAR_10 = VAR_2;
  }
  return VAR_10;
 }
 case 133:
  switch (VAR_5->type) {
  case 129:
   *VAR_6 = 10;
   return VAR_2;
  case 130:
   *VAR_6 = 1;
   *VAR_7 = 1000;
   break;
  case 131:
   *VAR_6 = 1;
   *VAR_7 = 100000;
   break;
  case 132:
   *VAR_6 = 0;
   *VAR_7 = 1000;
   return VAR_3;
  case 128:
   *VAR_6 = 1;
   *VAR_7 = 10;
   break;
  default:
   return -VAR_0;
  }
  return VAR_1;
 }

 return -VAR_0;
}
