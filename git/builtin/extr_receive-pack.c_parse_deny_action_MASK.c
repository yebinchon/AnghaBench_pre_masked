
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum deny_action { ____Placeholder_deny_action } deny_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum deny_action FUNC_2(const char *VAR_4, const char *VAR_5)
{
 if (VAR_5) {
  if (!FUNC_1(VAR_5, "ignore"))
   return VAR_0;
  if (!FUNC_1(VAR_5, "warn"))
   return VAR_3;
  if (!FUNC_1(VAR_5, "refuse"))
   return VAR_1;
  if (!FUNC_1(VAR_5, "updateinstead"))
   return VAR_2;
 }
 if (FUNC_0(VAR_4, VAR_5))
  return VAR_1;
 return VAR_0;
}
