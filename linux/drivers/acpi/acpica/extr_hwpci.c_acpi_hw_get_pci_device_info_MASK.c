
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef void* u16 ;
struct acpi_pci_id {void* bus; int function; int device; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_object_type ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (struct acpi_pci_id*,int ,scalar_t__*,int) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;

__attribute__((used)) static acpi_status
FUNC_7(struct acpi_pci_id *VAR_11,
       acpi_handle VAR_12,
       u16 *VAR_13, u8 *VAR_14)
{
 acpi_status VAR_15;
 acpi_object_type VAR_16;
 u64 VAR_17;
 u64 VAR_18;



 VAR_15 = FUNC_4(VAR_12, &VAR_16);
 if (FUNC_0(VAR_15)) {
  return (VAR_15);
 }

 if (VAR_16 != VAR_0) {
  return (VAR_1);
 }



 VAR_15 = FUNC_6(VAR_3,
       VAR_12, &VAR_17);
 if (FUNC_0(VAR_15)) {
  return (VAR_1);
 }





 VAR_11->device = FUNC_1(FUNC_2(VAR_17));
 VAR_11->function = FUNC_3(FUNC_2(VAR_17));





 if (*VAR_14) {
  VAR_11->bus = *VAR_13;
 }






 *VAR_14 = VAR_2;
 VAR_15 = FUNC_5(VAR_11,
      VAR_4,
      &VAR_18, 8);
 if (FUNC_0(VAR_15)) {
  return (VAR_15);
 }



 VAR_18 &= VAR_7;

 if ((VAR_18 != VAR_8) &&
     (VAR_18 != VAR_9)) {
  return (VAR_1);
 }



 VAR_15 = FUNC_5(VAR_11,
      VAR_5,
      &VAR_18, 8);
 if (FUNC_0(VAR_15)) {
  return (VAR_15);
 }

 *VAR_14 = VAR_10;
 VAR_11->bus = (u16)VAR_18;



 VAR_15 = FUNC_5(VAR_11,
      VAR_6,
      &VAR_18, 8);
 if (FUNC_0(VAR_15)) {
  return (VAR_15);
 }

 *VAR_13 = (u16)VAR_18;
 return (VAR_1);
}
