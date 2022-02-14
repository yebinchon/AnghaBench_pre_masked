
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct iio_dev {int dummy; } ;
typedef int s64 ;


 int FUNC_0 () ;







 int FUNC_1 (struct iio_dev const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct timespec64*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct timespec64*) ;

s64 FUNC_11(const struct iio_dev *VAR_0)
{
 struct timespec64 VAR_1;

 switch (FUNC_1(VAR_0)) {
 case 130:
  return FUNC_8();
 case 133:
  return FUNC_6();
 case 131:
  return FUNC_7();
 case 129:
  return FUNC_9(FUNC_4());
 case 132:
  FUNC_5(&VAR_1);
  return FUNC_10(&VAR_1);
 case 134:
  return FUNC_2();
 case 128:
  return FUNC_3();
 default:
  FUNC_0();
 }
}
