
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int reference_count; int flags; int gpe; int handle; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct acpi_ec*) ;
 int FUNC_3 (struct acpi_ec*,int) ;
 int FUNC_4 (struct acpi_ec*) ;
 int VAR_9 ;
 int FUNC_5 (struct acpi_ec*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct acpi_ec*,int) ;
 int FUNC_7 (struct acpi_ec*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int *,int *,struct acpi_ec*) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int *,struct acpi_ec*) ;
 int FUNC_10 (int ,int ,int,int ,int *,struct acpi_ec*,int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct acpi_ec *VAR_12, bool VAR_13)
{
 acpi_status VAR_14;

 FUNC_6(VAR_12, 0);

 if (!FUNC_13(VAR_4, &VAR_12->flags)) {
  FUNC_4(VAR_12);
  VAR_14 = FUNC_8(VAR_12->handle,
           VAR_0,
           &VAR_11,
           ((void*)0), VAR_12);
  if (FUNC_0(VAR_14)) {
   if (VAR_14 == VAR_3) {






    FUNC_11("Fail in evaluating the _REG object"
     " of EC device. Broken bios is suspected.\n");
   } else {
    FUNC_7(VAR_12, 0);
    return -VAR_8;
   }
  }
  FUNC_12(VAR_4, &VAR_12->flags);
 }

 if (!VAR_13)
  return 0;

 if (!FUNC_13(VAR_5, &VAR_12->flags)) {

  FUNC_10(VAR_2, VAR_12->handle, 1,
        VAR_10,
        ((void*)0), VAR_12, ((void*)0));
  FUNC_12(VAR_5, &VAR_12->flags);
 }
 if (!FUNC_13(VAR_6, &VAR_12->flags)) {
  VAR_14 = FUNC_9(((void*)0), VAR_12->gpe,
       VAR_1,
       &VAR_9, VAR_12);

  if (FUNC_1(VAR_14)) {
   FUNC_12(VAR_6, &VAR_12->flags);
   FUNC_5(VAR_12);
   if (FUNC_13(VAR_7, &VAR_12->flags) &&
       VAR_12->reference_count >= 1)
    FUNC_3(VAR_12, 1);
  }
 }

 FUNC_2(VAR_12);

 return 0;
}
