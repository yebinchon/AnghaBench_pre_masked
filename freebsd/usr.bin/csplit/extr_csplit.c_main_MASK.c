
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; scalar_t__ sa_flags; } ;
typedef int intmax_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_9 ;
 int FUNC_3 (int,char*,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 char* FUNC_10 () ;
 int FUNC_11 (int,char**,char*) ;
 int VAR_11 ;
 int * VAR_12 ;
 char* VAR_13 ;
 scalar_t__ FUNC_12 (unsigned char) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int * FUNC_13 () ;
 int VAR_17 ;
 char const* VAR_18 ;
 scalar_t__ VAR_19 ;
 int * VAR_20 ;
 char const* VAR_21 ;
 int FUNC_14 (char*,int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_15 (int ,char*) ;
 int VAR_23 ;
 int FUNC_16 (int ,struct sigaction*,int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int * VAR_24 ;
 scalar_t__ FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char const*) ;
 void* FUNC_21 (char const*,char**,int) ;
 long VAR_25 ;
 int FUNC_22 (int *,int ) ;
 scalar_t__ VAR_26 ;
 int FUNC_23 () ;

int
FUNC_24(int VAR_27, char *VAR_28[])
{
 struct sigaction VAR_29;
 long VAR_30;
 int VAR_31;
 const char *VAR_32;
 char *VAR_33, *VAR_34;
 FILE *VAR_35;

 FUNC_15(VAR_1, "");

 VAR_14 = VAR_23 = 0;
 VAR_21 = "xx";
 VAR_25 = 2;
 while ((VAR_31 = FUNC_11(VAR_27, VAR_28, "ksf:n:")) > 0) {
  switch (VAR_31) {
  case 'f':
   VAR_21 = VAR_18;
   break;
  case 'k':
   VAR_14 = 1;
   break;
  case 'n':
   VAR_10 = 0;
   VAR_25 = FUNC_21(VAR_18, &VAR_33, 10);
   if (VAR_25 <= 0 || *VAR_33 != '\0' || VAR_10 != 0)
    FUNC_4(1, "%s: bad suffix length", VAR_18);
   break;
  case 's':
   VAR_23 = 1;
   break;
  default:
   FUNC_23();

  }
 }

 if (VAR_25 + FUNC_20(VAR_21) >= VAR_3)
  FUNC_4(1, "name too long");

 VAR_27 -= VAR_19;
 VAR_28 += VAR_19;

 if ((VAR_13 = *VAR_28++) == ((void*)0))
  FUNC_23();
 if (FUNC_19(VAR_13, "-") == 0) {
  VAR_12 = VAR_24;
  VAR_13 = "stdin";
 } else if ((VAR_12 = FUNC_7(VAR_13, "r")) == ((void*)0))
  FUNC_3(1, "%s", VAR_13);

 if (!VAR_14) {
  VAR_9 = 1;
  FUNC_0(VAR_7);
  VAR_29.sa_flags = 0;
  VAR_29.sa_handler = VAR_11;
  FUNC_18(&VAR_29.sa_mask);
  FUNC_17(&VAR_29.sa_mask, VAR_4);
  FUNC_17(&VAR_29.sa_mask, VAR_5);
  FUNC_17(&VAR_29.sa_mask, VAR_6);
  FUNC_16(VAR_4, &VAR_29, ((void*)0));
  FUNC_16(VAR_5, &VAR_29, ((void*)0));
  FUNC_16(VAR_6, &VAR_29, ((void*)0));
 }

 VAR_15 = 0;
 VAR_17 = 0;
 VAR_26 = 0;
 VAR_20 = ((void*)0);


 for (VAR_16 = 1, VAR_30 = 0; VAR_30 < VAR_25; VAR_30++) {
  if (VAR_16 > VAR_2 / 10)
   FUNC_4(1, "%ld: suffix too long (limit %ld)",
       VAR_25, VAR_30);
  VAR_16 *= 10;
 }


 while (VAR_17 < VAR_16 - 1 && (VAR_32 = *VAR_28++) != ((void*)0)) {

  if (*VAR_28 != ((void*)0) && **VAR_28 == '{') {
   VAR_10 = 0;
   VAR_22 = FUNC_21(*VAR_28 + 1, &VAR_33, 10);
   if (VAR_22 < 0 || *VAR_33 != '}' || VAR_10 != 0)
    FUNC_4(1, "%s: bad repetition count", *VAR_28 + 1);
   VAR_28++;
  } else
   VAR_22 = 0;

  if (*VAR_32 == '/' || *VAR_32 == '%') {
   do
    FUNC_2(VAR_32);
   while (VAR_22-- != 0 && VAR_17 < VAR_16 - 1);
  } else if (FUNC_12((unsigned char)*VAR_32))
   FUNC_1(VAR_32);
  else
   FUNC_4(1, "%s: unrecognised pattern", VAR_32);
 }


 if (!FUNC_6(VAR_12)) {
  VAR_35 = FUNC_13();
  while ((VAR_34 = FUNC_10()) != ((void*)0) && FUNC_8(VAR_34, VAR_35) != VAR_0)
   ;
  if (!VAR_23)
   FUNC_14("%jd\n", (intmax_t)FUNC_9(VAR_35));
  if (FUNC_5(VAR_35) != 0)
   FUNC_3(1, "%s", VAR_8);
 }

 FUNC_22(((void*)0), 0);
 VAR_9 = 0;

 return (0);
}
