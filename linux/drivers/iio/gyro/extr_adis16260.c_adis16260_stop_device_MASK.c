
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dev; } ;
struct adis16260 {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct adis16260* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2)
{
 struct adis16260 *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;
 u16 VAR_5 = VAR_1;

 VAR_4 = FUNC_0(&VAR_3->adis, VAR_0, VAR_5);
 if (VAR_4)
  FUNC_1(&VAR_2->dev, "problem with turning device off: SLP_CNT");

 return VAR_4;
}
