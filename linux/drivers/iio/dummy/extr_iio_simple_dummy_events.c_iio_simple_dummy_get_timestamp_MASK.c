
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dummy_state {int event_timestamp; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct iio_dummy_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;
 struct iio_dummy_state *VAR_4 = FUNC_1(VAR_3);

 VAR_4->event_timestamp = FUNC_0(VAR_3);
 return VAR_0;
}
