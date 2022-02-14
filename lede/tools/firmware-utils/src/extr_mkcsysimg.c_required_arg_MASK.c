
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char) ;
 int VAR_0 ;

int
FUNC_1(char VAR_1, char *VAR_2)
{
 if (VAR_2 == ((void*)0) || *VAR_2 != '-')
  return 0;

 FUNC_0("option -%c requires an argument\n", VAR_1);
 return VAR_0;
}
