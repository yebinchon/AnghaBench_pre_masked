
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct acpi_table_header {int revision; } ;
struct acpi_table_fadt {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,struct acpi_table_header*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

void FUNC_6(struct acpi_table_header *VAR_7, u32 VAR_8)
{





 if (VAR_8 > sizeof(struct acpi_table_fadt)) {
  FUNC_0((VAR_2,
       "FADT (revision %u) is longer than %s length, "
       "truncating length %u to %u",
       VAR_7->revision, VAR_0,
       VAR_8,
       (u32)sizeof(struct acpi_table_fadt)));
 }



 FUNC_5(&VAR_5, 0, sizeof(struct acpi_table_fadt));



 FUNC_4(&VAR_5, VAR_7,
        FUNC_1(VAR_8, sizeof(struct acpi_table_fadt)));



 VAR_6 = VAR_3;
 if (VAR_5.flags & VAR_1) {
  VAR_6 = VAR_4;
 }



 FUNC_2();



 FUNC_3();
}
