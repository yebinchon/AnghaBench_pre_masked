
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1, int *VAR_2)
{
 unsigned long long VAR_3;
 acpi_status VAR_4;

 VAR_4 = FUNC_1(VAR_1->handle, "_PSC", ((void*)0), &VAR_3);
 if (FUNC_0(VAR_4))
  return -VAR_0;

 *VAR_2 = VAR_3;
 return 0;
}
