
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (unsigned long long,int) ;
 unsigned long long* VAR_0 ;

__attribute__((used)) static unsigned long long FUNC_1(unsigned long long VAR_1)
{
 unsigned long long VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = VAR_0[(VAR_1 >> 10) & 0x7];

 return FUNC_0((VAR_1 & 0x3FF) * VAR_2, 1000);
}
