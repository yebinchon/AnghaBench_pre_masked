
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct ina2xx_chip_info {int allow_async_readout; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (struct ina2xx_chip_info*) ;
 int FUNC_1 (int ,int) ;
 struct ina2xx_chip_info* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct timespec64*) ;
 int FUNC_7 (struct timespec64*,int) ;
 struct timespec64 FUNC_8 (struct timespec64,struct timespec64) ;
 int FUNC_9 (struct timespec64*) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(void *VAR_0)
{
 struct iio_dev *VAR_1 = VAR_0;
 struct ina2xx_chip_info *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_0(VAR_2);
 int VAR_4;
 struct timespec64 VAR_5, VAR_6, VAR_7;
 s64 VAR_8;





 if (!VAR_2->allow_async_readout)
  VAR_3 -= 200;

 FUNC_6(&VAR_5);

 do {
  while (!VAR_2->allow_async_readout) {
   VAR_4 = FUNC_3(VAR_1);
   if (VAR_4 < 0)
    return VAR_4;





   if (VAR_4 == 0)
    FUNC_6(&VAR_5);
   else
    break;
  }

  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4 < 0)
   return VAR_4;

  FUNC_6(&VAR_6);







  do {
   FUNC_7(&VAR_5, 1000 * VAR_3);
   VAR_7 = FUNC_8(VAR_5, VAR_6);
   VAR_8 = FUNC_1(FUNC_9(&VAR_7), 1000);
  } while (VAR_8 <= 0);

  FUNC_10(VAR_8, (VAR_8 * 3) >> 1);

 } while (!FUNC_5());

 return 0;
}
