
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_trigger {int dummy; } ;
struct iio_dev {int modes; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct iio_trigger *VAR_2,
           struct iio_dev *VAR_3)
{
 if (VAR_3->modes & VAR_1)
  return 0;

 return -VAR_0;
}
