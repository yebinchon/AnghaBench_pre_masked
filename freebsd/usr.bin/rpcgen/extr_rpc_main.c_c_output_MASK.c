
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int definition ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 char const* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;
 long FUNC_6 (int ) ;
 int * FUNC_7 () ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (char const*,char const*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static void
FUNC_11(const char *VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4)
{
 definition *VAR_5;
 char *VAR_6;
 const char *VAR_7;
 long VAR_8;

 FUNC_1();
 FUNC_8(VAR_1, VAR_2);
 VAR_7 = VAR_3 ? FUNC_3(VAR_1, VAR_4) : VAR_4;
 FUNC_9(VAR_1, VAR_7);
 FUNC_0();
 if (VAR_1 && (VAR_6 = FUNC_3(VAR_1, ".h"))) {
  FUNC_4(VAR_0, "#include \"%s\"\n", VAR_6);
  FUNC_5(VAR_6);

 } else
  FUNC_4(VAR_0, "#include <rpc/rpc.h>\n");
 VAR_8 = FUNC_6(VAR_0);
 while ( (VAR_5 = FUNC_7()) ) {
  FUNC_2(VAR_5);
 }
 if (VAR_3 && VAR_8 == FUNC_6(VAR_0)) {
  (void) FUNC_10(VAR_7);
 }
}
