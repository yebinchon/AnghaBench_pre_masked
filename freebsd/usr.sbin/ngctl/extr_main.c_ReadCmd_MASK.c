
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, char **VAR_3)
{
 FILE *VAR_4;
 int VAR_5;


 switch (VAR_2) {
 case 2:
  if ((VAR_4 = FUNC_2(VAR_3[1], "r")) == ((void*)0)) {
   FUNC_3("%s", VAR_3[1]);
   return (VAR_0);
  }
  break;
 default:
  return (VAR_1);
 }


 VAR_5 = FUNC_0(VAR_4);
 FUNC_1(VAR_4);
 return (VAR_5);
}
