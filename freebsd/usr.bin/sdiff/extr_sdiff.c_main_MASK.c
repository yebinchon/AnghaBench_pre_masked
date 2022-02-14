
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int FILE ;



 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 char* VAR_7 ;
 scalar_t__ FUNC_2 (char**,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 char** FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 char* VAR_8 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,char,char*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*,char**) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_14 (char const*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (int,char**,char*,int ,int *) ;
 char** VAR_11 ;
 int FUNC_19 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_20 (char*) ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int * VAR_17 ;
 scalar_t__ FUNC_21 (int *,int *,int *) ;
 scalar_t__ FUNC_22 (int*) ;
 int FUNC_23 (char*,char*) ;
 int FUNC_24 () ;
 char* FUNC_25 (char*,int) ;
 int VAR_18 ;
 int FUNC_26 (char*,char*,char*,...) ;
 scalar_t__ FUNC_27 (char*,char*) ;
 int FUNC_28 (char*) ;
 size_t FUNC_29 (void*,int ,int ,char const**) ;
 char* VAR_19 ;
 scalar_t__ FUNC_30 (char*) ;
 int FUNC_31 () ;
 int FUNC_32 (int ,int*,int ) ;
 int FUNC_33 (char*,char*) ;
 int VAR_20 ;
 char* FUNC_34 (int *) ;

int
FUNC_35(int VAR_21, char **VAR_22)
{
 FILE *VAR_23=((void*)0), *VAR_24, *VAR_25;
 size_t VAR_26 = 0, VAR_27 = VAR_5;
 int VAR_28, VAR_29[2] = {-1}, VAR_30;
 pid_t VAR_31=0;
 const char *VAR_32 = ((void*)0);
 char **VAR_33, *VAR_34 = VAR_8, *VAR_35, *VAR_36,
      *VAR_37, *VAR_38, *VAR_39, *VAR_40;
 int VAR_41;
 char VAR_42[] = "-I";
 char VAR_43[] = "--speed-large-files";
 if (!(VAR_33 = FUNC_4(VAR_21, sizeof(char **) * 2)))
  FUNC_8(2, "main");


 VAR_33[VAR_26++] = VAR_34;


 if ( FUNC_2(&VAR_33[VAR_26++], "-") < 0 )
  FUNC_8(2, "main");

 while ((VAR_28 = FUNC_18(VAR_21, VAR_22, "aBbdEHI:ilo:stWw:",
     VAR_14, ((void*)0))) != -1) {
  const char *VAR_44;

  switch (VAR_28) {

  case 132:
  case 131:
  case 129:
  case 128:
  case 'S':
  break;

  case 'a':
  case 'B':
  case 'b':
  case 'd':
  case 'E':
  case 'i':
  case 't':
  case 'W':
   VAR_33[1] = FUNC_25(VAR_33[1], sizeof(char) * FUNC_28(VAR_33[1]) + 2);



   if (VAR_28 == 'W')
    FUNC_26(VAR_33[1], "%sw", VAR_33[1]);
   else
    FUNC_26(VAR_33[1], "%s%c", VAR_33[1], VAR_28);
   break;
  case 'H':
   VAR_33[VAR_26++] = VAR_43;
   break;
  case 133:
   VAR_33[0] = VAR_34 = VAR_15;
   break;
  case 'I':
   VAR_2 = 1;
   VAR_33[VAR_26++] = VAR_42;
   VAR_33[VAR_26++] = VAR_15;
   break;
  case 'l':
   VAR_12 = 1;
   break;
  case 'o':
   VAR_32 = VAR_15;
   break;
  case 's':
   VAR_18 = 1;
   break;
  case 'w':
   VAR_27 = FUNC_29(VAR_15, VAR_6,
       VAR_1, &VAR_44);
   if (VAR_44)
    FUNC_9(2, "width is %s: %s", VAR_44, VAR_15);
   break;
  case 130:
   for (VAR_41 = 0; VAR_11[VAR_41] != ((void*)0); VAR_41++)
    FUNC_23("%s\n", VAR_11[VAR_41]);
   FUNC_11(0);
   break;
  default:
   FUNC_31();
   break;
  }
 }


 if (FUNC_27(VAR_33[1], "-") == 0 ) {
  for ( VAR_41 = 1; VAR_41 < VAR_21-1; VAR_41++) {
   VAR_33[VAR_41] = VAR_33[VAR_41+1];
  }
  VAR_33[VAR_26-1] = ((void*)0);
  VAR_26--;
 }

 VAR_21 -= VAR_16;
 VAR_22 += VAR_16;

 if (VAR_21 != 2)
  FUNC_31();

 if (VAR_32 && (VAR_17 = FUNC_14(VAR_32, "w")) == ((void*)0))
  FUNC_8(2, "could not open: %s", VAR_15);

 if ((VAR_19 = FUNC_17("TMPDIR")) == ((void*)0) || *VAR_19 == '\0')
  VAR_19 = VAR_7;

 VAR_35 = VAR_22[0];
 VAR_36 = VAR_22[1];
 VAR_37 = VAR_38 = ((void*)0);

 if (FUNC_27(VAR_35, VAR_36) == 0) {
  if ((VAR_37 = FUNC_20(VAR_35)))
   VAR_35 = VAR_36 = VAR_37;

 } else {
  if ((VAR_37 = FUNC_20(VAR_35)))
   VAR_35 = VAR_37;
  if ((VAR_38 = FUNC_20(VAR_36)))
   VAR_36 = VAR_38;
 }

 VAR_33[VAR_26++] = VAR_35;
 VAR_33[VAR_26++] = VAR_36;

 VAR_33[VAR_26++] = ((void*)0);


 VAR_20 = (VAR_27 - 3) / 2;

 if (VAR_20 > (VAR_3 - 3) / 2)
  FUNC_9(2, "width is too large: %zu", VAR_20);
 VAR_13 = VAR_20 * 2 + 3;

 if (FUNC_22(VAR_29))
  FUNC_8(2, "pipe");

 switch (VAR_31 = FUNC_15()) {
 case 0:


  FUNC_5(VAR_29[0]);
  if (FUNC_6(VAR_29[1], VAR_4) == -1)
   FUNC_8(2, "child could not duplicate descriptor");

  FUNC_5(VAR_29[1]);
  FUNC_10(VAR_34, VAR_33);
  FUNC_8(2, "could not execute diff: %s", VAR_34);
  break;
 case -1:
  FUNC_8(2, "could not fork");
  break;
 }



 FUNC_5(VAR_29[1]);


 if ((VAR_23 = FUNC_13(VAR_29[0], "r")) == ((void*)0))
  FUNC_8(2, "could not open diff pipe");

 if ((VAR_24 = FUNC_14(VAR_35, "r")) == ((void*)0))
  FUNC_8(2, "could not open %s", VAR_35);
 if ((VAR_25 = FUNC_14(VAR_36, "r")) == ((void*)0))
  FUNC_8(2, "could not open %s", VAR_36);
 if (!FUNC_19(VAR_24) || !FUNC_19(VAR_25)) {

  FUNC_12(VAR_24);
  FUNC_12(VAR_25);
  if (VAR_23 != ((void*)0))
   FUNC_12(VAR_23);
  if (VAR_37)
   if (FUNC_30(VAR_37))
    FUNC_33("Error deleting %s.", VAR_37);
  if (VAR_38)
   if (FUNC_30(VAR_38))
    FUNC_33("Error deleting %s.", VAR_38);
  FUNC_16(VAR_37);
  FUNC_16(VAR_38);
  FUNC_3(VAR_34, VAR_35, VAR_36);
 }

 VAR_9 = VAR_10 = 1;


 while (FUNC_21(VAR_23, VAR_24, VAR_25) != VAR_0)
  ;
 FUNC_12(VAR_23);


 if (FUNC_32(VAR_31, &VAR_30, 0) == -1 || !FUNC_1(VAR_30) ||
     FUNC_0(VAR_30) >= 2)
  FUNC_8(2, "diff exited abnormally.");


 if (VAR_37)
  if (FUNC_30(VAR_37))
   FUNC_33("Error deleting %s.", VAR_37);
 if (VAR_38)
  if (FUNC_30(VAR_38))
   FUNC_33("Error deleting %s.", VAR_38);
 FUNC_16(VAR_37);
 FUNC_16(VAR_38);
 VAR_35 = VAR_36 = VAR_37 = VAR_38 = ((void*)0);


 if (VAR_12)
  while ((VAR_39 = FUNC_34(VAR_24)))
   FUNC_7(VAR_39, ' ', ((void*)0));
 else
  for (;;) {
   VAR_39 = FUNC_34(VAR_24);
   VAR_40 = FUNC_34(VAR_25);
   if (VAR_39 || VAR_40)
    FUNC_7(VAR_39, ' ', VAR_40);
   else
    break;
  }
 FUNC_12(VAR_24);
 FUNC_12(VAR_25);

 FUNC_24();


 return (FUNC_0(VAR_30));
}
