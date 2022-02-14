
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;
struct TYPE_2__ {scalar_t__ force_sysfs_fallback; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(enum fw_opt VAR_2)
{
 if (VAR_1.force_sysfs_fallback)
  return 1;
 if (!(VAR_2 & VAR_0))
  return 0;
 return 1;
}
