
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(uint32_t VAR_2)
{
 int VAR_3;

 if (VAR_2 == VAR_0)
  return;

 VAR_3 = VAR_2 >> 22;
 VAR_1[VAR_3 / 32] &= ~(1 << VAR_3 % 32);
}
