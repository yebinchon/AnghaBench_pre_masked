
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iio_dev {int dummy; } ;
struct adis16460 {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int*) ;
 struct adis16460* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2, int *VAR_3, int *VAR_4)
{
 struct adis16460 *VAR_5 = FUNC_1(VAR_2);
 uint16_t VAR_6;
 int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(&VAR_5->adis, VAR_0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8 = 2048000 / (VAR_6 + 1);
 *VAR_3 = VAR_8 / 1000;
 *VAR_4 = (VAR_8 % 1000) * 1000;

 return VAR_1;
}
