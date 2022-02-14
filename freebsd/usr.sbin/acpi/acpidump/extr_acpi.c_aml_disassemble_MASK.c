
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wrkdir ;
typedef int tmpstr ;
typedef scalar_t__ pid_t ;
typedef int buf ;
typedef int FILE ;
typedef int ACPI_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char*,char*,char*,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,char*,...) ;
 size_t FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char*,int,size_t,int ) ;
 char* FUNC_10 (char*) ;
 int * FUNC_11 (char*) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (char*) ;
 int * FUNC_14 (char const*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (char*,int,char*,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_19 (int*) ;
 int FUNC_20 (int,int *,int *) ;

void
FUNC_21(ACPI_TABLE_HEADER *VAR_11, ACPI_TABLE_HEADER *VAR_12)
{
 char VAR_13[VAR_2], VAR_14[VAR_2], VAR_15[VAR_2];
 const char *VAR_16 = "/acpdump.din";
 const char *VAR_17 = "/acpdump.dsl";
 const char *VAR_18;
 FILE *VAR_19;
 size_t VAR_20;
 int VAR_21, VAR_22;
 pid_t VAR_23;

 VAR_18 = FUNC_10("TMPDIR");
 if (VAR_18 == ((void*)0))
  VAR_18 = VAR_7;
 if (FUNC_14(VAR_18, VAR_13) == ((void*)0)) {
  FUNC_13("realpath tmp dir");
  return;
 }
 VAR_20 = sizeof(VAR_15) - FUNC_17(VAR_16);
 if ((size_t)FUNC_16(VAR_15, VAR_20, "%s/acpidump.XXXXXX", VAR_13) > VAR_20-1 ) {
  FUNC_7(VAR_8, "$TMPDIR too long\n");
  return;
 }
 if (FUNC_11(VAR_15) == ((void*)0)) {
  FUNC_13("mkdtemp tmp working dir");
  return;
 }
 VAR_20 = (size_t)FUNC_16(VAR_14, sizeof(VAR_14), "%s%s", VAR_15, VAR_16);
 FUNC_0(VAR_20 <= sizeof(VAR_14) - 1);
 VAR_21 = FUNC_12(VAR_14, VAR_0 | VAR_1, VAR_5 | VAR_6);
 if (VAR_21 < 0) {
  FUNC_13("iasl tmp file");
  return;
 }
 FUNC_20(VAR_21, VAR_11, VAR_12);
 FUNC_1(VAR_21);


 if ((VAR_23 = FUNC_6()) == 0) {
  FUNC_1(VAR_4);
  if (VAR_10 == 0)
   FUNC_1(VAR_3);
  FUNC_3("/usr/sbin/iasl", "iasl", "-d", VAR_14, ((void*)0));
  FUNC_2(1, "exec");
 }
 if (VAR_23 > 0)
  FUNC_19(&VAR_22);
 if (FUNC_18(VAR_14) < 0) {
  FUNC_13("unlink");
  goto out;
 }
 if (VAR_23 < 0) {
  FUNC_13("fork");
  goto out;
 }
 if (VAR_22 != 0) {
  FUNC_7(VAR_8, "iast exit status = %d\n", VAR_22);
 }


 VAR_20 = (size_t)FUNC_16(VAR_14, sizeof(VAR_14), "%s%s", VAR_15, VAR_17);
 FUNC_0(VAR_20 <= sizeof(VAR_14) - 1);
 VAR_19 = FUNC_5(VAR_14, "r");
 if (FUNC_18(VAR_14) < 0) {
  FUNC_13("unlink");
  goto out;
 }
 if (VAR_19 == ((void*)0)) {
  FUNC_13("iasl tmp file (read)");
  goto out;
 }
 while ((VAR_20 = FUNC_8(VAR_13, 1, sizeof(VAR_13), VAR_19)) > 0)
  FUNC_9(VAR_13, 1, VAR_20, VAR_9);
 FUNC_4(VAR_19);

    out:
 if (FUNC_15(VAR_15) < 0)
  FUNC_13("rmdir");
}
