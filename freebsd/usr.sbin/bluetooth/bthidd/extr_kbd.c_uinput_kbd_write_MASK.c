
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;
typedef int bitstr_t ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(bitstr_t *VAR_1, int32_t VAR_2, int32_t VAR_3, int32_t VAR_4)
{
 int32_t VAR_5;

 if (VAR_4 >= 0) {
  for (VAR_5 = VAR_2; VAR_5 < VAR_0; VAR_5++) {
   if (FUNC_0(VAR_1, VAR_5))
    FUNC_1(VAR_4, VAR_5, VAR_3);
  }
 }
}
