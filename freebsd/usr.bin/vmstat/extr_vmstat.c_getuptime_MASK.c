
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {long long tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;

__attribute__((used)) static long long
FUNC_1(void)
{
 struct timespec VAR_1;

 (void)FUNC_0(VAR_0, &VAR_1);
 return((long long)VAR_1.tv_sec * 1000000000LL + VAR_1.tv_nsec);
}
