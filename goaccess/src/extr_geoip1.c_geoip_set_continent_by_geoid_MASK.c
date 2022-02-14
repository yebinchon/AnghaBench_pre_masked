
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GTypeIP ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_0, char *VAR_1, GTypeIP VAR_2)
{
  const char *VAR_3 = ((void*)0), *VAR_4 = VAR_0;
  int VAR_5 = 0;

  if (!FUNC_3 ())
    return;

  if (!(VAR_5 = FUNC_1 (VAR_4, VAR_2)))
    goto out;
  VAR_3 = FUNC_0 (VAR_5);

out:
  FUNC_2 (VAR_3, VAR_1);
}
