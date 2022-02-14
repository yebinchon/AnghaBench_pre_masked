
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int acpi_status ;
struct TYPE_2__ {int smi_command; scalar_t__ pstate_control; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(void)
{
 acpi_status VAR_4;

 if (!VAR_3.smi_command || !VAR_3.pstate_control)
  return 0;

 FUNC_0((VAR_0,
     "Writing pstate_control [0x%x] to smi_command [0x%x]\n",
     VAR_3.pstate_control, VAR_3.smi_command));

 VAR_4 = FUNC_3(VAR_3.smi_command,
        (u32)VAR_3.pstate_control, 8);
 if (FUNC_2(VAR_4))
  return 1;

 FUNC_1((VAR_1, VAR_4,
   "Failed to write pstate_control [0x%x] to smi_command [0x%x]",
   VAR_3.pstate_control, VAR_3.smi_command));
 return -VAR_2;
}
