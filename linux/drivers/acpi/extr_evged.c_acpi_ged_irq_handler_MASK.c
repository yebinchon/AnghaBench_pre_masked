
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ged_event {int dev; int gsi; int handle; } ;
typedef int irqreturn_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct acpi_ged_event *VAR_3 = VAR_2;
 acpi_status VAR_4;

 VAR_4 = FUNC_1(VAR_3->handle, ((void*)0), VAR_3->gsi);
 if (FUNC_0(VAR_4))
  FUNC_2(VAR_3->dev, "IRQ method execution failed\n");

 return VAR_0;
}
