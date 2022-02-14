
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct adis16136 {int adis; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*) ;
 unsigned int* VAR_1 ;
 int FUNC_1 (struct adis16136*,unsigned int*) ;
 int FUNC_2 (int *,int ,int) ;
 struct adis16136* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2, int VAR_3)
{
 struct adis16136 *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_6 = FUNC_0(VAR_1) - 1; VAR_6 >= 1; VAR_6--) {
  if (VAR_5 / VAR_1[VAR_6] >= VAR_3)
   break;
 }

 return FUNC_2(&VAR_4->adis, VAR_0, VAR_6);
}
