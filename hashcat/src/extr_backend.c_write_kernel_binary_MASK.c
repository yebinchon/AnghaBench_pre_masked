
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hashcat_ctx_t ;
typedef int HCFILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (char*,int,size_t,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7 (hashcat_ctx_t *VAR_1, char *VAR_2, char *VAR_3, size_t VAR_4)
{
  if (VAR_4 > 0)
  {
    HCFILE VAR_5;

    if (FUNC_3 (&VAR_5, VAR_2, "wb") == 0)
    {
      FUNC_0 (VAR_1, "%s: %s", VAR_2, FUNC_6 (VAR_0));

      return 0;
    }

    if (FUNC_5 (&VAR_5) == -1)
    {
      FUNC_1 (&VAR_5);

      FUNC_0 (VAR_1, "%s: %s", VAR_2, FUNC_6 (VAR_0));

      return 0;
    }

    FUNC_4 (VAR_3, sizeof (char), VAR_4, &VAR_5);

    FUNC_2 (&VAR_5);

    FUNC_1 (&VAR_5);
  }

  return 1;
}
