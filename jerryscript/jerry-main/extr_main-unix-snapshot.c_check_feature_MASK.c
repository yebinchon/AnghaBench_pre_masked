
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_feature_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static bool
FUNC_3 (jerry_feature_t VAR_1,
               const char *VAR_2)
{
  if (!FUNC_0 (VAR_1))
  {
    FUNC_1 (VAR_0);
    FUNC_2 (VAR_0, "Ignoring '%s' option because this feature is disabled!\n", VAR_2);
    return 0;
  }
  return 1;
}
