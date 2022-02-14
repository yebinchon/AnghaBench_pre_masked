
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {long long tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct timespec*) ;

__attribute__((used)) static uint64_t FUNC_2(void)
{
 struct timespec VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1);
 FUNC_0(!VAR_2);

 return (VAR_1.tv_sec * 1000000000LL + VAR_1.tv_nsec);
}
