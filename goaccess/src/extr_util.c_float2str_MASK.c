
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *,int ,char*,int,float) ;
 int FUNC_1 (char*,char*,int,float) ;
 char* FUNC_2 (scalar_t__) ;

char *
FUNC_3 (float VAR_0, int VAR_1)
{
  char *VAR_2 = FUNC_2 (FUNC_0 (((void*)0), 0, "%*.2f", VAR_1, VAR_0) + 1);
  FUNC_1 (VAR_2, "%*.2f", VAR_1, VAR_0);

  return VAR_2;
}
