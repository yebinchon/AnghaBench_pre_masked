
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_pci_root {int osc_control_set; int osc_support_set; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 struct acpi_pci_root* FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_pci_root*,int,int*) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (struct acpi_pci_root*,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_9 ;

acpi_status FUNC_8(acpi_handle VAR_10, u32 *VAR_11, u32 VAR_12)
{
 struct acpi_pci_root *VAR_13;
 acpi_status VAR_14 = VAR_2;
 u32 VAR_15, VAR_16[3];

 if (!VAR_11)
  return VAR_0;

 VAR_15 = *VAR_11 & VAR_6;
 if ((VAR_15 & VAR_12) != VAR_12)
  return VAR_4;

 VAR_13 = FUNC_2(VAR_10);
 if (!VAR_13)
  return VAR_1;

 FUNC_6(&VAR_9);

 *VAR_11 = VAR_15 | VAR_13->osc_control_set;

 if ((VAR_13->osc_control_set & VAR_15) == VAR_15)
  goto out;


 while (*VAR_11) {
  VAR_14 = FUNC_3(VAR_13, VAR_13->osc_support_set, VAR_11);
  if (FUNC_0(VAR_14))
   goto out;
  if (VAR_15 == *VAR_11)
   break;
  FUNC_5(VAR_13, "platform does not support",
       VAR_15 & ~(*VAR_11));
  VAR_15 = *VAR_11;
 }

 if ((VAR_15 & VAR_12) != VAR_12) {
  FUNC_5(VAR_13, "not requesting control; platform does not support",
       VAR_12 & ~(VAR_15));
  VAR_14 = VAR_3;
  goto out;
 }

 VAR_16[VAR_7] = 0;
 VAR_16[VAR_8] = VAR_13->osc_support_set;
 VAR_16[VAR_5] = VAR_15;
 VAR_14 = FUNC_4(VAR_10, VAR_16, VAR_11);
 if (FUNC_1(VAR_14))
  VAR_13->osc_control_set = *VAR_11;
out:
 FUNC_7(&VAR_9);
 return VAR_14;
}
