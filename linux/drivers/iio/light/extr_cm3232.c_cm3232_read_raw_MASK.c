
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm3232_chip {struct cm3232_als_info* als_info; } ;
struct cm3232_als_info {int calibscale; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct cm3232_chip*) ;
 int FUNC_1 (struct cm3232_chip*,int*,int*) ;
 struct cm3232_chip* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
   struct iio_chan_spec const *VAR_3,
   int *VAR_4, int *VAR_5, long VAR_6)
{
 struct cm3232_chip *VAR_7 = FUNC_2(VAR_2);
 struct cm3232_als_info *VAR_8 = VAR_7->als_info;
 int VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_9 = FUNC_0(VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
  *VAR_4 = VAR_9;
  return VAR_1;
 case 130:
  *VAR_4 = VAR_8->calibscale;
  return VAR_1;
 case 129:
  return FUNC_1(VAR_7, VAR_4, VAR_5);
 }

 return -VAR_0;
}
