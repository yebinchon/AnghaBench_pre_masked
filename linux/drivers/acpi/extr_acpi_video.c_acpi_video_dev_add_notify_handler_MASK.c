
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int notify; } ;
struct acpi_video_device {TYPE_1__ flags; struct acpi_device* dev; } ;
struct acpi_device {int dev; int handle; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,struct acpi_video_device*) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3(struct acpi_video_device *VAR_2)
{
 acpi_status VAR_3;
 struct acpi_device *VAR_4 = VAR_2->dev;

 VAR_3 = FUNC_1(VAR_4->handle, VAR_0,
          VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  FUNC_2(&VAR_4->dev, "Error installing notify handler\n");
 else
  VAR_2->flags.notify = 1;
}
