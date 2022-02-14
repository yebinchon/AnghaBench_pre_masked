
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_3__ {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__ VAR_2 ;

void FUNC_2(void)
{
 if (VAR_2.status != VAR_0)
  return;

 FUNC_1("FLASH: Flashing new firmware\n");
 FUNC_1("FLASH: Image is %u bytes\n", VAR_1.size);
 FUNC_1("FLASH: Performing flash and reboot/shutdown\n");
 FUNC_1("FLASH: This will take several minutes. Do not power off!\n");


 FUNC_0(500);
}
