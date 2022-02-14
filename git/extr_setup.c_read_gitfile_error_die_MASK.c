
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*) ;

void FUNC_4(int VAR_0, const char *VAR_1, const char *VAR_2)
{
 switch (VAR_0) {
 case 129:
 case 134:

  break;
 case 131:
  FUNC_3(FUNC_1("error opening '%s'"), VAR_1);
 case 128:
  FUNC_2(FUNC_1("too large to be a .git file: '%s'"), VAR_1);
 case 130:
  FUNC_2(FUNC_1("error reading %s"), VAR_1);
 case 135:
  FUNC_2(FUNC_1("invalid gitfile format: %s"), VAR_1);
 case 132:
  FUNC_2(FUNC_1("no path in gitfile: %s"), VAR_1);
 case 133:
  FUNC_2(FUNC_1("not a git repository: %s"), VAR_2);
 default:
  FUNC_0("unknown error code");
 }
}
