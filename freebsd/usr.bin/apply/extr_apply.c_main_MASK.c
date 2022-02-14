
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*) ;
 char* FUNC_9 (size_t) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (struct sbuf*,char*) ;
 int FUNC_12 (struct sbuf*) ;
 char* FUNC_13 (struct sbuf*) ;
 int FUNC_14 (struct sbuf*) ;
 int FUNC_15 (struct sbuf*) ;
 long FUNC_16 (struct sbuf*) ;
 struct sbuf* FUNC_17 (int *,int *,int,int ) ;
 int FUNC_18 (struct sbuf*,char) ;
 int FUNC_19 (char*,int,char*,int,int) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (char*,char*,size_t) ;
 int FUNC_22 (char*,char*,size_t) ;
 int FUNC_23 (char*) ;
 char* FUNC_24 (char*,char) ;
 long FUNC_25 (int ) ;
 int FUNC_26 () ;

int
FUNC_27(int VAR_8, char *VAR_9[])
{
 struct sbuf *VAR_10;
 long VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 size_t VAR_19;
 char VAR_20[4];
 char *VAR_21, *VAR_22, *VAR_23, *VAR_24, *VAR_25, *VAR_26;

 VAR_13 = 0;
 VAR_15 = '%';
 VAR_17 = -1;
 while ((VAR_12 = FUNC_8(VAR_8, VAR_9, "a:d0123456789")) != -1)
  switch (VAR_12) {
  case 'a':
   if (VAR_5[0] == '\0' || VAR_5[1] != '\0')
    FUNC_3(1,
        "illegal magic character specification");
   VAR_15 = VAR_5[0];
   break;
  case 'd':
   VAR_13 = 1;
   break;
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   if (VAR_17 != -1)
    FUNC_3(1,
        "only one -# argument may be specified");
   VAR_17 = VAR_7 - '0';
   break;
  default:
   FUNC_26();
  }
 VAR_8 -= VAR_6;
 VAR_9 += VAR_6;

 if (VAR_8 < 2)
  FUNC_26();






 for (VAR_16 = 0, VAR_23 = VAR_9[0]; *VAR_23 != '\0'; ++VAR_23)
  if (FUNC_0(VAR_23)) {
   ++VAR_23;
   if (VAR_23[0] - '0' > VAR_16)
    VAR_16 = VAR_23[0] - '0';
  }
 VAR_24 = VAR_22 = ((void*)0);
 VAR_26 = FUNC_7("SHELL");
 VAR_24 = (VAR_26 != ((void*)0)) ? FUNC_20(VAR_26) : FUNC_20(VAR_3);
 if (VAR_24 == ((void*)0))
  FUNC_1(1, "strdup() failed");
 VAR_25 = FUNC_24(VAR_24, '/');
 VAR_22 = (VAR_25 != ((void*)0)) ? VAR_25 + 1 : VAR_24;
 if (VAR_16 == 0) {
  VAR_19 = FUNC_23(VAR_9[0]) + 9 * (sizeof(" %1") - 1) + 1;
  if ((VAR_21 = FUNC_9(VAR_19)) == ((void*)0))
   FUNC_1(1, ((void*)0));
  FUNC_22(VAR_21, VAR_9[0], VAR_19);


  if (VAR_17 == -1)
   VAR_17 = 1;

  for (VAR_14 = 1; VAR_14 <= VAR_17; VAR_14++) {
   FUNC_19(VAR_20, sizeof(VAR_20), " %c%d", VAR_15, VAR_14);
   FUNC_21(VAR_21, VAR_20, VAR_19);
  }





  if (VAR_17 == 0)
   VAR_17 = 1;
 } else {
  if ((VAR_21 = FUNC_20(VAR_9[0])) == ((void*)0))
   FUNC_1(1, ((void*)0));
  VAR_17 = VAR_16;
 }

 VAR_10 = FUNC_17(((void*)0), ((void*)0), 1024, VAR_2);
 if (VAR_10 == ((void*)0))
  FUNC_1(1, ((void*)0));

 VAR_11 = FUNC_25(VAR_4);






 for (VAR_18 = 0; VAR_8 > VAR_17; VAR_8 -= VAR_17, VAR_9 += VAR_17) {
  FUNC_12(VAR_10);
  FUNC_11(VAR_10, "exec ");

  for (VAR_23 = VAR_21; *VAR_23 != '\0'; ++VAR_23) {
   if (FUNC_0(VAR_23)) {
    if (FUNC_11(VAR_10, VAR_9[(++VAR_23)[0] - '0'])
        == -1)
     FUNC_2(1, VAR_1, "sbuf");
   } else {
    if (FUNC_18(VAR_10, *VAR_23) == -1)
     FUNC_2(1, VAR_1, "sbuf");
   }
   if (FUNC_16(VAR_10) > VAR_11)
    FUNC_2(1, VAR_0, ((void*)0));
  }


  FUNC_15(VAR_10);


  if (VAR_13)
   (void)FUNC_10("%s\n", FUNC_13(VAR_10));
  else
   if (FUNC_4(FUNC_13(VAR_10), VAR_24, VAR_22))
    VAR_18 = 1;
 }

 if (VAR_8 != 1)
  FUNC_3(1, "expecting additional argument%s after \"%s\"",
      (VAR_17 - VAR_8) ? "s" : "", VAR_9[VAR_8 - 1]);
 FUNC_6(VAR_21);
 FUNC_14(VAR_10);
 FUNC_6(VAR_24);
 FUNC_5(VAR_18);
}
