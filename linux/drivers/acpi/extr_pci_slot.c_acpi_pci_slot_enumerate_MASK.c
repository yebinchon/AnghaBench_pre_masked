
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int bridge; } ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int,int ,int *,struct pci_bus*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(struct pci_bus *VAR_3)
{
 acpi_handle VAR_4 = FUNC_0(VAR_3->bridge);

 if (VAR_4) {
  FUNC_2(&VAR_2);
  FUNC_1(VAR_0, VAR_4, 1,
        VAR_1, ((void*)0), VAR_3, ((void*)0));
  FUNC_3(&VAR_2);
 }
}
