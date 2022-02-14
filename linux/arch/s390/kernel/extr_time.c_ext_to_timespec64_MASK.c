
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {unsigned long long tv_sec; unsigned long long tv_nsec; } ;


 unsigned long long FUNC_0 (unsigned long long,int) ;

__attribute__((used)) static void FUNC_1(unsigned char *VAR_0, struct timespec64 *VAR_1)
{
 unsigned long long VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;


 VAR_2 = (*(unsigned long long *) VAR_0) >> 4;
 VAR_3 = (*(unsigned long long *)&VAR_0[7]) << 4;

 VAR_5 = VAR_2;
 VAR_4 = FUNC_0(VAR_5, 1000000);
 VAR_6 = (((VAR_3 >> 32) + (VAR_4 << 32)) * 1000) >> 32;

 VAR_1->tv_sec = VAR_5;
 VAR_1->tv_nsec = VAR_6;
}
