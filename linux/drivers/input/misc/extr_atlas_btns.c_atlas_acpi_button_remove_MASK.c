
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_2)
{
 acpi_status VAR_3;

 VAR_3 = FUNC_1(VAR_2->handle,
    0x81, &VAR_0);
 if (FUNC_0(VAR_3))
  FUNC_3("error removing addr spc handler\n");

 FUNC_2(VAR_1);

 return 0;
}
