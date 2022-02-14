
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ channel; int address; } ;
struct da9150_gpadc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (scalar_t__,int*) ;
 int FUNC_1 (struct da9150_gpadc*,scalar_t__,int ,int*) ;
 int FUNC_2 (scalar_t__,int*,int*) ;
 struct da9150_gpadc* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4,
     int *VAR_5, int *VAR_6, long VAR_7)
{
 struct da9150_gpadc *VAR_8 = FUNC_3(VAR_3);

 if ((VAR_4->channel < VAR_0) ||
     (VAR_4->channel > VAR_1))
  return -VAR_2;

 switch (VAR_7) {
 case 129:
 case 130:
  return FUNC_1(VAR_8, VAR_4->channel,
         VAR_4->address, VAR_5);
 case 128:
  return FUNC_2(VAR_4->channel, VAR_5, VAR_6);
 case 131:
  return FUNC_0(VAR_4->channel, VAR_5);
 default:
  return -VAR_2;
 }
}
