
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int,char*) ;
 long FUNC_1 (char*,char**,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;

void
FUNC_4(int VAR_1, char *VAR_2[])
{
 char VAR_3[VAR_0];
 long VAR_4;
 int VAR_5, VAR_6;
 char *VAR_7;

 if (VAR_1 != 1)
  FUNC_2();

 VAR_4 = FUNC_1(VAR_2[0], &VAR_7, 10);
 if (*VAR_7 != '\0')
  FUNC_2();

 if ((long) VAR_4 != (int) VAR_4 || VAR_4 < 0)
  FUNC_2();

 VAR_6 = VAR_4;

 VAR_5 = FUNC_0(VAR_6, VAR_0, VAR_3);
 if (VAR_5)
  FUNC_3("%s", VAR_3);
}
