
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int timestamp; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;
 scalar_t__ FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct iio_dev *VAR_3 = VAR_2;

 if (FUNC_0(VAR_3)) {

  ((struct zpa2326_private *)
   FUNC_2(VAR_3))->timestamp = FUNC_1(VAR_3);
 }

 return VAR_0;
}
