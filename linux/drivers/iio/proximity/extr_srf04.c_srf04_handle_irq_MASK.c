
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srf04_data {int falling; void* ts_falling; int rising; void* ts_rising; int gpiod_echo; } ;
struct iio_dev {int dummy; } ;
typedef void* ktime_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 struct srf04_data* FUNC_2 (struct iio_dev*) ;
 void* FUNC_3 () ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct srf04_data *VAR_4 = FUNC_2(VAR_3);
 ktime_t VAR_5 = FUNC_3();

 if (FUNC_1(VAR_4->gpiod_echo)) {
  VAR_4->ts_rising = VAR_5;
  FUNC_0(&VAR_4->rising);
 } else {
  VAR_4->ts_falling = VAR_5;
  FUNC_0(&VAR_4->falling);
 }

 return VAR_0;
}
