
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int mlock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iio_dev *VAR_1)
{
 FUNC_1(&VAR_1->mlock);

 if (FUNC_0(VAR_1)) {
  FUNC_2(&VAR_1->mlock);
  return -VAR_0;
 }
 return 0;
}
