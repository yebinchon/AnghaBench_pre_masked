
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct hts221_hw {int regmap; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hts221_hw* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_2, bool VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_2(VAR_2);
 struct hts221_hw *VAR_5 = FUNC_1(VAR_4);

 return FUNC_3(VAR_5->regmap, VAR_0,
      VAR_1,
      FUNC_0(VAR_1, VAR_3));
}
