
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__,scalar_t__) ;

int32_t
FUNC_4(int32_t VAR_6, int32_t VAR_7, int32_t VAR_8)
{
 int32_t VAR_9;

 FUNC_0(VAR_6 >= 0);

 VAR_9 = FUNC_2();
 if (!(VAR_9 & VAR_0))
  return (0);

 if (VAR_7 >= 0 && VAR_7 < (int32_t)FUNC_1(VAR_5) &&
     VAR_5[VAR_7] != VAR_3) {
  if (FUNC_3(VAR_6, VAR_1, VAR_5[VAR_7], VAR_8) > 0 &&
      FUNC_3(VAR_6, VAR_2, VAR_4, 0) > 0)
   return (0);
 }
 return (-1);
}
