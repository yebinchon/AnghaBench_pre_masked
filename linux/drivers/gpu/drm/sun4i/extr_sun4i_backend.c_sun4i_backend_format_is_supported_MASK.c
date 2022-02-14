
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

bool FUNC_1(uint32_t VAR_2, uint64_t VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3 != VAR_0)
  return 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  if (VAR_1[VAR_4] == VAR_2)
   return 1;

 return 0;
}
