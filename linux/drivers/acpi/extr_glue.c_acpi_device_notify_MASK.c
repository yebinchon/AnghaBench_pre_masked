
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct acpi_device {TYPE_1__* handler; } ;
struct acpi_bus_type {int (* setup ) (struct device*) ;struct acpi_device* (* find_companion ) (struct device*) ;} ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
struct TYPE_2__ {int (* bind ) (struct device*) ;} ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct acpi_device*) ;
 int FUNC_4 (struct device*) ;
 struct acpi_bus_type* FUNC_5 (struct device*) ;
 int FUNC_6 (int ,int ,struct acpi_buffer*) ;
 scalar_t__ FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (scalar_t__) ;
 struct acpi_device* FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_3)
{
 struct acpi_bus_type *VAR_4 = FUNC_5(VAR_3);
 struct acpi_device *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, ((void*)0));
 if (VAR_6 && VAR_4) {
  struct acpi_device *VAR_7;

  VAR_7 = VAR_4->find_companion(VAR_3);
  if (!VAR_7) {
   FUNC_2("Unable to get handle for %s\n", FUNC_8(VAR_3));
   VAR_6 = -VAR_2;
   goto out;
  }
  VAR_6 = FUNC_3(VAR_3, VAR_7);
  if (VAR_6)
   goto out;
 }
 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5)
  goto out;

 if (FUNC_7(VAR_3))
  FUNC_4(VAR_3);

 if (VAR_4 && VAR_4->setup)
  VAR_4->setup(VAR_3);
 else if (VAR_5->handler && VAR_5->handler->bind)
  VAR_5->handler->bind(VAR_3);

 out:
 return VAR_6;
}
