
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (char*,char const*) ;
 int VAR_8 ;
 int FUNC_13 () ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_13, char **VAR_14)
{
 FILE *VAR_15;
 const char *VAR_16, *VAR_17;

 VAR_17 = ((void*)0);
 VAR_4 = FUNC_9();
 VAR_12 = FUNC_10();
 while (--VAR_13) {
  VAR_16 = *++VAR_14;
  if (*VAR_16++ == '-') {
   switch(*VAR_16++) {
   case 'P':



    VAR_17 = VAR_16;
    continue;

   case 'p':



    VAR_7 = FUNC_1(VAR_16);
    VAR_6 = 1;
    continue;

   case 's':



    VAR_11++;
    continue;

   case 'c':



    VAR_9++;
    continue;

   case 'm':



    VAR_5 = 1;
    continue;

   case 'r':



    VAR_8++;
    continue;

   default:
    FUNC_14();
   }
  }
  (void) FUNC_4(--VAR_16);
  VAR_2 = 0;
 }
 if (VAR_17 == ((void*)0) && (VAR_17 = FUNC_8("PRINTER")) == ((void*)0))
  VAR_17 = VAR_0;
 if (!FUNC_2(VAR_17)) {
  FUNC_12("pac: unknown printer %s\n", VAR_17);
  FUNC_5(2);
 }

 if ((VAR_15 = FUNC_7(VAR_1, "r")) == ((void*)0)) {
  FUNC_11(VAR_1);
  FUNC_5(1);
 }
 FUNC_0(VAR_15);
 FUNC_6(VAR_15);
 if ((VAR_15 = FUNC_7(VAR_10, "r")) != ((void*)0)) {
  FUNC_0(VAR_15);
  FUNC_6(VAR_15);
 }
 if (VAR_11)
  FUNC_13();
 else
  FUNC_3();
 FUNC_5(VAR_3);
}
