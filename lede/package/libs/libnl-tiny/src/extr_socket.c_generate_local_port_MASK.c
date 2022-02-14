
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int* VAR_1 ;

__attribute__((used)) static uint32_t FUNC_1(void)
{
 int VAR_2, VAR_3;
 uint32_t VAR_4 = FUNC_0() & 0x3FFFFF;

 for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
  if (VAR_1[VAR_2] == 0xFFFFFFFF)
   continue;

  for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
   if (1UL & (VAR_1[VAR_2] >> VAR_3))
    continue;

   VAR_1[VAR_2] |= (1UL << VAR_3);
   VAR_3 += (VAR_2 * 32);



   return VAR_4 + (VAR_3 << 22);

  }
 }


 return VAR_0;
}
