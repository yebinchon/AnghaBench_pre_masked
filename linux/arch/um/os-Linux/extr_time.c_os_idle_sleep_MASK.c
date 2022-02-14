
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {unsigned long long tv_sec; unsigned long long tv_nsec; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct timespec*,int *) ;
 int FUNC_1 () ;

void FUNC_2(unsigned long long VAR_2)
{
 struct timespec VAR_3 = {
  .tv_sec = VAR_2 / VAR_1,
  .tv_nsec = VAR_2 % VAR_1
 };




 if (FUNC_0(VAR_0, 0, &VAR_3, ((void*)0)))
  FUNC_1();
}
