
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2772_chip {int tsl2772_chip_status; int als_mutex; int prox_mutex; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1)
{
 struct tsl2772_chip *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = VAR_2->tsl2772_chip_status;
 int VAR_4;

 FUNC_1(&VAR_2->als_mutex);
 FUNC_1(&VAR_2->prox_mutex);

 if (VAR_3 == VAR_0) {
  VAR_4 = FUNC_3(VAR_1);
  if (VAR_4 < 0)
   goto unlock;
 }

 VAR_4 = FUNC_4(VAR_1);

unlock:
 FUNC_2(&VAR_2->prox_mutex);
 FUNC_2(&VAR_2->als_mutex);

 return VAR_4;
}
