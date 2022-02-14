
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
  char *VAR_6;

  FUNC_1 (&VAR_5, "%s/pwm1", VAR_4);
  FUNC_1 (&VAR_6, "%s/pwm1_max", VAR_4);

  FUNC_5 (VAR_4);

  HCFILE VAR_7;

  if (FUNC_3 (&VAR_7, VAR_5, "r") == 0)
  {
    FUNC_0 (VAR_1, "%s: %s", VAR_5, FUNC_7 (VAR_0));

    FUNC_5 (VAR_5);
    FUNC_5 (VAR_6);

    return -1;
  }

  int VAR_8 = 0;

  if (FUNC_4 (&VAR_7, "%d", &VAR_8) != 1)
  {
    FUNC_2 (&VAR_7);

    FUNC_0 (VAR_1, "%s: unexpected data.", VAR_5);

    FUNC_5 (VAR_5);
    FUNC_5 (VAR_6);

    return -1;
  }

  FUNC_2 (&VAR_7);

  HCFILE VAR_9;

  if (FUNC_3 (&VAR_9, VAR_6, "r") == 0)
  {
    FUNC_0 (VAR_1, "%s: %s", VAR_6, FUNC_7 (VAR_0));

    FUNC_5 (VAR_5);
    FUNC_5 (VAR_6);

    return -1;
  }

  int VAR_10 = 0;

  if (FUNC_4 (&VAR_9, "%d", &VAR_10) != 1)
  {
    FUNC_2 (&VAR_9);

    FUNC_0 (VAR_1, "%s: unexpected data.", VAR_6);

    FUNC_5 (VAR_5);
    FUNC_5 (VAR_6);

    return -1;
  }

  FUNC_2 (&VAR_9);

  if (VAR_10 == 0)
  {
    FUNC_0 (VAR_1, "%s: pwm1_max cannot be 0.", VAR_6);

    FUNC_5 (VAR_5);
    FUNC_5 (VAR_6);

    return -1;
  }

  const float VAR_11 = (float) VAR_10 / 100.0F;

  const float VAR_12 = (float) VAR_8 / VAR_11;

  *VAR_3 = (int) VAR_12;

  FUNC_5 (VAR_5);
  FUNC_5 (VAR_6);

  return 0;
}
