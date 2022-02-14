
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hex_pattern ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 size_t FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (char*,size_t,int,int *) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char const*,char*,unsigned int*) ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,size_t,char const*,int,int) ;

int FUNC_12(int VAR_9, char **VAR_10)
{
 char VAR_11[1024];
 FILE *VAR_12 = VAR_7;
 FILE *VAR_13 = VAR_8;
 char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 const char *VAR_16 = VAR_2;
 char VAR_17[128];
 unsigned int VAR_18;
 int VAR_19;
 int VAR_20, VAR_21, VAR_22;
 size_t VAR_23;
 int VAR_24, VAR_25 = 0;

 while ((VAR_19 = FUNC_7(VAR_9, VAR_10, "i:o:p:xh")) != -1) {
  switch (VAR_19) {
   case 'i':
    VAR_14 = VAR_4;
    break;
   case 'o':
    VAR_15 = VAR_4;
    break;
   case 'p':
    VAR_16 = VAR_4;
    break;
   case 'x':
    VAR_3 = 1;
    break;
   case 'h':
   default:
    FUNC_10();
  }
 }

 if (VAR_5 != VAR_9 || VAR_5 == 1) {
  FUNC_4(VAR_6, "illegal arg \"%s\"\n", VAR_10[VAR_5]);
  FUNC_10();
 }

 if (VAR_14 && !(VAR_12 = FUNC_3(VAR_14, "r"))) {
  FUNC_4(VAR_6, "can not open \"%s\" for reading\n", VAR_14);
  FUNC_10();
 }

 if (VAR_15 && !(VAR_13 = FUNC_3(VAR_15, "w"))) {
  FUNC_4(VAR_6, "can not open \"%s\" for writing\n", VAR_15);
  FUNC_10();
 }

 VAR_24 = FUNC_9(VAR_16);

 if (VAR_24 == 0) {
  FUNC_4(VAR_6, "pattern cannot be empty\n");
  FUNC_10();
 }

 if (VAR_3) {
  int VAR_26;

  if ((VAR_24 / 2) > sizeof(VAR_17)) {
   FUNC_4(VAR_6, "provided hex pattern is too long\n");
   FUNC_10();
  }

  if (VAR_24 % 2 != 0) {
   FUNC_4(VAR_6, "the number of characters (hex) is incorrect\n");
   FUNC_10();
  }

  for (VAR_26 = 0; VAR_26 < (VAR_24 / 2); VAR_26++) {
   if (FUNC_8(VAR_16 + (VAR_26 * 2), "%2x", &VAR_18) < 0) {
    FUNC_4(VAR_6, "invalid hex digit around %d\n", VAR_26 * 2);
    FUNC_10();
   }
   VAR_17[VAR_26] = (char)VAR_18;
  }
 }

 while ((VAR_23 = FUNC_5(VAR_11, 1, sizeof(VAR_11), VAR_12)) > 0) {
  if (VAR_23 < sizeof(VAR_11)) {
   if (FUNC_1(VAR_12)) {
   FREAD_ERROR:
    FUNC_4(VAR_6, "fread error\n");
    return VAR_0;
   }
  }

  if (VAR_3) {
   VAR_25 = FUNC_11(VAR_11, VAR_23, VAR_17, (VAR_24 / 2),
      VAR_25);
  } else {
   VAR_25 = FUNC_11(VAR_11, VAR_23, VAR_16, VAR_24, VAR_25);
  }

  if (!FUNC_6(VAR_11, VAR_23, 1, VAR_13)) {
  FWRITE_ERROR:
   FUNC_4(VAR_6, "fwrite error\n");
   return VAR_0;
  }
 }

 if (FUNC_1(VAR_12)) {
  goto FREAD_ERROR;
 }

 if (FUNC_2(VAR_13)) {
  goto FWRITE_ERROR;
 }

 FUNC_0(VAR_12);
 FUNC_0(VAR_13);

 return VAR_1;
}
