
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u16 ;



__attribute__((used)) static bool FUNC_0(u16 VAR_0, const u16 *VAR_1, unsigned int VAR_2)
{
 for (; VAR_2; VAR_2--, VAR_1++) {
  if (*VAR_1 == VAR_0)
   return 1;
 }

 return 0;
}
