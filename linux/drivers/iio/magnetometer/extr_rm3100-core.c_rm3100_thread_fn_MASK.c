
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rm3100_data {int regmap; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rm3100_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct iio_dev *VAR_4 = VAR_3;
 struct rm3100_data *VAR_5 = FUNC_0(VAR_4);





 FUNC_1(VAR_5->regmap, VAR_1, 0);

 return VAR_0;
}
