
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;
typedef int HCFILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,...) ;
 int FUNC_1 (char**,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,int*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int *,int const) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8 (hashcat_ctx_t *VAR_1, const int VAR_2, int *VAR_3)
{
  char *VAR_4 = FUNC_6 (VAR_1, VAR_2);

  if (VAR_4 == ((void*)0)) return -1;

  char *VAR_5;

  FUNC_1 (&VAR_5, "%s/temp1_input", VAR_4);

  FUNC_5 (VAR_4);

  HCFILE VAR_6;

  if (FUNC_3 (&VAR_6, VAR_5, "r") == 0)
  {
    FUNC_0 (VAR_1, "%s: %s", VAR_5, FUNC_7 (VAR_0));

    FUNC_5 (VAR_5);

    return -1;
  }

  int VAR_7 = 0;

  if (FUNC_4 (&VAR_6, "%d", &VAR_7) != 1)
  {
    FUNC_2 (&VAR_6);

    FUNC_0 (VAR_1, "%s: unexpected data.", VAR_5);

    FUNC_5 (VAR_5);

    return -1;
  }

  FUNC_2 (&VAR_6);

  *VAR_3 = VAR_7 / 1000;

  FUNC_5 (VAR_5);

  return 0;
}
