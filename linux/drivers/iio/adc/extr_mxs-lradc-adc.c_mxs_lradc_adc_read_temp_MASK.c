
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_1, 8, &VAR_4);
 if (VAR_3 != VAR_0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1, 9, &VAR_5);
 if (VAR_3 != VAR_0)
  return VAR_3;

 *VAR_2 = VAR_5 - VAR_4;

 return VAR_0;
}
