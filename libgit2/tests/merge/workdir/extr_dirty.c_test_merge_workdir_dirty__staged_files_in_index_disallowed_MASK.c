
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char*** VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char**) ;
 char*** VAR_1 ;

void FUNC_2(void)
{
 char **VAR_2;
 size_t VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_1[VAR_3]; VAR_2[0]; VAR_2 = VAR_1[++VAR_3])
  FUNC_0(FUNC_1(VAR_2));

 for (VAR_3 = 0, VAR_2 = VAR_0[VAR_3]; VAR_2[0]; VAR_2 = VAR_0[++VAR_3])
  FUNC_0(FUNC_1(VAR_2));
}
