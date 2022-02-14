
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (unsigned long long,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned long long FUNC_2 (scalar_t__*) ;

__attribute__((used)) static u64 FUNC_3(u64 *VAR_0, u32 *VAR_1)
{
 u64 VAR_2 = FUNC_1(VAR_1);

 return (VAR_2 == 0) ? 0 :
  FUNC_0(FUNC_2(VAR_0) * 1000000ULL, VAR_2);
}
