
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;
struct cmdargs {int argn; int argc; int * argv; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct passwd* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;

int
FUNC_4(struct cmdargs const *VAR_1)
{

  int VAR_2;
  struct passwd *VAR_3;

  if (VAR_0 == -1)
    VAR_0 = 0;

  VAR_3 = FUNC_2(FUNC_0());
  if (VAR_3 != ((void*)0))
    for (VAR_2 = VAR_1->argn; VAR_2 < VAR_1->argc; VAR_2++)
      if (!FUNC_3("*", VAR_1->argv[VAR_2]) || !FUNC_3(VAR_3->pw_name, VAR_1->argv[VAR_2])) {
        VAR_0 = 1;
        break;
      }
  FUNC_1();

  return 0;
}
