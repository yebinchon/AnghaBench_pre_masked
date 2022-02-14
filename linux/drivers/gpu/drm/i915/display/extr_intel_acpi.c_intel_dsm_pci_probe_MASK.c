
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int * acpi_handle ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static acpi_handle FUNC_4(struct pci_dev *VAR_3)
{
 acpi_handle VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev);
 if (!VAR_4)
  return ((void*)0);

 if (!FUNC_2(VAR_4, &VAR_2, VAR_1,
       1 << VAR_0)) {
  FUNC_1("no _DSM method for intel device\n");
  return ((void*)0);
 }

 FUNC_3(VAR_4);

 return VAR_4;
}
