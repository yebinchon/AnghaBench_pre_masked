
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ def_kind; } ;
typedef TYPE_1__ definition ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char const* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(const char *VAR_2, const char *VAR_3, int VAR_4, const char *VAR_5)
{
 char *VAR_6;
 definition *VAR_7;
 int VAR_8 = 0;
 const char *VAR_9;

 FUNC_5(VAR_2, VAR_3);
 VAR_9 = VAR_4 ? FUNC_1(VAR_2, VAR_5) : VAR_5;
 FUNC_6(VAR_2, VAR_9);
 FUNC_0();
 FUNC_2 (VAR_1, "#include <string.h> /* for memset */\n");
 if (VAR_2 && (VAR_6 = FUNC_1(VAR_2, ".h"))) {
  FUNC_2(VAR_1, "#include \"%s\"\n", VAR_6);
  FUNC_3(VAR_6);
 } else
  FUNC_2(VAR_1, "#include <rpc/rpc.h>\n");
 while ( (VAR_7 = FUNC_4()) ) {
  VAR_8 |= (VAR_7->def_kind == VAR_0);
 }
 if (VAR_4 && !VAR_8) {
  (void) FUNC_7(VAR_9);
  return;
 }
 FUNC_8();
}
