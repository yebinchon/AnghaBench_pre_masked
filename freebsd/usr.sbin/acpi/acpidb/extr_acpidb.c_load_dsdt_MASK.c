
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Length; } ;
typedef TYPE_1__ u_int8_t ;
struct stat {int st_size; } ;
typedef int off_t ;
typedef int mode_t ;
typedef int filetmp ;
typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_NEW_TABLE_DESC ;
typedef int ACPI_ADR_SPACE_HANDLER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int ,int **) ;
 int FUNC_1 () ;
 scalar_t__ VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_5 (int) ;
 TYPE_1__ VAR_29 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int,struct stat*) ;
 TYPE_1__* FUNC_8 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_9 (TYPE_1__*,size_t) ;
 int FUNC_10 (char const*,int,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,int,char*,char const*) ;
 int VAR_30 ;
 int FUNC_13 (char*,char const*,int) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_17(const char *VAR_31)
{
 char VAR_32[VAR_15];
 ACPI_NEW_TABLE_DESC *VAR_33;
 u_int8_t *VAR_34;
 struct stat VAR_35;
 int VAR_36, VAR_37, VAR_38;

 VAR_38 = FUNC_10(VAR_31, VAR_12, 0);
 if (VAR_38 == -1) {
  FUNC_11("open");
  return (-1);
 }
 if (FUNC_7(VAR_38, &VAR_35) == -1) {
  FUNC_11("fstat");
  FUNC_5(VAR_38);
  return (-1);
 }
 VAR_34 = FUNC_8(((void*)0), (size_t)VAR_35.st_size, VAR_16, VAR_10, VAR_38, (off_t)0);
 FUNC_5(VAR_38);
 if (VAR_34 == ((void*)0)) {
  FUNC_11("mmap");
  return (-1);
 }
 if ((VAR_37 = FUNC_3()) != VAR_8) {
  FUNC_9(VAR_34, (size_t)VAR_35.st_size);
  return (-1);
 }




 if (FUNC_14((char *)VAR_34, "DSDT", 4) == 0) {
  VAR_36 = 0;
  FUNC_13(VAR_32, VAR_31, sizeof(VAR_32));
 } else {
  VAR_36 = 1;
  mode_t VAR_39 = (VAR_19 | VAR_20 | VAR_17 | VAR_18);
  VAR_29.Length = sizeof(ACPI_TABLE_HEADER) + VAR_35.st_size;
  if ((size_t)FUNC_12(VAR_32, sizeof(VAR_32), "%s.tmp",
      VAR_31) > sizeof(VAR_32) - 1) {
   FUNC_6(VAR_30, "file name too long\n");
   FUNC_9(VAR_34, (size_t)VAR_35.st_size);
   return (-1);
  }
  VAR_38 = FUNC_10(VAR_32, VAR_14 | VAR_11 | VAR_13, VAR_39);
  if (VAR_38 == -1) {
   FUNC_11("open");
   FUNC_9(VAR_34, (size_t)VAR_35.st_size);
   return (-1);
  }
  FUNC_16(VAR_38, &VAR_29, sizeof(ACPI_TABLE_HEADER));

  FUNC_16(VAR_38, VAR_34, VAR_35.st_size);
  FUNC_5(VAR_38);
 }
 FUNC_9(VAR_34, (size_t)VAR_35.st_size);




 if ((VAR_37 = FUNC_4(VAR_7,
   VAR_6,
   (ACPI_ADR_SPACE_HANDLER)VAR_28,
   ((void*)0), ((void*)0))) != VAR_8) {
  FUNC_6(VAR_30, "could not initialise SystemMemory handler: %d\n", VAR_37);
  return (-1);
 }
 if ((VAR_37 = FUNC_4(VAR_7,
   VAR_5,
   (ACPI_ADR_SPACE_HANDLER)VAR_27,
   ((void*)0), ((void*)0))) != VAR_8) {
  FUNC_6(VAR_30, "could not initialise SystemIO handler: %d\n", VAR_37);
  return (-1);
 }
 if ((VAR_37 = FUNC_4(VAR_7,
   VAR_3,
   (ACPI_ADR_SPACE_HANDLER)VAR_25,
   ((void*)0), ((void*)0))) != VAR_8) {
  FUNC_6(VAR_30, "could not initialise PciConfig handler: %d\n", VAR_37);
  return (-1);
 }
 if ((VAR_37 = FUNC_4(VAR_7,
   VAR_1,
   (ACPI_ADR_SPACE_HANDLER)VAR_23,
   ((void*)0), ((void*)0))) != VAR_8) {
  FUNC_6(VAR_30, "could not initialise EC handler: %d\n", VAR_37);
  return (-1);
 }
 if ((VAR_37 = FUNC_4(VAR_7,
   VAR_4,
   (ACPI_ADR_SPACE_HANDLER)VAR_26,
   ((void*)0), ((void*)0))) != VAR_8) {
  FUNC_6(VAR_30, "could not initialise SMBUS handler: %d\n", VAR_37);
  return (-1);
 }
 if ((VAR_37 = FUNC_4(VAR_7,
   VAR_0,
   (ACPI_ADR_SPACE_HANDLER)VAR_22,
   ((void*)0), ((void*)0))) != VAR_8) {
  FUNC_6(VAR_30, "could not initialise CMOS handler: %d\n", VAR_37);
  return (-1);
 }
 if ((VAR_37 = FUNC_4(VAR_7,
   VAR_2,
   (ACPI_ADR_SPACE_HANDLER)VAR_24,
   ((void*)0), ((void*)0))) != VAR_8) {
  FUNC_6(VAR_30, "could not initialise PCI BAR TARGET handler: %d\n", VAR_37);
  return (-1);
 }

 VAR_33 = ((void*)0);
 FUNC_0(VAR_32, VAR_21, &VAR_33);

 FUNC_2();
 VAR_9 = 0;
 FUNC_1();

 if (VAR_36) {
  FUNC_15(VAR_32);
 }

 return (0);
}
