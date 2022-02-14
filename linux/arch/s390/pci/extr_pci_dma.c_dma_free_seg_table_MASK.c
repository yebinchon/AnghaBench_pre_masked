
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (int ) ;
 unsigned long* FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;

void FUNC_5(unsigned long VAR_1)
{
 unsigned long *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_4(VAR_2[VAR_3]))
   FUNC_1(FUNC_3(VAR_2[VAR_3]));

 FUNC_0(VAR_2);
}
