
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; int tm_mday; int tm_year; scalar_t__ tm_wday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
typedef int ssize_t ;
typedef int dbuf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int ) ;



 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int,int,char*,int,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,size_t*,int *) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (char*,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_9 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (char*,int*,int*,int*,int*,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int VAR_17 ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*,int,char*,struct tm*) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*,int *,int*) ;

__attribute__((used)) static int
FUNC_20(FILE *VAR_18, FILE *VAR_19)
{
 char *VAR_20 = ((void*)0);
 char *VAR_21;
 size_t VAR_22 = 0;
 ssize_t VAR_23;
 ssize_t VAR_24;
 static int VAR_25 = -1;
 static int VAR_26 = 0;
 int VAR_27;
 int VAR_28[VAR_3];
 int VAR_29[VAR_3];
 int VAR_30[VAR_3];
 bool VAR_31 = 0;
 char VAR_32[80];
 char *VAR_33, VAR_34;
 struct tm VAR_35;
 int VAR_36;


 VAR_35.tm_sec = 0;
 VAR_35.tm_min = 0;
 VAR_35.tm_hour = 0;
 VAR_35.tm_wday = 0;

 if (VAR_18 == ((void*)0))
  return (1);

 while ((VAR_23 = FUNC_6(&VAR_20, &VAR_22, VAR_18)) > 0) {
  if (*VAR_20 == '#') {
   switch (FUNC_19(VAR_20+1, VAR_19, &VAR_31)) {
   case 130:
    FUNC_5(VAR_20);
    return (1);
   case 129:
    continue;
   case 128:
    break;
   default:
    break;
   }
  }

  if (VAR_31)
   continue;

  VAR_21 = VAR_20;
  for (VAR_24 = VAR_23;
       VAR_24 > 0 && FUNC_7((unsigned char)VAR_21[VAR_24 - 1]);
       VAR_24--)
   ;
  VAR_21[VAR_24] = '\0';
  if (VAR_21[0] == '\0')
   continue;
  if (FUNC_18(VAR_21, "LANG=", 5) == 0) {
   (void)FUNC_12(VAR_2, VAR_21 + 5);
   VAR_25 = (*FUNC_9(VAR_0) == 'd');




   FUNC_13();
   continue;
  }

  FUNC_0("Easter=", 7, VAR_10);
  FUNC_0("Paskha=", 7, VAR_15);
  FUNC_0("ChineseNewYear=", 15, VAR_8);
  FUNC_0("NewMoon=", 8, VAR_14);
  FUNC_0("FullMoon=", 9, VAR_11);
  FUNC_0("MarEquinox=", 11, VAR_13);
  FUNC_0("SepEquinox=", 11, VAR_16);
  FUNC_0("JunSolstice=", 12, VAR_12);
  FUNC_0("DecSolstice=", 12, VAR_9);
  if (FUNC_18(VAR_21, "SEQUENCE=", 9) == 0) {
   FUNC_14(VAR_21 + 9);
   continue;
  }





  if (VAR_21[0] == '\t') {
   for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++)
    FUNC_2(VAR_6[VAR_27], VAR_21);
   continue;
  }


  while (FUNC_7((unsigned char)VAR_21[0]))
   FUNC_8(VAR_21, VAR_21 + 1, FUNC_17(VAR_21));


  if ((VAR_33 = FUNC_15(VAR_21, '\t')) == ((void*)0))
   continue;


  while (FUNC_7((unsigned char)VAR_33[-1]))
   VAR_33--;

  VAR_34 = *VAR_33;
  *VAR_33 = '\0';
  if ((VAR_26 = FUNC_10(VAR_21, VAR_30, VAR_28, VAR_29, &VAR_36,
      VAR_7)) == 0)
   continue;
  *VAR_33 = VAR_34;
  if (VAR_26 < 0) {

   if (VAR_4)
    FUNC_4(VAR_17, "Ignored: %s\n", VAR_21);
   if (VAR_26 == -1)
    continue;
   VAR_26 = -VAR_26 + 1;
  }


  while (VAR_33[1] == '\t')
   VAR_33++;

  if (VAR_25 < 0)
   VAR_25 = (*FUNC_9(VAR_0) == 'd');

  for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
   VAR_35.tm_mon = VAR_28[VAR_27] - 1;
   VAR_35.tm_mday = VAR_29[VAR_27];
   VAR_35.tm_year = VAR_30[VAR_27] - 1900;
   (void)FUNC_16(VAR_32, sizeof(VAR_32),
       VAR_25 ? "%e %b" : "%b %e", &VAR_35);
   if (VAR_4)
    FUNC_4(VAR_17, "got %s\n", VAR_33);
   VAR_6[VAR_27] = FUNC_1(VAR_30[VAR_27], VAR_28[VAR_27], VAR_29[VAR_27], VAR_32,
       ((VAR_36 &= VAR_1) != 0) ? 1 : 0, VAR_33,
       VAR_7[VAR_27]);
  }
 }

 FUNC_5(VAR_20);
 FUNC_3(VAR_18);

 return (0);
}
