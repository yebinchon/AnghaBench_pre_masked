
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcnl4035_data {int regmap; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vcnl4035_data* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct iio_trigger *VAR_4,
     bool VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_1(VAR_4);
 struct vcnl4035_data *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = VAR_5 ? VAR_2 :
     VAR_1;

 return FUNC_2(VAR_7->regmap, VAR_0,
     VAR_3,
     VAR_8);
}
