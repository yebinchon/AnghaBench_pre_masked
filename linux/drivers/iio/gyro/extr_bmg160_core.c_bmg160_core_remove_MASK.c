
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmg160_data {int mutex; scalar_t__ motion_trig; scalar_t__ dready_trig; } ;


 int VAR_0 ;
 int FUNC_0 (struct bmg160_data*,int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct bmg160_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;

void FUNC_11(struct device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_1);
 struct bmg160_data *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 FUNC_8(VAR_1);
 FUNC_10(VAR_1);
 FUNC_9(VAR_1);

 FUNC_5(VAR_2);

 if (VAR_3->dready_trig) {
  FUNC_4(VAR_3->dready_trig);
  FUNC_4(VAR_3->motion_trig);
 }

 FUNC_6(&VAR_3->mutex);
 FUNC_0(VAR_3, VAR_0);
 FUNC_7(&VAR_3->mutex);
}
