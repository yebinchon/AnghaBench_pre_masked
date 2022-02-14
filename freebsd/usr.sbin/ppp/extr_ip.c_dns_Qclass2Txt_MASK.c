
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;


 char const* FUNC_0 (scalar_t__,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(u_short VAR_0)
{
  static char VAR_1[6];
  struct {
    u_short id;
    const char *txt;
  } VAR_2[] = {

    { 1, "IN" }, { 2, "CS" }, { 3, "CH" }, { 4, "HS" }, { 255, "*" }
  };
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < sizeof VAR_2 / sizeof *VAR_2; VAR_3++)
    if (VAR_2[VAR_3].id == VAR_0)
      return VAR_2[VAR_3].txt;

  return FUNC_0(VAR_0, VAR_1, sizeof VAR_1);
}
