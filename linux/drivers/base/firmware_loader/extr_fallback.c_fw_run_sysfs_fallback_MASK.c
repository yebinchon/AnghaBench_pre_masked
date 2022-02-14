
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum fw_opt { ____Placeholder_fw_opt } fw_opt ;
struct TYPE_2__ {scalar_t__ ignore_sysfs_fallback; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(enum fw_opt VAR_3)
{
 int VAR_4;

 if (VAR_2.ignore_sysfs_fallback) {
  FUNC_1("Ignoring firmware sysfs fallback due to sysctl knob\n");
  return 0;
 }

 if ((VAR_3 & VAR_0))
  return 0;


 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 < 0)
  return 0;

 return FUNC_0(VAR_3);
}
