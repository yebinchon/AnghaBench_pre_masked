
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(u_long VAR_0)
{
 char *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != ((void*)0) && *VAR_1 == '\0') {
  FUNC_2(VAR_1);
  VAR_1 = FUNC_3("none");
 }
 if (VAR_1 == ((void*)0))
  FUNC_0(1, ((void*)0));

 return VAR_1;
}
