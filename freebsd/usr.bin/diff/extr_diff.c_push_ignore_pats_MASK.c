
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int,size_t) ;
 char* FUNC_3 (char*) ;

void
FUNC_4(char *VAR_1)
{
 size_t VAR_2;

 if (VAR_0 == ((void*)0))
  VAR_0 = FUNC_3(VAR_1);
 else {

  VAR_2 = FUNC_1(VAR_0) + FUNC_1(VAR_1) + 2;
  VAR_0 = FUNC_2(VAR_0, 1, VAR_2);
  FUNC_0(VAR_0, "|", VAR_2);
  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
