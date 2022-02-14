
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char**,char*) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, int *VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(&VAR_0, ":");
  if (VAR_3 == ((void*)0))
   break;
  VAR_1[VAR_4] = FUNC_1(VAR_3, 0, 16);
 }
 return (VAR_4);
}
