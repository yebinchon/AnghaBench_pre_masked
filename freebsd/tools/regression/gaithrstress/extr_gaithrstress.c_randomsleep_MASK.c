
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {double tv_nsec; int tv_sec; int member_1; int member_0; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct timespec*,int *) ;

__attribute__((used)) static void
FUNC_2(double VAR_0)
{
 struct timespec VAR_1 = { 0, 0 };
 double VAR_2;

 VAR_2 = (double)FUNC_0() / 4294967296.0 * VAR_0;
 while (VAR_2 >= 1.0) {
  VAR_1.tv_sec++;
  VAR_2 -= 1.0;
 }
 VAR_1.tv_nsec = VAR_2 * 1e9;
 (void)FUNC_1(&VAR_1, ((void*)0));
}
