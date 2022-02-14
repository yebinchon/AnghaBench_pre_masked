
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int dummy; } ;






 int FUNC_0 (int,char*,char const*,...) ;
 int FUNC_1 (char const*,struct printer*) ;
 int FUNC_2 (struct printer*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0, struct printer *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 switch(VAR_2) {
 case 130:
 case 129:
  FUNC_0(1, "%s: %s", VAR_0, FUNC_3(VAR_2));
 case 131:
  FUNC_0(1, "%s: unknown printer", VAR_0);
 case 128:
  FUNC_4("%s: unresolved tc= reference(s)", VAR_0);
 }
}
