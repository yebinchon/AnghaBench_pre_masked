
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct acpi_address_range {scalar_t__ end_address; scalar_t__ start_address; struct acpi_address_range* next; int region_node; } ;
typedef scalar_t__ acpi_physical_address ;
typedef size_t acpi_adr_space_type ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_address_range** VAR_4 ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_5 ;

u32
FUNC_7(acpi_adr_space_type VAR_6,
       acpi_physical_address VAR_7, u32 VAR_8, u8 VAR_9)
{
 struct acpi_address_range *VAR_10;
 acpi_physical_address VAR_11;
 char *VAR_12;
 u32 VAR_13 = 0;

 FUNC_2(VAR_5);

 if ((VAR_6 != VAR_1) &&
     (VAR_6 != VAR_0)) {
  FUNC_6(0);
 }

 VAR_10 = VAR_4[VAR_6];
 VAR_11 = VAR_7 + VAR_8 - 1;



 while (VAR_10) {
  if ((VAR_7 <= VAR_10->end_address) &&
      (VAR_11 >= VAR_10->start_address)) {



   VAR_13++;
   if (VAR_9) {
    VAR_12 =
        FUNC_4(VAR_10->
            region_node,
            VAR_3);

    FUNC_3((VAR_2,
           "%s range 0x%8.8X%8.8X-0x%8.8X%8.8X conflicts with OpRegion 0x%8.8X%8.8X-0x%8.8X%8.8X (%s)",
           FUNC_5(VAR_6),
           FUNC_0(VAR_7),
           FUNC_0(VAR_11),
           FUNC_0(VAR_10->
         start_address),
           FUNC_0(VAR_10->
         end_address),
           VAR_12));
    FUNC_1(VAR_12);
   }
  }

  VAR_10 = VAR_10->next;
 }

 FUNC_6(VAR_13);
}
