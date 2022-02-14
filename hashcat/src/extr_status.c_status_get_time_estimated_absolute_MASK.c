
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__*,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int const*) ;
 char* FUNC_3 (char*) ;
 size_t FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__*) ;

char *FUNC_6 (const hashcat_ctx_t *VAR_1)
{
  time_t VAR_2 = FUNC_2 (VAR_1);

  time_t VAR_3;
  FUNC_5 (&VAR_3);


  char VAR_4[32] = { 0 };

  char *VAR_5;

  if (FUNC_1 (VAR_3, VAR_2) == 0)
  {
    VAR_5 = (char *) VAR_0;
  }
  else
  {
    time_t VAR_6 = VAR_3 + VAR_2;

    VAR_5 = FUNC_0 (&VAR_6, VAR_4);

    if (VAR_5 == ((void*)0)) VAR_5 = (char *) VAR_0;
  }

  const size_t VAR_7 = FUNC_4 (VAR_5);

  if (VAR_5[VAR_7 - 1] == '\n') VAR_5[VAR_7 - 1] = 0;
  if (VAR_5[VAR_7 - 2] == '\r') VAR_5[VAR_7 - 2] = 0;

  return FUNC_3 (VAR_5);
}
