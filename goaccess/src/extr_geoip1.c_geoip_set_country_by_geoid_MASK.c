
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GTypeIP ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,char const*,char*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_0, char *VAR_1, GTypeIP VAR_2)
{
  const char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = VAR_0;
  int VAR_6 = 0;

  if (!FUNC_4 ())
    return;

  if (!(VAR_3 = FUNC_1 (VAR_5, VAR_2)))
    goto out;


  if (!(VAR_6 = FUNC_2 (VAR_5, VAR_2)))
    goto out;
  VAR_4 = FUNC_0 (VAR_6);

out:
  FUNC_3 (VAR_3, VAR_4, VAR_1);
}
