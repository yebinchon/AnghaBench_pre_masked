
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 char* VAR_1 ;
 int VAR_2 ;

void FUNC_2 (const char *VAR_3)
{
  int VAR_4;

  FUNC_1(VAR_2,"%s: Couldn't find ",VAR_1);
  for (VAR_4=0;VAR_0[VAR_4];VAR_4++)
    FUNC_1(VAR_2,(VAR_0[VAR_4+1]) ? "%s%ld, " : "or %s%s\n",
            VAR_3,
            VAR_0[VAR_4]);
  FUNC_0(1);
}
