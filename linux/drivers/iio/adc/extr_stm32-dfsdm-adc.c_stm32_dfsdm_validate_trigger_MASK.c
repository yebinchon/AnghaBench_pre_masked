
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_dev*,struct iio_trigger*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
     struct iio_trigger *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2) < 0 ? -VAR_0 : 0;
}
