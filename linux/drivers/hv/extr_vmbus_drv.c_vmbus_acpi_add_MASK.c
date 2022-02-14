
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; struct acpi_device* parent; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 struct acpi_device* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 () ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_6)
{
 acpi_status VAR_7;
 int VAR_8 = -VAR_0;
 struct acpi_device *VAR_9;

 VAR_2 = VAR_6;

 VAR_7 = FUNC_1(VAR_6->handle, VAR_1,
     VAR_5, ((void*)0));

 if (FUNC_0(VAR_7))
  goto acpi_walk_err;




 for (VAR_9 = VAR_6->parent; VAR_9; VAR_9 = VAR_9->parent) {
  VAR_7 = FUNC_1(VAR_9->handle, VAR_1,
          VAR_5, ((void*)0));

  if (FUNC_0(VAR_7))
   continue;
  if (VAR_3) {
   FUNC_4();
   break;
  }
 }
 VAR_8 = 0;

acpi_walk_err:
 FUNC_2(&VAR_4);
 if (VAR_8)
  FUNC_3(VAR_6);
 return VAR_8;
}
