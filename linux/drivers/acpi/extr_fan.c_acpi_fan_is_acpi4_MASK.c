
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(struct acpi_device *VAR_0)
{
 return FUNC_0(VAR_0->handle, "_FIF") &&
        FUNC_0(VAR_0->handle, "_FPS") &&
        FUNC_0(VAR_0->handle, "_FSL") &&
        FUNC_0(VAR_0->handle, "_FST");
}
