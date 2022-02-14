
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int sig_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int FUNC_3 (int *) ;
 int * VAR_14 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (int ,char*,int) ;
 int * VAR_15 ;
 int FUNC_10 (char) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int *) ;
 int VAR_18 ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_18(FILE *VAR_21, char *VAR_22, char *VAR_23)
{
 char *VAR_24, VAR_25;
 int VAR_26, VAR_27, VAR_28;
 time_t VAR_29, VAR_30;
 sig_t VAR_31;

 FUNC_5(VAR_20, VAR_7);
 VAR_16 = 0;
 VAR_31 = FUNC_11(VAR_6, VAR_17);
 FUNC_14(0, VAR_10, &VAR_13);
 FUNC_9(VAR_15[0], (char *)&VAR_12, 1);
 if (VAR_23 != ((void*)0)) {
  for (VAR_24 = VAR_23; *VAR_24; VAR_24++)
   FUNC_10(*VAR_24);
  if (FUNC_1(FUNC_16(VAR_0)))
   FUNC_9(VAR_3, (char *)&VAR_26, 1);
  else {
   FUNC_13(VAR_3);
   FUNC_12(5);
  }
 }
 VAR_28 = 0;
 VAR_25 = '\0';
 VAR_29 = FUNC_15(0);
 while (1) {
  VAR_27 = 0;
  do {
   VAR_26 = FUNC_4(VAR_21);
   if (VAR_16)
    goto out;
   if (VAR_26 == VAR_1)
    goto out;
   if (VAR_26 == 0177 && !FUNC_1(FUNC_16(VAR_5)))
    continue;
   VAR_25 = VAR_26;
   if (VAR_26 < 040) {
    if (VAR_26 == '\n') {
     if (!FUNC_1(FUNC_16(VAR_5)))
      VAR_26 = '\r';
    } else if (VAR_26 == '\t') {
     if (!FUNC_1(FUNC_16(VAR_5))) {
      if (FUNC_1(FUNC_16(VAR_9))) {
       FUNC_10(' ');
       while ((++VAR_27 % 8) != 0)
        FUNC_10(' ');
       continue;
      }
     }
    } else
     if (!FUNC_1(FUNC_16(VAR_5)))
      continue;
   }
   FUNC_10(VAR_26);
  } while (VAR_26 != '\r' && !FUNC_1(FUNC_16(VAR_5)));
  if (FUNC_1(FUNC_16(VAR_11)))
   FUNC_7("\r%d", ++VAR_28);
  if (FUNC_1(FUNC_16(VAR_0))) {
   VAR_19 = 0;
   FUNC_0((unsigned int)FUNC_6(VAR_2));
   do {
    FUNC_9(VAR_3, (char *)&VAR_26, 1);
    if (VAR_19 || VAR_16) {
     if (VAR_19)
      FUNC_7("\r\ntimed out at eol\r\n");
     FUNC_0(0);
     goto out;
    }
   } while ((VAR_26&VAR_8) != FUNC_2(FUNC_16(VAR_4)));
   FUNC_0(0);
  }
 }
out:
 if (VAR_25 != '\n' && !FUNC_1(FUNC_16(VAR_5)))
  FUNC_10('\r');
 if (VAR_22) {
  for (VAR_24 = VAR_22; *VAR_24; VAR_24++)
   FUNC_10(*VAR_24);
 }
 VAR_30 = FUNC_15(0);
 FUNC_3(VAR_21);
 FUNC_11(VAR_6, VAR_31);
 if (FUNC_1(FUNC_16(VAR_11))) {
  if (FUNC_1(FUNC_16(VAR_5)))
   FUNC_8(" chars transferred in ", VAR_30-VAR_29);
  else
   FUNC_8(" lines transferred in ", VAR_30-VAR_29);
 }
 FUNC_17(VAR_14[1], (char *)&VAR_12, 1);
 FUNC_14(0, VAR_10, &VAR_18);
}
