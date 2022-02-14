
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rescale {int numerator; int denominator; int source; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (unsigned long long,long long) ;
 struct rescale* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
       struct iio_chan_spec const *VAR_3,
       int *VAR_4, int *VAR_5, long VAR_6)
{
 struct rescale *VAR_7 = FUNC_1(VAR_2);
 unsigned long long VAR_8;
 int VAR_9;

 switch (VAR_6) {
 case 132:
  return FUNC_2(VAR_7->source, VAR_4);

 case 131:
  VAR_9 = FUNC_3(VAR_7->source, VAR_4, VAR_5);
  switch (VAR_9) {
  case 130:
   *VAR_4 *= VAR_7->numerator;
   *VAR_5 *= VAR_7->denominator;
   return VAR_9;
  case 128:
   *VAR_4 *= VAR_7->numerator;
   if (VAR_7->denominator == 1)
    return VAR_9;
   *VAR_5 = VAR_7->denominator;
   return 130;
  case 129:
   VAR_8 = *VAR_4 * 1000000000LL;
   FUNC_0(VAR_8, VAR_7->denominator);
   VAR_8 *= VAR_7->numerator;
   FUNC_0(VAR_8, 1000000000LL);
   *VAR_4 = VAR_8;
   return VAR_9;
  default:
   return -VAR_1;
  }
 default:
  return -VAR_0;
 }
}
