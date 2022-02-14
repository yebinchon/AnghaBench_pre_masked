
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol_allow_config { ____Placeholder_protocol_allow_config } protocol_allow_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum protocol_allow_config FUNC_3(const char *VAR_3,
       const char *VAR_4)
{
 if (!FUNC_2(VAR_4, "always"))
  return VAR_0;
 else if (!FUNC_2(VAR_4, "never"))
  return VAR_1;
 else if (!FUNC_2(VAR_4, "user"))
  return VAR_2;

 FUNC_1(FUNC_0("unknown value for config '%s': %s"), VAR_3, VAR_4);
}
