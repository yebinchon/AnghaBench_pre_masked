
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int * FUNC_1 (char*,char*) ;
 char* VAR_1 ;
 int FUNC_2 (char*,int,char*,char*) ;

FILE *
FUNC_3(void)
{
 FILE *VAR_2;
 char VAR_3[VAR_0];

 FUNC_2(VAR_3, sizeof(VAR_3), "../../conf/Makefile.%s", VAR_1);
 VAR_2 = FUNC_1(VAR_3, "r");
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_3, sizeof(VAR_3), "Makefile.%s", VAR_1);
  VAR_2 = FUNC_1(VAR_3, "r");
 }
 if (VAR_2 == ((void*)0))
  FUNC_0(1, "%s", VAR_3);
 return (VAR_2);
}
