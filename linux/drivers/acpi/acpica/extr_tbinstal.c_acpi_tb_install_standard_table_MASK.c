
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ascii; } ;
struct acpi_table_desc {int pointer; TYPE_1__ signature; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_physical_address ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (struct acpi_table_desc*,int ,int ) ;
 int FUNC_7 (struct acpi_table_desc*,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct acpi_table_desc*) ;
 int FUNC_10 (struct acpi_table_desc*) ;
 scalar_t__ FUNC_11 (struct acpi_table_desc*,int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int VAR_7 ;

acpi_status
FUNC_15(acpi_physical_address VAR_8,
          u8 VAR_9,
          u8 VAR_10, u8 VAR_11, u32 *VAR_12)
{
 u32 VAR_13;
 acpi_status VAR_14 = VAR_5;
 struct acpi_table_desc VAR_15;

 FUNC_4(VAR_7);



 VAR_14 = FUNC_6(&VAR_15, VAR_8, VAR_9);
 if (FUNC_2(VAR_14)) {
  FUNC_1((VAR_4,
       "Could not acquire table length at %8.8X%8.8X",
       FUNC_3(VAR_8)));
  FUNC_14(VAR_14);
 }





 if (!VAR_10 &&
     VAR_6 &&
     FUNC_0(&VAR_15.signature, VAR_1)) {
  FUNC_5(("Ignoring installation of %4.4s at %8.8X%8.8X",
      VAR_15.signature.ascii,
      FUNC_3(VAR_8)));
  goto release_and_exit;
 }



 (void)FUNC_12(VAR_0);



 VAR_14 = FUNC_11(&VAR_15, ((void*)0), &VAR_13);
 if (FUNC_2(VAR_14)) {
  if (VAR_14 == VAR_3) {
   FUNC_10(&VAR_15);
   (void)FUNC_13(VAR_0);
   *VAR_12 = VAR_13;
   FUNC_14(VAR_5);
  }
  goto unlock_and_exit;
 }



 FUNC_7(&VAR_15, VAR_11,
         VAR_12);



 (void)FUNC_13(VAR_0);
 FUNC_8(VAR_2, VAR_15.pointer);
 (void)FUNC_12(VAR_0);

unlock_and_exit:



 (void)FUNC_13(VAR_0);

release_and_exit:



 FUNC_9(&VAR_15);
 FUNC_14(VAR_14);
}
