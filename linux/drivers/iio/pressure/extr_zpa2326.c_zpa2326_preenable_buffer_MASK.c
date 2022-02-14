
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {scalar_t__ waken; } ;
struct iio_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 < 0)
  return VAR_1;


 ((struct zpa2326_private *)
  FUNC_0(VAR_0))->waken = FUNC_0(VAR_0);

 return 0;
}
