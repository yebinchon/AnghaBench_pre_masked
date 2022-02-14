
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;



__attribute__((used)) static bool FUNC_0(u64 **VAR_0, u64 VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_0[VAR_1 + VAR_3])
   return 0;

 return 1;
}
