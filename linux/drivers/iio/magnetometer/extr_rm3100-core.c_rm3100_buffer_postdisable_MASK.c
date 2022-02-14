
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm3100_data {int regmap; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct rm3100_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1)
{
 struct rm3100_data *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2->regmap, VAR_0, 0);
}
