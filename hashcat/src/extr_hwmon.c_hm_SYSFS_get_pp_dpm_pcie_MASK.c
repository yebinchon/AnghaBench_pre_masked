
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;
typedef int buf ;
typedef int HCFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (char**,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int *,int const) ;
 int FUNC_8 (char*,char*,int*,float*,int*) ;
 int FUNC_9 (int ) ;
 size_t FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11 (hashcat_ctx_t *VAR_2, const int VAR_3, int *VAR_4)
{
  char *VAR_5 = FUNC_7 (VAR_2, VAR_3);

  if (VAR_5 == ((void*)0)) return -1;

  char *VAR_6;

  FUNC_1 (&VAR_6, "%s/pp_dpm_pcie", VAR_5);

  FUNC_6 (VAR_5);

  HCFILE VAR_7;

  if (FUNC_5 (&VAR_7, VAR_6, "r") == 0)
  {
    FUNC_0 (VAR_2, "%s: %s", VAR_6, FUNC_9 (VAR_1));

    FUNC_6 (VAR_6);

    return -1;
  }

  int VAR_8 = 0;

  while (!FUNC_3 (&VAR_7))
  {
    char VAR_9[VAR_0];

    char *VAR_10 = FUNC_4 (VAR_9, sizeof (VAR_9), &VAR_7);

    if (VAR_10 == ((void*)0)) continue;

    size_t VAR_11 = FUNC_10 (VAR_10);

    if (VAR_11 < 2) continue;

    if (VAR_10[VAR_11 - 2] != '*') continue;

    int VAR_12 = 0;
    float VAR_13 = 0;

    int VAR_14 = FUNC_8 (VAR_10, "%d: %fGB, x%d *", &VAR_12, &VAR_13, &VAR_8);

    if (VAR_14 == 3) break;
  }

  FUNC_2 (&VAR_7);

  *VAR_4 = VAR_8;

  FUNC_6 (VAR_6);

  return 0;
}
