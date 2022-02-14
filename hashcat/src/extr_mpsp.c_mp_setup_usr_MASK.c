
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int mp_file ;
typedef int hashcat_ctx_t ;
typedef int cs_t ;
typedef int HCFILE ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,char*) ;
 size_t FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (int *,char const*,size_t const,int *,int *,int const,int) ;
 size_t const FUNC_6 (char const*) ;
 size_t FUNC_7 (char*,size_t const) ;

__attribute__((used)) static int FUNC_8 (hashcat_ctx_t *VAR_0, cs_t *VAR_1, cs_t *VAR_2, const char *VAR_3, const u32 VAR_4)
{
  HCFILE VAR_5;

  if (FUNC_3 (&VAR_5, VAR_3, "rb") == 0)
  {
    const int VAR_6 = FUNC_5 (VAR_0, VAR_3, FUNC_6 (VAR_3), VAR_1, VAR_2, VAR_4, 1);

    if (VAR_6 == -1) return -1;
  }
  else
  {
    char VAR_7[1024];

    const size_t VAR_8 = FUNC_4 (VAR_7, 1, sizeof (VAR_7) - 1, &VAR_5);

    if (!FUNC_2 (&VAR_5))
    {
      FUNC_0 (VAR_0, "%s: Custom charset file is too large.", VAR_3);

      FUNC_1 (&VAR_5);

      return -1;
    }

    FUNC_1 (&VAR_5);

    if (VAR_8 == 0)
    {
      FUNC_0 (VAR_0, "%s: Custom charset file is empty.", VAR_3);

      return -1;
    }

    VAR_7[VAR_8] = 0;

    const size_t VAR_9 = FUNC_7 (VAR_7, VAR_8);

    if (VAR_9 == 0)
    {
      FUNC_0 (VAR_0, "%s: Custom charset file is corrupted.", VAR_3);

      return -1;
    }

    const int VAR_10 = FUNC_5 (VAR_0, VAR_7, VAR_9, VAR_1, VAR_2, VAR_4, 0);

    if (VAR_10 == -1) return -1;
  }

  return 0;
}
