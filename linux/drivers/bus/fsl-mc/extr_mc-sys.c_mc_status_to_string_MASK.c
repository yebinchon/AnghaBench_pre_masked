
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mc_cmd_status { ____Placeholder_mc_cmd_status } mc_cmd_status ;


 unsigned int FUNC_0 (char const* const*) ;
__attribute__((used)) static const char *FUNC_1(enum mc_cmd_status VAR_0)
{
 static const char *const VAR_1[] = {
  [131] = "Command completed successfully",
  [130] = "Command ready to be processed",
  [139] = "Authentication error",
  [133] = "No privilege",
  [136] = "DMA or I/O error",
  [137] = "Configuration error",
  [129] = "Operation timed out",
  [132] = "No resources",
  [134] = "No memory available",
  [138] = "Device is busy",
  [128] = "Unsupported operation",
  [135] = "Invalid state"
 };

 if ((unsigned int)VAR_0 >= FUNC_0(VAR_1))
  return "Unknown MC error";

 return VAR_1[VAR_0];
}
