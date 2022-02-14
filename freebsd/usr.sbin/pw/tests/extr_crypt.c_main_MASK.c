
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(int VAR_0, char** VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;

 if (VAR_0 < 3)
  FUNC_1(1, "Usage: crypt <salt> <password>");
 VAR_2 = VAR_1[1];
 VAR_3 = VAR_1[2];

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 FUNC_2("%s", VAR_4);
 return (VAR_4 == ((void*)0) ? 1 : 0);
}
