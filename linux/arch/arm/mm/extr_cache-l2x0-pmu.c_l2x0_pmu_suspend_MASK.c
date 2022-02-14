
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

void FUNC_2(void)
{
 int VAR_4;

 if (!VAR_3)
  return;

 FUNC_0(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4])
   FUNC_1(VAR_2[VAR_4], VAR_0);
 }

}
