
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdargs {int argn; int argc; int bundle; int argv; } ;


 int FUNC_0 (char*,int,int,char const* const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char**,int,int ,int ,int,int ) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_5(struct cmdargs const *VAR_4)
{
  char VAR_5[VAR_0];

  if (VAR_4->argn < VAR_4->argc) {
    char *VAR_6[VAR_3];
    int VAR_7 = VAR_4->argc - VAR_4->argn;

    if (VAR_7 >= (int)(sizeof VAR_6 / sizeof VAR_6[0])) {
      VAR_7 = sizeof VAR_6 / sizeof VAR_6[0] - 1;
      FUNC_4(VAR_2, "Truncating log command to %d args\n", VAR_7);
    }
    FUNC_1(VAR_6, VAR_7, VAR_4->argv + VAR_4->argn, VAR_4->bundle, 1, FUNC_3());
    FUNC_0(VAR_5, sizeof VAR_5, VAR_7, (const char *const *)VAR_6);
    FUNC_4(VAR_1, "%s\n", VAR_5);
    FUNC_2(VAR_7, VAR_6);
    return 0;
  }

  return -1;
}
