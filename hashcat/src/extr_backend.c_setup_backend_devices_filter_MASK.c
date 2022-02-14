
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int hashcat_ctx_t ;


 int FUNC_0 (int *,char*,int const) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (char*,int *,int) ;

__attribute__((used)) static bool FUNC_5 (hashcat_ctx_t *VAR_0, const char *VAR_1, u64 *VAR_2)
{
  u64 VAR_3 = 0;

  if (VAR_1)
  {
    char *VAR_4 = FUNC_2 (VAR_1);

    if (VAR_4 == ((void*)0)) return 0;

    char *VAR_5 = ((void*)0);

    char *VAR_6 = FUNC_3 (VAR_4, ",", &VAR_5);

    do
    {
      const int VAR_7 = (const int) FUNC_4 (VAR_6, ((void*)0), 10);

      if ((VAR_7 <= 0) || (VAR_7 >= 64))
      {
        FUNC_0 (VAR_0, "Invalid device_id %d specified.", VAR_7);

        FUNC_1 (VAR_4);

        return 0;
      }

      VAR_3 |= 1ULL << (VAR_7 - 1);

    } while ((VAR_6 = FUNC_3 ((char *) ((void*)0), ",", &VAR_5)) != ((void*)0));

    FUNC_1 (VAR_4);
  }
  else
  {
    VAR_3 = -1ULL;
  }

  *VAR_2 = VAR_3;

  return 1;
}
