
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 size_t FUNC_0 (char const* const*) ;

const char *FUNC_1(u32 VAR_0)
{
 static const char * const VAR_1[] = {
  "PORT_NOP",
  "PORT_DOWN",
  "PORT_INIT",
  "PORT_ARMED",
  "PORT_ACTIVE",
  "PORT_ACTIVE_DEFER",
 };
 if (VAR_0 < FUNC_0(VAR_1))
  return VAR_1[VAR_0];
 return "unknown";
}
