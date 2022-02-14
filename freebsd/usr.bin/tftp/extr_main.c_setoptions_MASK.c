
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_2, char *VAR_3[])
{

 if (VAR_2 == 2) {
  if (FUNC_1(VAR_3[1], "enable") == 0 ||
      FUNC_1(VAR_3[1], "on") == 0) {
   VAR_0 = 1;
   VAR_1 = 1;
  }
  if (FUNC_1(VAR_3[1], "disable") == 0 ||
      FUNC_1(VAR_3[1], "off") == 0) {
   VAR_0 = 0;
   VAR_1 = 0;
  }
  if (FUNC_1(VAR_3[1], "extra") == 0)
   VAR_0 = !VAR_0;
 }
 FUNC_0("Support for RFC2347 style options are now %s.\n",
     VAR_1 ? "enabled" : "disabled");
 FUNC_0("Support for non-RFC defined options are now %s.\n",
     VAR_0 ? "enabled" : "disabled");

 FUNC_0("\nThe following options are available:\n"
     "\toptions on	: enable support for RFC2347 style options\n"
     "\toptions off	: disable support for RFC2347 style options\n"
     "\toptions extra	: toggle support for non-RFC defined options\n"
 );
}
