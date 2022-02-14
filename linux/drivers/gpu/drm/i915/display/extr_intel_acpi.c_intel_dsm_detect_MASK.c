
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct acpi_buffer {int member_0; char* member_1; } ;
typedef int acpi_method_name ;
typedef int * acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,struct acpi_buffer*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int,struct pci_dev*) ;

__attribute__((used)) static bool FUNC_4(void)
{
 acpi_handle VAR_2 = ((void*)0);
 char VAR_3[255] = { 0 };
 struct acpi_buffer VAR_4 = {sizeof(VAR_3), VAR_3};
 struct pci_dev *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 while ((VAR_5 = FUNC_3(VAR_1 << 8, VAR_5)) != ((void*)0)) {
  VAR_6++;
  VAR_2 = FUNC_2(VAR_5) ?: VAR_2;
 }

 if (VAR_6 == 2 && VAR_2) {
  FUNC_1(VAR_2, VAR_0, &VAR_4);
  FUNC_0("vga_switcheroo: detected DSM switching method %s handle\n",
     VAR_3);
  return 1;
 }

 return 0;
}
