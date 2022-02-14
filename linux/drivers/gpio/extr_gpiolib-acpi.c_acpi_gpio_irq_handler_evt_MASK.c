
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpio_event {int pin; int handle; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct acpi_gpio_event *VAR_3 = VAR_2;

 FUNC_0(VAR_3->handle, ((void*)0), VAR_3->pin);

 return VAR_0;
}
