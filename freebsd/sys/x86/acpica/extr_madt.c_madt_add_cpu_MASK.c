
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct lapic_info {int la_enabled; int la_acpi_id; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int ) ;
 struct lapic_info* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static void
FUNC_3(u_int VAR_4, u_int VAR_5, u_int VAR_6)
{
 struct lapic_info *VAR_7;





 if (VAR_1)
  FUNC_2("MADT: Found CPU APIC ID %u ACPI ID %u: %s\n",
      VAR_5, VAR_4, VAR_6 & VAR_0 ?
      "enabled" : "disabled");
 if (!(VAR_6 & VAR_0))
  return;
 if (VAR_5 > VAR_3) {
  FUNC_2("MADT: Ignoring local APIC ID %u (too high)\n",
      VAR_5);
  return;
 }

 VAR_7 = &VAR_2[VAR_5];
 FUNC_0(VAR_7->la_enabled == 0, ("Duplicate local APIC ID %u", VAR_5));
 VAR_7->la_enabled = 1;
 VAR_7->la_acpi_id = VAR_4;
 FUNC_1(VAR_5, 0);
}
