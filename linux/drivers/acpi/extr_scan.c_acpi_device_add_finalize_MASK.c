
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct acpi_device *VAR_1)
{
 FUNC_0(&VAR_1->dev, 0);
 FUNC_1(&VAR_1->dev.kobj, VAR_0);
}
