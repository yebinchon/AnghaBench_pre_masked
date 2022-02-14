
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm3232_chip {struct cm3232_als_info* als_info; } ;
struct cm3232_als_info {int calibscale; } ;


 int VAR_0 ;


 int FUNC_0 (struct cm3232_chip*,int,int) ;
 struct cm3232_chip* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
   struct iio_chan_spec const *VAR_2,
   int VAR_3, int VAR_4, long VAR_5)
{
 struct cm3232_chip *VAR_6 = FUNC_1(VAR_1);
 struct cm3232_als_info *VAR_7 = VAR_6->als_info;

 switch (VAR_5) {
 case 129:
  VAR_7->calibscale = VAR_3;
  return 0;
 case 128:
  return FUNC_0(VAR_6, VAR_3, VAR_4);
 }

 return -VAR_0;
}
