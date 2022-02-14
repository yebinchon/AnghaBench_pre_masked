
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;





 int FUNC_0 () ;
 int FUNC_1 (int,int,int,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;

void FUNC_3(struct timespec64 *VAR_1)
{
 time64_t VAR_2;

 switch (VAR_0) {
 case 128:
  VAR_2 = FUNC_2();
  break;

 case 130:
  VAR_2 = FUNC_0();
  break;

 case 129:
 default:
  VAR_2 = FUNC_1(2000, 1, 1, 0, 0, 0);
  break;
 }
 VAR_1->tv_sec = VAR_2;
 VAR_1->tv_nsec = 0;
}
