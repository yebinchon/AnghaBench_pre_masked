
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dev; } ;
struct adis16400_state {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct adis16400_state* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2)
{
 struct adis16400_state *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->adis, VAR_0,
   VAR_1);
 if (VAR_4)
  FUNC_1(&VAR_2->dev,
   "problem with turning device off: SLP_CNT");

 return VAR_4;
}
