
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpr0521_data {int regmap; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct rpr0521_data *VAR_3,
    enum iio_chan_type VAR_4,
    int VAR_5, int VAR_6)
{
 int VAR_7;





 switch (VAR_5) {
 case 0:
  VAR_7 = 0;
  break;

 case 2:
  if (VAR_6 != 500000)
   return -VAR_0;

  VAR_7 = 11;
  break;

 case 10:
  VAR_7 = 6;
  break;

 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_3->regmap,
  VAR_2,
  VAR_1,
  VAR_7);
}
