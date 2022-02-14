
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_table_header {int signature; int oem_table_id; int oem_id; } ;
typedef int acpi_status ;
struct TYPE_6__ {size_t current_table_count; TYPE_2__* tables; } ;
struct TYPE_5__ {TYPE_1__* pointer; int signature; } ;
struct TYPE_4__ {int * oem_table_id; int * oem_id; int * signature; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (struct acpi_table_header*,int ,int) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int VAR_10 ;

acpi_status
FUNC_13(char *VAR_11,
     char *VAR_12, char *VAR_13, u32 *VAR_14)
{
 acpi_status VAR_15 = VAR_8;
 struct acpi_table_header VAR_16;
 u32 VAR_17;

 FUNC_3(VAR_10);



 if (!FUNC_7(VAR_11)) {
  FUNC_10(VAR_6);
 }



 if ((FUNC_11(VAR_12) > VAR_3) ||
     (FUNC_11(VAR_13) > VAR_4)) {
  FUNC_10(VAR_5);
 }



 FUNC_9(&VAR_16, 0, sizeof(struct acpi_table_header));
 FUNC_0(VAR_16.signature, VAR_11);
 FUNC_12(VAR_16.oem_id, VAR_12, VAR_3);
 FUNC_12(VAR_16.oem_table_id, VAR_13, VAR_4);



 (void)FUNC_5(VAR_1);
 for (VAR_17 = 0; VAR_17 < VAR_9.current_table_count; ++VAR_17) {
  if (FUNC_8(&(VAR_9.tables[VAR_17].signature),
      VAR_16.signature, VAR_2)) {



   continue;
  }



  if (!VAR_9.tables[VAR_17].pointer) {



   VAR_15 =
       FUNC_4(&VAR_9.
         tables[VAR_17]);
   if (FUNC_2(VAR_15)) {
    goto unlock_and_exit;
   }

   if (!VAR_9.tables[VAR_17].pointer) {
    continue;
   }
  }



  if (!FUNC_8
      (VAR_9.tables[VAR_17].pointer->signature,
       VAR_16.signature, VAR_2) && (!VAR_12[0]
             ||
             !FUNC_8
             (VAR_9.
              tables[VAR_17].
              pointer->oem_id,
              VAR_16.oem_id,
              VAR_3))
      && (!VAR_13[0]
   || !FUNC_8(VAR_9.tables[VAR_17].pointer->
       oem_table_id, VAR_16.oem_table_id,
       VAR_4))) {
   *VAR_14 = VAR_17;

   FUNC_1((VAR_0,
       "Found table [%4.4s]\n",
       VAR_16.signature));
   goto unlock_and_exit;
  }
 }
 VAR_15 = VAR_7;

unlock_and_exit:
 (void)FUNC_6(VAR_1);
 FUNC_10(VAR_15);
}
