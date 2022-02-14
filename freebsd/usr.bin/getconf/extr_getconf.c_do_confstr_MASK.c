
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 VAR_5 = VAR_1;
 VAR_1 = 0;
 VAR_4 = FUNC_0(VAR_3, 0, 0);
 if (VAR_4 == 0) {
  if (VAR_1)
   FUNC_1(VAR_0, "confstr: %s", VAR_2);
  else
   FUNC_2("undefined\n");
 } else {
  char VAR_6[VAR_4 + 1];

  FUNC_0(VAR_3, VAR_6, VAR_4);
  FUNC_2("%s\n", VAR_6);
 }
 VAR_1 = VAR_5;
}
