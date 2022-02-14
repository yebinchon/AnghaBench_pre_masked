
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;
struct adis16136 {int adis; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,char*,int) ;
 struct adis16136* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1)
{
 struct adis16136 *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->adis, VAR_0, 0xff);
 if (VAR_3)
  FUNC_1(&VAR_1->dev,
   "Could not power down device: %d\n", VAR_3);

 return VAR_3;
}
