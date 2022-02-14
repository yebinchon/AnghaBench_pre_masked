
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ functional; scalar_t__ present; } ;
struct acpi_device {int dev; scalar_t__ handler; int handle; TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);
 if (VAR_2->status.present || VAR_2->status.functional) {
  if (VAR_2->handler) {
   FUNC_3(&VAR_2->dev, "Already enumerated\n");
   return -VAR_0;
  }
  VAR_3 = FUNC_1(VAR_2->handle);
  if (VAR_3) {
   FUNC_3(&VAR_2->dev, "Namespace scan failure\n");
   return VAR_3;
  }
  if (!VAR_2->handler) {
   FUNC_3(&VAR_2->dev, "Enumeration failure\n");
   VAR_3 = -VAR_1;
  }
 } else {
  VAR_3 = FUNC_2(VAR_2);
 }
 return VAR_3;
}
