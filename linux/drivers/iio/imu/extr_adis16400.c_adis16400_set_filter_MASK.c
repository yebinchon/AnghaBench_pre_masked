
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iio_dev {int dummy; } ;
struct adis16400_state {int adis; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* VAR_1 ;
 int FUNC_1 (int *,int ,int*) ;
 int FUNC_2 (int *,int ,int) ;
 struct adis16400_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct adis16400_state *VAR_5 = FUNC_3(VAR_2);
 uint16_t VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = FUNC_0(VAR_1) - 1; VAR_7 >= 1; VAR_7--) {
  if (VAR_3 / VAR_1[VAR_7] >= VAR_4)
   break;
 }

 VAR_8 = FUNC_1(&VAR_5->adis, VAR_0, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(&VAR_5->adis, VAR_0,
      (VAR_6 & ~0x07) | VAR_7);
 return VAR_8;
}
