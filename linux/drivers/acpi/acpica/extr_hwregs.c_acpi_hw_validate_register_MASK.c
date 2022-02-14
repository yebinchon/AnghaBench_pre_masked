
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct acpi_generic_address {scalar_t__ space_id; int access_width; scalar_t__ bit_width; scalar_t__ bit_offset; int address; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,struct acpi_generic_address*,scalar_t__) ;

acpi_status
FUNC_5(struct acpi_generic_address *VAR_7,
     u8 VAR_8, u64 *VAR_9)
{
 u8 VAR_10;
 u8 VAR_11;



 if (!VAR_7) {
  return (VAR_3);
 }






 FUNC_1(VAR_9, &VAR_7->address);
 if (!(*VAR_9)) {
  return (VAR_2);
 }



 if ((VAR_7->space_id != VAR_1) &&
     (VAR_7->space_id != VAR_0)) {
  FUNC_0((VAR_4,
       "Unsupported address space: 0x%X", VAR_7->space_id));
  return (VAR_6);
 }



 if (VAR_7->access_width > 4) {
  FUNC_0((VAR_4,
       "Unsupported register access width: 0x%X",
       VAR_7->access_width));
  return (VAR_6);
 }



 VAR_11 =
     FUNC_4(*VAR_9, VAR_7, VAR_8);
 VAR_10 =
     FUNC_2(VAR_7->bit_offset + VAR_7->bit_width, VAR_11);
 if (VAR_8 < VAR_10) {
  FUNC_3((VAR_4,
         "Requested bit width 0x%X is smaller than register bit width 0x%X",
         VAR_8, VAR_10));
  return (VAR_6);
 }

 return (VAR_5);
}
