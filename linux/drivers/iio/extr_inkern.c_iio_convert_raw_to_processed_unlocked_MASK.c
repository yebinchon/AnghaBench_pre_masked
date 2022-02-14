
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int,int) ;
 int FUNC_1 (struct iio_channel*,int*,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_channel *VAR_3,
 int VAR_4, int *VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 s64 VAR_11 = VAR_4;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_3, &VAR_10, ((void*)0), VAR_1);
 if (VAR_12 >= 0)
  VAR_11 += VAR_10;

 VAR_7 = FUNC_1(VAR_3, &VAR_8, &VAR_9,
     VAR_2);
 if (VAR_7 < 0) {




  *VAR_5 = VAR_4;
  return 0;
 }

 switch (VAR_7) {
 case 130:
  *VAR_5 = VAR_11 * VAR_8;
  break;
 case 129:
  if (VAR_9 < 0)
   *VAR_5 = -VAR_11 * VAR_8;
  else
   *VAR_5 = VAR_11 * VAR_8;
  *VAR_5 += FUNC_0(VAR_11 * (s64)VAR_9 * VAR_6,
          1000000LL);
  break;
 case 128:
  if (VAR_9 < 0)
   *VAR_5 = -VAR_11 * VAR_8;
  else
   *VAR_5 = VAR_11 * VAR_8;
  *VAR_5 += FUNC_0(VAR_11 * (s64)VAR_9 * VAR_6,
          1000000000LL);
  break;
 case 132:
  *VAR_5 = FUNC_0(VAR_11 * (s64)VAR_8 * VAR_6,
         VAR_9);
  break;
 case 131:
  *VAR_5 = (VAR_11 * (s64)VAR_8 * VAR_6) >> VAR_9;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
