
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* errstr; } ;
typedef TYPE_1__ GLogItem ;






 int FUNC_0 (int *,int ,char const*,...) ;
 int FUNC_1 (char*,char const*,...) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (GLogItem * VAR_0, int VAR_1, const char VAR_2, const char *VAR_3)
{
  char *VAR_4 = ((void*)0);
  const char *VAR_5 = ((void*)0);

  switch (VAR_1) {
  case 130:
    VAR_5 = "Token '%s' doesn't match specifier '%%%c'";
    VAR_4 = FUNC_2 (FUNC_0 (((void*)0), 0, VAR_5, (VAR_3 ? VAR_3 : "-"), VAR_2) + 1);
    FUNC_1 (VAR_4, VAR_5, (VAR_3 ? VAR_3 : "-"), VAR_2);
    break;
  case 128:
    VAR_5 = "Token already set for '%%%c' specifier.";
    VAR_4 = FUNC_2 (FUNC_0 (((void*)0), 0, VAR_5, VAR_2) + 1);
    FUNC_1 (VAR_4, VAR_5, VAR_2);
    break;
  case 129:
    VAR_5 = "Token for '%%%c' specifier is NULL.";
    VAR_4 = FUNC_2 (FUNC_0 (((void*)0), 0, VAR_5, VAR_2) + 1);
    FUNC_1 (VAR_4, VAR_5, VAR_2);
    break;
  case 131:
    VAR_5 = "Missing braces '%s' and ignore chars for specifier '%%%c'";
    VAR_4 = FUNC_2 (FUNC_0 (((void*)0), 0, VAR_5, (VAR_3 ? VAR_3 : "-"), VAR_2) + 1);
    FUNC_1 (VAR_4, VAR_5, (VAR_3 ? VAR_3 : "-"), VAR_2);
    break;
  }
  VAR_0->errstr = VAR_4;

  return 1;
}
