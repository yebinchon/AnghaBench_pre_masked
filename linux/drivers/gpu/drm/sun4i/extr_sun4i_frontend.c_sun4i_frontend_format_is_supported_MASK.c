
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_2 ;

bool FUNC_2(uint32_t VAR_3, uint64_t VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4 == VAR_0)
  return FUNC_1(VAR_3);
 else if (VAR_4 != VAR_1)
  return 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (VAR_2[VAR_5] == VAR_3)
   return 1;

 return 0;
}
