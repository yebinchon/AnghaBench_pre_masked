
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lcd; } ;
struct acpi_video_device {TYPE_2__ flags; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct acpi_video_device*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct acpi_video_device *VAR_1)
{




 if (!FUNC_0(VAR_1)) {
  FUNC_1(&VAR_1->dev->dev, "not in _DOD list, ignore\n");
  return 0;
 }

 if (VAR_0)
  return VAR_1->flags.lcd;
 return 1;
}
