
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;
typedef enum iio_chan_info_enum { ____Placeholder_iio_chan_info_enum } iio_chan_info_enum ;


 int VAR_0 ;



 int FUNC_0 (struct iio_channel*,int const**,int*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct iio_channel *VAR_1,
    int *VAR_2, int *VAR_3, int *VAR_4,
    enum iio_chan_info_enum VAR_5)
{
 int VAR_6;
 const int *VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_3)
  VAR_3 = &VAR_6;

 VAR_9 = FUNC_0(VAR_1, &VAR_7, VAR_4, &VAR_8, VAR_5);
 switch (VAR_9) {
 case 129:
  switch (*VAR_4) {
  case 128:
   *VAR_2 = VAR_7[2];
   break;
  default:
   *VAR_2 = VAR_7[4];
   *VAR_3 = VAR_7[5];
  }
  return 0;

 case 130:
  if (VAR_8 <= 0)
   return -VAR_0;
  switch (*VAR_4) {
  case 128:
   *VAR_2 = VAR_7[--VAR_8];
   while (VAR_8) {
    if (VAR_7[--VAR_8] > *VAR_2)
     *VAR_2 = VAR_7[VAR_8];
   }
   break;
  default:

   return -VAR_0;
  }
  return 0;

 default:
  return VAR_9;
 }
}
