
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si1133_data {int regmap; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,unsigned int) ;
 struct si1133_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5)
{
 struct si1133_data *VAR_6 = FUNC_2(VAR_5);

 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_6->regmap, VAR_3, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_6->regmap, VAR_4, &VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_6->regmap, VAR_2, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_1(&VAR_5->dev,
   "Device ID part %#02hhx rev %#02hhx mfr %#02hhx\n",
   VAR_7, VAR_8, VAR_9);
 if (VAR_7 != VAR_1) {
  FUNC_0(&VAR_5->dev,
   "Part ID mismatch got %#02hhx, expected %#02x\n",
   VAR_7, VAR_1);
  return -VAR_0;
 }

 return 0;
}
