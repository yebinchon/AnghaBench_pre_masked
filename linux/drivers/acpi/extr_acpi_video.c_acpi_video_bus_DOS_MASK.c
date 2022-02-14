
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int _DOS; } ;
struct acpi_video_bus {int dos_setting; TYPE_1__* device; TYPE_2__ cap; } ;
typedef int acpi_status ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct acpi_video_bus *VAR_2, int VAR_3, int VAR_4)
{
 acpi_status VAR_5;

 if (!VAR_2->cap._DOS)
  return 0;

 if (VAR_3 < 0 || VAR_3 > 3 || VAR_4 < 0 || VAR_4 > 1)
  return -VAR_0;
 VAR_2->dos_setting = (VAR_4 << 2) | VAR_3;
 VAR_5 = FUNC_1(VAR_2->device->handle, "_DOS",
         (VAR_4 << 2) | VAR_3);
 if (FUNC_0(VAR_5))
  return -VAR_1;

 return 0;
}
