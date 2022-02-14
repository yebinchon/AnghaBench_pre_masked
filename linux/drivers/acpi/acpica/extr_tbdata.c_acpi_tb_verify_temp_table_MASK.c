
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char* ascii; int integer; } ;
struct acpi_table_desc {int flags; int address; TYPE_1__ signature; int length; int pointer; } ;
typedef scalar_t__ acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (struct acpi_table_desc*,int *) ;
 int FUNC_7 (struct acpi_table_desc*) ;
 scalar_t__ FUNC_8 (struct acpi_table_desc*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_7 ;

acpi_status
FUNC_12(struct acpi_table_desc *VAR_8,
     char *VAR_9, u32 *VAR_10)
{
 acpi_status VAR_11 = VAR_5;

 FUNC_5(VAR_7);



 VAR_11 = FUNC_8(VAR_8);
 if (FUNC_3(VAR_11)) {
  FUNC_11(VAR_4);
 }



 if (VAR_9 &&
     !FUNC_1(&VAR_8->signature, VAR_9)) {
  FUNC_0((VAR_3,
     "Invalid signature 0x%X for ACPI table, expected [%s]",
     VAR_8->signature.integer, VAR_9));
  VAR_11 = VAR_1;
  goto invalidate_and_exit;
 }

 if (VAR_6) {



  VAR_11 =
      FUNC_9(VAR_8->pointer,
         VAR_8->length);
  if (FUNC_3(VAR_11)) {
   FUNC_2((VAR_3, VAR_4,
     "%4.4s 0x%8.8X%8.8X"
     " Attempted table install failed",
     FUNC_10(VAR_8->
             signature.
             ascii) ?
     VAR_8->signature.ascii : "????",
     FUNC_4(VAR_8->
          address)));

   goto invalidate_and_exit;
  }



  if (VAR_10) {
   VAR_11 =
       FUNC_6(VAR_8, VAR_10);
   if (FUNC_3(VAR_11)) {
    if (VAR_11 != VAR_2) {
     FUNC_2((VAR_3, VAR_11,
       "%4.4s 0x%8.8X%8.8X"
       " Table is already loaded",
       FUNC_10
       (VAR_8->signature.
        ascii) ? VAR_8->
       signature.
       ascii : "????",
       FUNC_4
       (VAR_8->address)));
    }

    goto invalidate_and_exit;
   }
  }

  VAR_8->flags |= VAR_0;
 }

 FUNC_11(VAR_11);

invalidate_and_exit:
 FUNC_7(VAR_8);
 FUNC_11(VAR_11);
}
