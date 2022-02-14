
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc {int handle; struct ioc* next; } ;
struct acpi_device_id {int dummy; } ;
struct acpi_device {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ioc* VAR_2 ;
 struct ioc* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct acpi_device *VAR_3,
          const struct acpi_device_id *VAR_4)
{
 struct ioc *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->next = VAR_2;
 VAR_2 = VAR_5;
 VAR_5->handle = VAR_3->handle;
 return 1;
}
