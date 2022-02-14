
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_3;

 if (!VAR_2[VAR_0]) {
  for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++)
   VAR_2[(int) VAR_1[VAR_3]] = (1 << VAR_3);
 }
}
