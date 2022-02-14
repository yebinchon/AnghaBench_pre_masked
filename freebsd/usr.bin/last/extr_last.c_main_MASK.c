
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_10 ;
 int FUNC_8 (int) ;
 char* VAR_11 ;
 int FUNC_9 (int,char**,char*) ;
 int FUNC_10 (char*) ;
 int VAR_12 ;
 char* FUNC_11 (int ) ;
 int VAR_13 ;
 char* VAR_14 ;
 size_t VAR_15 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (int ,char*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 char* FUNC_15 (char*,int) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,char**,int) ;
 char* FUNC_18 (char*) ;
 int FUNC_19 () ;
 int VAR_19 ;
 int FUNC_20 () ;
 int FUNC_21 (int,char*,...) ;
 int FUNC_22 (int,char*,char*) ;
 int VAR_20 ;
 int FUNC_23 (int,char**) ;
 int VAR_21 ;

int
FUNC_24(int VAR_22, char *VAR_23[])
{
 int VAR_24;
 char *VAR_25;

 (void) FUNC_13(VAR_4, "");
 VAR_9 = (*FUNC_11(VAR_1) == 'd');

 (void) FUNC_13(VAR_3, "");
 VAR_25 = FUNC_11(VAR_0);
 if (FUNC_16(VAR_25, "UTF-8") == 0 || FUNC_16(VAR_25, "US-ASCII") == 0)
  VAR_13 = 1;

 VAR_22 = FUNC_23(VAR_22, VAR_23);
 if (VAR_22 < 0)
  FUNC_8(1);
 FUNC_1(VAR_20);

 VAR_12 = -1;
 VAR_17 = 0;
 while ((VAR_24 = FUNC_9(VAR_22, VAR_23, "0123456789d:f:h:n:st:wy")) != -1)
  switch (VAR_24) {
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':




   if (VAR_12 == -1) {
    VAR_25 = FUNC_15(VAR_23[VAR_15 - 1], VAR_24);
    if (VAR_25 == ((void*)0))
     VAR_25 = FUNC_15(VAR_23[VAR_15], VAR_24);
    VAR_12 = FUNC_2(VAR_25);
    if (!VAR_12)
     FUNC_8(0);
   }
   break;
  case 'd':
   VAR_17 = FUNC_7(VAR_14);
   break;
  case 'f':
   VAR_11 = VAR_14;
   break;
  case 'h':
   FUNC_10(VAR_14);
   FUNC_0(VAR_2, VAR_14);
   break;
  case 'n':
   VAR_10 = 0;
   VAR_12 = FUNC_17(VAR_14, &VAR_25, 10);
   if (VAR_25 == VAR_14 || *VAR_25 != '\0' || VAR_10 != 0 ||
       VAR_12 <= 0)
    FUNC_22(1, "%s: bad line count", VAR_14);
   break;
  case 's':
   VAR_16++;
   break;
  case 't':
   FUNC_0(VAR_6, FUNC_18(VAR_14));
   break;
  case 'w':
   VAR_19 = 8;
   break;
  case 'y':
   VAR_21++;
   break;
  case '?':
  default:
   FUNC_19();
  }

 if (FUNC_6() < 0)
  FUNC_21(1, "can't limit stdio rights");

 FUNC_3();
 FUNC_4();


 if (FUNC_14(VAR_8, VAR_11) != 0)
  FUNC_21(1, "%s", VAR_11 != ((void*)0) ? VAR_11 : "(default utx db)");

 if (FUNC_5() < 0)
  FUNC_21(1, "cap_enter");

 if (VAR_16 && VAR_19 == 8) FUNC_19();

 if (VAR_22) {
  FUNC_12(VAR_18);
  for (VAR_23 += VAR_15; *VAR_23; ++VAR_23) {
   if (FUNC_16(*VAR_23, "reboot") == 0)
    FUNC_0(VAR_5, *VAR_23);



   FUNC_0(VAR_6, FUNC_18(*VAR_23));

   FUNC_0(VAR_7, *VAR_23);
  }
 }
 FUNC_20();
 FUNC_8(0);
}
