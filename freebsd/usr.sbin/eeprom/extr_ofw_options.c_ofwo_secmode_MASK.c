
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofwo_extabent {int ex_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,char*,char*,int) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,void const*,int,int ,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(const struct ofwo_extabent *VAR_2, int VAR_3, const void *VAR_4,
    int VAR_5, const char *VAR_6)
{
 int VAR_7;

 if (VAR_6) {
  if (FUNC_5(VAR_6, "full") == 0 || FUNC_5(VAR_6, "command") == 0) {
   if ((VAR_7 = FUNC_3(VAR_3)) != VAR_1)
    return (VAR_7);
   if ((VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_2->ex_prop,
       VAR_6)) != VAR_1)
    FUNC_1(VAR_3, FUNC_0(VAR_3),
        "security-password", "", 1);
   return (VAR_7);
  }
  if (FUNC_5(VAR_6, "none") == 0) {
   FUNC_1(VAR_3, FUNC_0(VAR_3), "security-password",
       "", 1);
   return (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_2->ex_prop,
       VAR_6));
  }
  return (VAR_0);
 } else
  FUNC_2(VAR_2->ex_prop, (const char *)VAR_4, VAR_5);
 return (VAR_1);
}
