
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(unsigned long VAR_0, unsigned long VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  if ((VAR_0 >> (VAR_2 * 2)) <= VAR_1)
   return VAR_2;

 return 5;
}
