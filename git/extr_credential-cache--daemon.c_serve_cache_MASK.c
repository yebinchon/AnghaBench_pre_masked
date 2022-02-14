
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 < 0)
  FUNC_1("unable to bind to '%s'", VAR_2);

 FUNC_4("ok\n");
 FUNC_2(VAR_1);
 if (!VAR_3) {
  if (!FUNC_3("/dev/null", "w", VAR_0))
   FUNC_1("unable to point stderr to /dev/null");
 }

 while (FUNC_5(VAR_4))
  ;

 FUNC_0(VAR_4);
}
