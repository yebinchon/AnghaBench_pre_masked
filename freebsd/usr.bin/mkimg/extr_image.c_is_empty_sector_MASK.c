
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(void *VAR_1)
{
 uint64_t *VAR_2 = VAR_1;
 size_t VAR_3, VAR_4;

 FUNC_0(((uintptr_t)VAR_2 & 3) == 0);

 VAR_4 = VAR_0 / sizeof(uint64_t);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_2[VAR_3] != 0UL)
   return (0);
 }
 return (1);
}
