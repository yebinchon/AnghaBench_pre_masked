
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hostent {scalar_t__ h_addr; } ;
typedef int bdaddr_t ;
struct TYPE_3__ {scalar_t__ class; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char**,char*,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,int *) ;
 struct hostent* FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 char* VAR_11 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*,char*,...) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int,char**,char*) ;
 int FUNC_19 () ;
 int VAR_12 ;
 int FUNC_20 (int ) ;
 char* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_21 () ;
 int VAR_17 ;
 int FUNC_22 (int ,int,int ) ;
 char* VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_23 () ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int * VAR_23 ;
 TYPE_1__* VAR_24 ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (char*,int *) ;
 int * FUNC_26 (char*,char) ;
 unsigned long FUNC_27 (char*,char**,int) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 (int*) ;
 int FUNC_31 (char*) ;

int
FUNC_32(int VAR_25, char *VAR_26[])
{
 unsigned long VAR_27;
 char * VAR_28;
 int VAR_29, VAR_30;

 while ((VAR_29 = FUNC_18(VAR_25, VAR_26, "a:c:d:i:l:m:p:S:s:")) != -1) {
  switch (VAR_29) {
  case 'a':
   if (!FUNC_7(VAR_18, &VAR_20)) {
    struct hostent *VAR_31;

    if ((VAR_31 = FUNC_9(VAR_18)) == ((void*)0))
     FUNC_13(VAR_0, "%s: %s",
         VAR_18, FUNC_20(VAR_12));

    FUNC_6(&VAR_20,
     (bdaddr_t *)VAR_31->h_addr);
   }

   break;

  case 'c':
   VAR_11 = VAR_18;
   break;

  case 'd':
   if (!FUNC_8(VAR_18, &VAR_16)) {
    struct hostent *VAR_32;

    if ((VAR_32 = FUNC_9(VAR_18)) == ((void*)0))
     FUNC_13(VAR_0, "%s: %s",
         VAR_18, FUNC_20(VAR_12));

    FUNC_6(&VAR_16,
     (bdaddr_t *)VAR_32->h_addr);
   }
   break;

  case 'i':
   if (FUNC_26(VAR_18, '/') == ((void*)0)) {
    FUNC_4(&VAR_28, "/dev/%s", VAR_18);
    VAR_13 = VAR_28;
   } else
    VAR_13 = VAR_18;
   break;

  case 'l':
   VAR_27 = FUNC_27(VAR_18, &VAR_28, 10);
   if (*VAR_18 == '\0' || *VAR_28 != '\0' || VAR_27 == 0)
    FUNC_13(VAR_0, "%s: invalid session limit",
     VAR_18);

   VAR_21 = VAR_27;
   break;

  case 'm':
   FUNC_31("Setting link mode is not yet supported");
   break;

  case 'p':
   VAR_27 = FUNC_27(VAR_18, &VAR_28, 0);
   if (*VAR_18 == '\0' || *VAR_28 != '\0'
       || VAR_27 > 0xffff || FUNC_0(VAR_27))
    FUNC_13(VAR_0, "%s: invalid PSM", VAR_18);

   VAR_15 = VAR_27;
   break;

  case 's':
  case 'S':
   for (VAR_27 = 0; FUNC_25(VAR_18, VAR_24[VAR_27].name); VAR_27++) {
    if (VAR_27 == FUNC_3(VAR_24))
     FUNC_13(VAR_0, "%s: unknown service", VAR_18);
   }

   if (VAR_29 == 's')
    VAR_23 = VAR_24[VAR_27].name;

   VAR_22 = VAR_24[VAR_27].class;
   break;

  default:
   FUNC_29();

  }
 }

 VAR_25 -= VAR_19;
 VAR_26 += VAR_19;


 if (FUNC_5(&VAR_16) || VAR_22 == 0)
  FUNC_29();

 if (!FUNC_5(&VAR_20) && (VAR_21 != 0 ||
     VAR_11 != ((void*)0) || (VAR_23 != ((void*)0) && VAR_15 != 0)))
  FUNC_29();


 if (VAR_13 == ((void*)0))
  VAR_13 = "/dev/tap";

 if (VAR_15 == 0)
  VAR_15 = VAR_2;

 if (FUNC_5(&VAR_20) && VAR_21 == 0) {
  if (VAR_22 == VAR_7)
   VAR_21 = 1;
  else
   VAR_21 = 7;
 }
 switch(FUNC_17()) {
 case -1:
  FUNC_12(VAR_0, "fork() failed");

 case 0:
  FUNC_24(VAR_8, VAR_10);

  FUNC_22(FUNC_19(), VAR_4 | VAR_5 | VAR_6, VAR_3);

  FUNC_10();
  FUNC_23();
  FUNC_15();
  FUNC_11();
  FUNC_28();

  FUNC_21();

  FUNC_14();
  break;

 default:
  FUNC_24(VAR_9, VAR_17);
  FUNC_30(&VAR_30);

  if (FUNC_2(VAR_30))
   FUNC_16(FUNC_1(VAR_30));

  break;
 }

 FUNC_12(VAR_0, "exiting");
}
