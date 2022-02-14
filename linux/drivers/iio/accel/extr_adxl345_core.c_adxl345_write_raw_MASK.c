
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct adxl345_data {int regmap; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int ) ;
 struct adxl345_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int VAR_7, int VAR_8, long VAR_9)
{
 struct adxl345_data *VAR_10 = FUNC_3(VAR_5);
 s64 VAR_11;

 switch (VAR_9) {
 case 129:




  return FUNC_6(VAR_10->regmap,
        FUNC_0(VAR_6->address),
        VAR_7 / 4);
 case 128:
  VAR_11 = FUNC_2(VAR_7 * VAR_4 + VAR_8, VAR_0);

  return FUNC_5(VAR_10->regmap, VAR_2,
       VAR_1,
       FUNC_1(FUNC_4(VAR_11), 0,
          VAR_1));
 }

 return -VAR_3;
}
