
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum intel_uc_fw_status { ____Placeholder_intel_uc_fw_status } intel_uc_fw_status ;
__attribute__((used)) static inline
const char *FUNC_0(enum intel_uc_fw_status VAR_0)
{
 switch (VAR_0) {
 case 132:
  return "N/A";
 case 128:
  return "UNINITIALIZED";
 case 136:
  return "DISABLED";
 case 130:
  return "SELECTED";
 case 133:
  return "MISSING";
 case 135:
  return "ERROR";
 case 137:
  return "AVAILABLE";
 case 134:
  return "FAIL";
 case 129:
  return "TRANSFERRED";
 case 131:
  return "RUNNING";
 }
 return "<invalid>";
}
