
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;

int
FUNC_2(int VAR_2, char **VAR_3)
{

 if (VAR_2 < 3)
  return VAR_0;

 if (FUNC_1(VAR_3[1], VAR_3[2]) == -1) {
  FUNC_0("rename");
  return VAR_0;
 }

 return VAR_1;
}
