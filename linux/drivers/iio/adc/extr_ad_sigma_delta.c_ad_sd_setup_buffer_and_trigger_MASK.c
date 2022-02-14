
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int *,int *) ;

int FUNC_3(struct iio_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, &VAR_2,
   &VAR_1, &VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_3);
  return VAR_4;
 }

 return 0;
}
