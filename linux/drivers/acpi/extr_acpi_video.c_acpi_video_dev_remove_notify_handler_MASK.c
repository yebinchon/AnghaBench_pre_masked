
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ notify; } ;
struct acpi_video_device {TYPE_2__ flags; TYPE_1__* dev; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct acpi_video_device *VAR_2)
{
 if (VAR_2->flags.notify) {
  FUNC_0(VAR_2->dev->handle, VAR_0,
        VAR_1);
  VAR_2->flags.notify = 0;
 }
}
