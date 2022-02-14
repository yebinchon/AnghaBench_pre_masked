
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iio_dev {int mlock; } ;
struct adis16136 {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 int FUNC_0 (struct adis16136*,unsigned int*) ;
 int FUNC_1 (int *,int ,int*) ;
 struct adis16136* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3, int *VAR_4)
{
 struct adis16136 *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 FUNC_3(&VAR_3->mlock);

 VAR_8 = FUNC_1(&VAR_5->adis, VAR_0, &VAR_7);
 if (VAR_8 < 0)
  goto err_unlock;

 VAR_8 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_8 < 0)
  goto err_unlock;

 *VAR_4 = VAR_6 / VAR_2[VAR_7 & 0x07];

err_unlock:
 FUNC_4(&VAR_3->mlock);

 return VAR_8 ? VAR_8 : VAR_1;
}
