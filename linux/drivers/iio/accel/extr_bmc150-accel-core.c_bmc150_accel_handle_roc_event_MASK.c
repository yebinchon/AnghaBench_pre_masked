
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmc150_accel_data {int timestamp; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct device*,char*) ;
 struct bmc150_accel_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_12)
{
 struct bmc150_accel_data *VAR_13 = FUNC_2(VAR_12);
 struct device *VAR_14 = FUNC_4(VAR_13->regmap);
 int VAR_15;
 int VAR_16;
 unsigned int VAR_17;

 VAR_16 = FUNC_5(VAR_13->regmap, VAR_4, &VAR_17);
 if (VAR_16 < 0) {
  FUNC_1(VAR_14, "Error reading reg_int_status_2\n");
  return VAR_16;
 }

 if (VAR_17 & VAR_0)
  VAR_15 = VAR_6;
 else
  VAR_15 = VAR_7;

 if (VAR_17 & VAR_1)
  FUNC_3(VAR_12,
          FUNC_0(VAR_5,
        0,
        VAR_9,
        VAR_8,
        VAR_15),
          VAR_13->timestamp);

 if (VAR_17 & VAR_2)
  FUNC_3(VAR_12,
          FUNC_0(VAR_5,
        0,
        VAR_10,
        VAR_8,
        VAR_15),
          VAR_13->timestamp);

 if (VAR_17 & VAR_3)
  FUNC_3(VAR_12,
          FUNC_0(VAR_5,
        0,
        VAR_11,
        VAR_8,
        VAR_15),
          VAR_13->timestamp);

 return VAR_16;
}
