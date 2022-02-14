
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ time_t ;
struct stat {size_t st_size; } ;
typedef int hashcat_ctx_t ;
typedef int HCFILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,char*) ;
 size_t FUNC_3 (char*,int,size_t,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,scalar_t__,char*,int) ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10 (hashcat_ctx_t *VAR_2, const char *VAR_3, size_t *VAR_4, char **VAR_5, const bool VAR_6)
{
  HCFILE VAR_7;

  if (FUNC_2 (&VAR_7, VAR_3, "rb") == 1)
  {
    struct stat VAR_8;

    if (FUNC_7 (VAR_3, &VAR_8))
    {
      FUNC_1 (&VAR_7);

      return 0;
    }



    size_t VAR_9 = VAR_8.st_size;

    char *VAR_10 = (char *) FUNC_5 (VAR_9 + 1 + 100);

    size_t VAR_11 = FUNC_3 (VAR_10, sizeof (char), VAR_9, &VAR_7);

    FUNC_1 (&VAR_7);

    if (VAR_11 != VAR_9)
    {
      FUNC_0 (VAR_2, "%s: %s", VAR_3, FUNC_8 (VAR_1));

      FUNC_4 (VAR_10);

      return 0;
    }

    VAR_10[VAR_9] = 0;

    if (VAR_6 == 1)
    {




      time_t VAR_12 = FUNC_9 (((void*)0));

      const int VAR_13 = FUNC_6 (VAR_10 + VAR_9, 100, "\n//%u\n", (u32) VAR_12);

      VAR_9 += VAR_13;
    }

    VAR_4[0] = VAR_9;

    VAR_5[0] = VAR_10;
  }
  else
  {
    FUNC_0 (VAR_2, "%s: %s", VAR_3, FUNC_8 (VAR_1));

    return 0;
  }

  return 1;
}
