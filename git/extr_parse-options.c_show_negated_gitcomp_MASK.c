
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int type; char const* long_name; int flags; } ;





 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;

__attribute__((used)) static void FUNC_2(const struct option *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 for (; VAR_4->type != VAR_0; VAR_4++) {
  int VAR_7 = 0;
  const char *VAR_8;

  if (!VAR_4->long_name)
   continue;
  if (VAR_4->flags & (VAR_1 | VAR_2))
   continue;
  if (VAR_4->flags & VAR_3)
   continue;

  switch (VAR_4->type) {
  case 128:
  case 133:
  case 132:
  case 131:
  case 135:
  case 136:
  case 130:
  case 134:
  case 129:
   VAR_7 = 1;
   break;
  default:
   break;
  }
  if (!VAR_7)
   continue;

  if (FUNC_1(VAR_4->long_name, "no-", &VAR_8)) {
   if (VAR_5 < 0)
    FUNC_0(" --%s", VAR_8);
  } else if (VAR_5 >= 0) {
   if (VAR_5 && !VAR_6) {
    FUNC_0(" --");
    VAR_6 = 1;
   }
   FUNC_0(" --no-%s", VAR_4->long_name);
   VAR_5++;
  }
 }
}
