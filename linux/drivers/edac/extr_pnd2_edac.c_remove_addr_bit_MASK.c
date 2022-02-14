
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, int VAR_1)
{
 u64 VAR_2;

 if (VAR_1 == -1)
  return;

 VAR_2 = (1ull << VAR_1) - 1;
 *VAR_0 = ((*VAR_0 >> 1) & ~VAR_2) | (*VAR_0 & VAR_2);
}
