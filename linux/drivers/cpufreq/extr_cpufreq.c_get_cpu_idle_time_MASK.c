
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;


 unsigned long long FUNC_0 (unsigned int,unsigned long long*) ;
 unsigned long long FUNC_1 (unsigned int,unsigned long long*) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long long*) ;

u64 FUNC_3(unsigned int VAR_0, u64 *VAR_1, int VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_0, VAR_2 ? VAR_1 : ((void*)0));

 if (VAR_3 == -1ULL)
  return FUNC_0(VAR_0, VAR_1);
 else if (!VAR_2)
  VAR_3 += FUNC_2(VAR_0, VAR_1);

 return VAR_3;
}
