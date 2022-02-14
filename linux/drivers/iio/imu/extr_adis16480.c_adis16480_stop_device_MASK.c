
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;
struct adis16480 {int adis; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct adis16480* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1)
{
 struct adis16480 *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->adis, VAR_0, FUNC_0(9));
 if (VAR_3)
  FUNC_2(&VAR_1->dev,
   "Could not power down device: %d\n", VAR_3);

 return VAR_3;
}
