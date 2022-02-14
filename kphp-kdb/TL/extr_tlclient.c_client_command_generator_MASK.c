
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;


 TYPE_1__* VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static char *FUNC_3 (const char *VAR_1, int VAR_2) {
  static int VAR_3;
  static int VAR_4;
  if (!VAR_2) {
    VAR_4 = 0;
    VAR_3 = FUNC_1 (VAR_1);
    if (!FUNC_2 ("(", VAR_1, VAR_3)) {
      return FUNC_0 ("(");
    }
  }
  while (1) {
    const char *VAR_5 = VAR_0[VAR_4++].name;
    if (VAR_5 == ((void*)0)) {
      break;
    }
    if (!FUNC_2 (VAR_5, VAR_1, VAR_3)) {
      return FUNC_0 (VAR_5);
    }
  }
  return ((void*)0);
}
