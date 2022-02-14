
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1(char *VAR_5, int VAR_6)
{
 int VAR_7;
 char *VAR_8 = VAR_5;

 while (*VAR_8)
  VAR_8++;
 VAR_7 = (VAR_3 & VAR_0 ? 1 : VAR_2[VAR_6] - (VAR_8 - VAR_5));
 if (VAR_3 & VAR_1)
  while (VAR_7-- > 0)
   FUNC_0(VAR_4);
 for (VAR_8 = VAR_5; *VAR_8; VAR_8++)
  FUNC_0(*VAR_8);
 while (VAR_7-- > 0)
  FUNC_0(VAR_4);
}
