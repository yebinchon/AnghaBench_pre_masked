
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int ascii; } ;
struct acpi_table_desc {int flags; TYPE_1__ signature; scalar_t__ pointer; int address; int owner_id; } ;
typedef int acpi_status ;
struct TYPE_4__ {size_t current_table_count; struct acpi_table_desc* tables; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;



 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct acpi_table_desc*) ;

void FUNC_5(char *VAR_3)
{
 u32 VAR_4;
 struct acpi_table_desc *VAR_5;
 acpi_status VAR_6;



 FUNC_2("Idx ID  Status Type                    "
         "TableHeader (Sig, Address, Length, Misc)\n");



 for (VAR_4 = 0; VAR_4 < VAR_2.current_table_count; VAR_4++) {
  VAR_5 = &VAR_2.tables[VAR_4];



  FUNC_2("%3u %.2u ", VAR_4, VAR_5->owner_id);



  if (!(VAR_5->flags & VAR_0)) {
   FUNC_2("NotLoaded ");
  } else {
   FUNC_2(" Loaded ");
  }

  switch (VAR_5->flags & VAR_1) {
  case 130:

   FUNC_2("External/virtual ");
   break;

  case 129:

   FUNC_2("Internal/physical ");
   break;

  case 128:

   FUNC_2("Internal/virtual ");
   break;

  default:

   FUNC_2("INVALID TYPE    ");
   break;
  }



  VAR_6 = FUNC_4(VAR_5);
  if (FUNC_0(VAR_6)) {
   return;
  }



  if (VAR_5->pointer) {
   FUNC_3(VAR_5->address,
         VAR_5->pointer);
  } else {


   FUNC_1(("%4.4s - Table has been unloaded",
       VAR_5->signature.ascii));
  }
 }
}
