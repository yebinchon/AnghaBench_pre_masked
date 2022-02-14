
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ bridge_d3; } ;
struct acpi_buffer {int member_0; char* member_1; } ;
typedef int acpi_method_name ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {int atpx_detected; int bridge_pm_usable; TYPE_1__ atpx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct acpi_buffer*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_dev*) ;
 TYPE_2__ VAR_3 ;
 struct pci_dev* FUNC_4 (int,struct pci_dev*) ;
 struct pci_dev* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static bool FUNC_7(void)
{
 char VAR_4[255] = { 0 };
 struct acpi_buffer VAR_5 = {sizeof(VAR_4), VAR_4};
 struct pci_dev *VAR_6 = ((void*)0);
 bool VAR_7 = 0;
 int VAR_8 = 0;
 bool VAR_9 = 0;
 struct pci_dev *VAR_10;

 while ((VAR_6 = FUNC_4(VAR_2 << 8, VAR_6)) != ((void*)0)) {
  VAR_8++;

  VAR_7 |= (FUNC_3(VAR_6) == 1);

  VAR_10 = FUNC_5(VAR_6);
  VAR_9 |= VAR_10 && VAR_10->bridge_d3;
  FUNC_1(VAR_6);
 }

 while ((VAR_6 = FUNC_4(VAR_1 << 8, VAR_6)) != ((void*)0)) {
  VAR_8++;

  VAR_7 |= (FUNC_3(VAR_6) == 1);

  VAR_10 = FUNC_5(VAR_6);
  VAR_9 |= VAR_10 && VAR_10->bridge_d3;
  FUNC_1(VAR_6);
 }

 if (VAR_7 && VAR_8 == 2) {
  FUNC_0(VAR_3.atpx.handle, VAR_0, &VAR_5);
  FUNC_6("vga_switcheroo: detected switching method %s handle\n",
   VAR_4);
  VAR_3.atpx_detected = 1;
  VAR_3.bridge_pm_usable = VAR_9;
  FUNC_2();
  return 1;
 }
 return 0;
}
