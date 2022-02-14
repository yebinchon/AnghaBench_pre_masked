
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct adis16460 {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct adis16460* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct adis16460 *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 VAR_6 = VAR_3 * 1000 + VAR_4 / 1000;
 if (VAR_6 <= 0)
  return -VAR_1;

 VAR_6 = 2048000 / VAR_6;
 if (VAR_6 > 2048)
  VAR_6 = 2048;

 if (VAR_6 != 0)
  VAR_6--;

 return FUNC_0(&VAR_5->adis, VAR_0, VAR_6);
}
