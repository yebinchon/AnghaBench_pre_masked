
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int,char*,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, int VAR_2)
{
 size_t VAR_3;

 VAR_0 = 0;
 VAR_3 = FUNC_0(VAR_2, 0, 0);
 if (VAR_3 == 0 && VAR_0 != 0) {
  FUNC_2("confstr: %s", VAR_1);
  return;
 }
 FUNC_1("%s: ", VAR_1);
 if (VAR_3 == 0)
  FUNC_1("undefined\n");
 else {
  char VAR_4[VAR_3 + 1];

  FUNC_0(VAR_2, VAR_4, VAR_3);
  FUNC_1("%s\n", VAR_4);
 }
}
