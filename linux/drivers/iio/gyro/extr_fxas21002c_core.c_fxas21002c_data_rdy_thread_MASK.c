
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct fxas21002c_data {int dready_trig; int * regmap_fields; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fxas21002c_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct iio_dev *VAR_5 = VAR_4;
 struct fxas21002c_data *VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6->regmap_fields[VAR_0], &VAR_7);
 if (VAR_8 < 0)
  return VAR_2;

 if (!VAR_7)
  return VAR_2;

 FUNC_1(VAR_6->dready_trig);

 return VAR_1;
}
