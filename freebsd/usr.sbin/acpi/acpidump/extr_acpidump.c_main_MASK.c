
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_TABLE_HEADER ;
typedef int ACPI_TABLE_FADT ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_6 (int *,int ,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (char*) ;
 int VAR_5 ;
 int FUNC_10 (char*,...) ;

int
FUNC_11(int VAR_6, char *VAR_7[])
{
 ACPI_TABLE_HEADER *VAR_8, *VAR_9;
 int VAR_10;
 char *VAR_11;
 char *VAR_12, *VAR_13;

 VAR_12 = VAR_13 = ((void*)0);
 VAR_11 = VAR_7[0];

 if (VAR_6 < 2)
  FUNC_9(VAR_11);

 while ((VAR_10 = FUNC_5(VAR_6, VAR_7, "dhtvf:o:")) != -1) {
  switch (VAR_10) {
  case 'd':
   VAR_1 = 1;
   break;
  case 't':
   VAR_4 = 1;
   break;
  case 'v':
   VAR_5 = 1;
   break;
  case 'f':
   VAR_12 = VAR_2;
   break;
  case 'o':
   VAR_13 = VAR_2;
   break;
  case 'h':
  default:
   FUNC_9(VAR_11);

  }
 }
 VAR_6 -= VAR_3;
 VAR_7 += VAR_3;


 if (VAR_12 != ((void*)0)) {
  if (VAR_1 == 0 && VAR_4 == 0) {
   FUNC_10("Need to specify -d or -t with DSDT input file");
   FUNC_9(VAR_11);
  } else if (VAR_4 != 0) {
   FUNC_10("Can't use -t with DSDT input file");
   FUNC_9(VAR_11);
  }
  if (VAR_5)
   FUNC_10("loading DSDT file: %s", VAR_12);
  VAR_8 = FUNC_2(VAR_12);
 } else {
  if (VAR_5)
   FUNC_10("loading RSD PTR from /dev/mem");
  VAR_8 = FUNC_7();
 }


 if (VAR_4) {
  if (VAR_5)
   FUNC_10("printing various SDT tables");
  FUNC_8(VAR_8);
 }


 if (VAR_12 == ((void*)0)) {
  VAR_9 = FUNC_6(VAR_8, VAR_0, ((void*)0));
  VAR_9 = FUNC_1((ACPI_TABLE_FADT *)VAR_9);
 } else {
  VAR_9 = VAR_8;
  VAR_8 = ((void*)0);
 }


 if (VAR_13 != ((void*)0)) {
  if (VAR_5)
   FUNC_10("saving DSDT file: %s", VAR_13);
  FUNC_3(VAR_13, VAR_8, VAR_9);
 }


 if (VAR_1) {
  if (VAR_5)
   FUNC_10("disassembling DSDT, iasl messages follow");
  FUNC_0(VAR_8, VAR_9);
  if (VAR_5)
   FUNC_10("iasl processing complete");
 }

 FUNC_4(0);
}
