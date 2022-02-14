
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int flags; int tdev; } ;
typedef int * acpi_handle ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;

acpi_handle FUNC_1(struct ata_device *VAR_1)
{
 return VAR_1->flags & VAR_0 ?
   ((void*)0) : FUNC_0(&VAR_1->tdev);
}
