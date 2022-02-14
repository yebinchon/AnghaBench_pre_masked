
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(u_int32_t VAR_1, int VAR_2)
{
 int VAR_3;
 u_int32_t *VAR_4;

 VAR_4 = (u_int32_t *)FUNC_0(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4)
  if (VAR_4[VAR_3] == VAR_0)

   return (VAR_1 + (VAR_3 * sizeof(u_int32_t)));
 return (-1);
}
