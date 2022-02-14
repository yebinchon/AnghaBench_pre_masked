
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int definition ;


 int FUNC_0 () ;
 int FUNC_1 (char const*,char const*) ;
 char const* FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 long FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (char const*,char const*) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 () ;

__attribute__((used)) static void
FUNC_12(const char *VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4)
{
 definition *VAR_5;
 char *VAR_6;
 const char *VAR_7;
 long VAR_8;
 int VAR_9 = 0;

 FUNC_7(VAR_1, VAR_2);
 VAR_7 = VAR_3 ? FUNC_2(VAR_1, VAR_4) : VAR_4;
 FUNC_1(VAR_1, VAR_7);





 FUNC_8(VAR_1, VAR_7);
 FUNC_0();
 if (VAR_1 && (VAR_6 = FUNC_2(VAR_1, ".h"))) {
  FUNC_3(VAR_0, "#include \"%s\"\n", VAR_6);
  FUNC_4(VAR_6);
 } else
  FUNC_3(VAR_0, "#include <rpc/rpc.h>\n");
 FUNC_3(VAR_0, "#include <stdio.h>\n");
 FUNC_3(VAR_0, "#include <stdlib.h>\n");
 VAR_8 = FUNC_5(VAR_0);
 while ( (VAR_5 = FUNC_6()) ) {
  VAR_9 += FUNC_10(VAR_5);
 }

 if (VAR_9)
  FUNC_11();

 if (VAR_3 && VAR_8 == FUNC_5(VAR_0)) {
  (void) FUNC_9(VAR_7);
 }
}
