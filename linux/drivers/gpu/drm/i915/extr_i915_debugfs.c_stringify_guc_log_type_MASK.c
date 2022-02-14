
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum guc_log_buffer_type { ____Placeholder_guc_log_buffer_type } guc_log_buffer_type ;





 int FUNC_0 (int) ;

__attribute__((used)) static const char *
FUNC_1(enum guc_log_buffer_type VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "ISR";
 case 129:
  return "DPC";
 case 130:
  return "CRASH";
 default:
  FUNC_0(VAR_0);
 }

 return "";
}
