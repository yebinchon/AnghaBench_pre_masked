
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(int VAR_0, char **VAR_1)
{
 *VAR_1 = FUNC_1(((void*)0), " ");
 if (!*VAR_1)
  FUNC_0("line[%d]: expected: <s>", VAR_0);
}
