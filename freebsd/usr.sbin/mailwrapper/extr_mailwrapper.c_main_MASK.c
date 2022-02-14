
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_long ;
struct arglist {int argv; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (struct arglist*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int FUNC_4 (char*,int ,char**) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 char* FUNC_8 (int *,size_t*,size_t*,int *,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 () ;
 int FUNC_12 (struct arglist*) ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,int,char*,char*) ;
 scalar_t__ FUNC_16 (char*,char const*) ;
 char* FUNC_17 (char**,int ) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (int ,char*,char const*,char*) ;

int
FUNC_20(int VAR_9, char *VAR_10[], char *VAR_11[])
{
 FILE *VAR_12;
 char *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 const char *VAR_18;
 char VAR_19[VAR_5];
 const char *VAR_20;
 size_t VAR_21, VAR_22 = 0;
 int VAR_23;
 struct arglist VAR_24;


 VAR_18 = FUNC_11();
 FUNC_14("mailwrapper");

 FUNC_12(&VAR_24);
 FUNC_0(&VAR_24, VAR_10[0]);

 FUNC_15(VAR_19, VAR_5, "%s/etc/mail/mailer.conf",
     FUNC_10("LOCALBASE") ? FUNC_10("LOCALBASE") : "/usr/local");

 VAR_20 = VAR_19;
 if ((VAR_12 = FUNC_7(VAR_19, "r")) == ((void*)0))
  VAR_20 = VAR_8;

 if (VAR_12 == ((void*)0) && ((VAR_12 = FUNC_7(VAR_20, "r")) == ((void*)0))) {
  FUNC_0(&VAR_24, ((void*)0));
  FUNC_13(FUNC_11(), VAR_4, VAR_3);
  FUNC_19(VAR_2, "cannot open %s, using %s as default MTA",
      VAR_20, VAR_7);
  FUNC_1();
  FUNC_4(VAR_7, VAR_24.argv, VAR_11);
  FUNC_2(VAR_1, "cannot exec %s", VAR_7);

 }

 for (;;) {
  if ((VAR_13 = FUNC_8(VAR_12, &VAR_21, &VAR_22, ((void*)0), 0)) == ((void*)0)) {
   if (FUNC_6(VAR_12))
    FUNC_3(VAR_0, "no mapping in %s", VAR_20);
   FUNC_2(VAR_0, "cannot parse line %lu", (u_long)VAR_22);
  }


  VAR_14 = VAR_13;

  VAR_14 += FUNC_18(VAR_14, " \t\n");
  if (VAR_14[0] == '\0') {

   FUNC_9(VAR_13);
   continue;
  }

  if ((VAR_15 = FUNC_17(&VAR_14, " \t\n")) == ((void*)0) || VAR_14 == ((void*)0))
   goto parse_error;

  VAR_14 += FUNC_18(VAR_14, " \t\n");

  if ((VAR_16 = FUNC_17(&VAR_14, " \t\n")) == ((void*)0))
   goto parse_error;

  if (FUNC_16(VAR_15, VAR_18) == 0) {
   for (VAR_17 = FUNC_17(&VAR_14, " \t\n"); VAR_17 != ((void*)0);
        VAR_17 = FUNC_17(&VAR_14, " \t\n")) {
    if (*VAR_17)
        FUNC_0(&VAR_24, VAR_17);
   }
   break;
  }

  FUNC_9(VAR_13);
 }

 (void)FUNC_5(VAR_12);

 for (VAR_23 = 1; VAR_23 < VAR_9; VAR_23++)
  FUNC_0(&VAR_24, VAR_10[VAR_23]);

 FUNC_0(&VAR_24, ((void*)0));
 FUNC_4(VAR_16, VAR_24.argv, VAR_11);
 FUNC_2(VAR_1, "cannot exec %s", VAR_16);

parse_error:
 FUNC_3(VAR_0, "parse error in %s at line %lu",
     VAR_20, (u_long)VAR_22);

}
