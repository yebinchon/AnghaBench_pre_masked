
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u16 ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static u8 FUNC_1(u16 VAR_1)
{
 size_t VAR_2;
 u8 VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 == 0)
  return 0;


 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_0[VAR_2] <= VAR_1)
   return VAR_2;
 }

 return VAR_3 - 1;
}
