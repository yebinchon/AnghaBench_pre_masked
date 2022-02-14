
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct timespec64 {int tv_sec; } ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct timespec64 VAR_1)
{
 time64_t VAR_2 = VAR_1.tv_sec;

 switch (VAR_0) {
 case 128:
  return FUNC_1(VAR_2);

 case 130:
  return FUNC_0(VAR_2);

 case 129:
 default:
  return -1;
 }
}
