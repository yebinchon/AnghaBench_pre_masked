
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;



__attribute__((used)) static in_addr_t
FUNC_0(in_addr_t **VAR_0, in_addr_t VAR_1, in_addr_t VAR_2)
{

 for (; *VAR_0; ++VAR_0)
  if ((**VAR_0 & VAR_2) == VAR_1)
   return **VAR_0;
 return 0;
}
