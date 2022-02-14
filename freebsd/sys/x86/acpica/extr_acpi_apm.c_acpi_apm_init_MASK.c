
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int acpi_dev_t; int acpi_clone; int apm_cdevs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct acpi_softc*) ;
 int FUNC_2 (int *,int ,int ,int ,int,char*) ;

void
FUNC_3(struct acpi_softc *VAR_3)
{


 FUNC_0(&VAR_3->apm_cdevs);
 VAR_3->acpi_clone = FUNC_1(VAR_3->acpi_dev_t, VAR_3);

 FUNC_2(&VAR_2, 0, VAR_1, VAR_0, 0660, "apmctl");
 FUNC_2(&VAR_2, 0, VAR_1, VAR_0, 0664, "apm");
}
