
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct gp2ap020a00f_data {int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct gp2ap020a00f_data*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct gp2ap020a00f_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct iio_dev *VAR_10 = VAR_9;
 struct gp2ap020a00f_data *VAR_11 = FUNC_3(VAR_10);
 unsigned int VAR_12;
 int VAR_13;


 VAR_13 = FUNC_5(VAR_11->regmap, VAR_0, &VAR_12);
 if (VAR_13 < 0)
  return VAR_7;

 if (FUNC_1(VAR_11)) {
  if (VAR_12 & VAR_1) {
   FUNC_4(VAR_10,
          FUNC_0(
        VAR_6,
        VAR_2,
        VAR_5,
        VAR_4),
          FUNC_2(VAR_10));
  } else {
   FUNC_4(VAR_10,
          FUNC_0(
        VAR_6,
        VAR_2,
        VAR_5,
        VAR_3),
          FUNC_2(VAR_10));
  }
 }

 return VAR_7;
}
