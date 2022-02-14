
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * VAR_2 ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int) ;

int32_t
FUNC_4(int32_t VAR_3, int VAR_4, int VAR_5)
{
 size_t VAR_6;
 int32_t VAR_7;

 FUNC_0(VAR_3 >= 0);

 VAR_7 = FUNC_2();
 if (!(VAR_7 & VAR_0))
  return (0);

 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_2); VAR_6++) {
  if (VAR_5 & (1 << VAR_6) &&
      FUNC_3(VAR_3, VAR_1, VAR_2[VAR_6],
     VAR_4 & (1 << VAR_6) ? 1 : 0) < 0)
   return (-1);
 }

 return (0);
}
