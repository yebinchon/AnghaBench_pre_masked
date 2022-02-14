
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct protox {scalar_t__ pr_name; } ;
struct TYPE_3__ {int n_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 void* FUNC_0 (char*) ;
 int VAR_26 ;
 int FUNC_1 (char*) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 char* VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_6 (int *,scalar_t__) ;
 struct protox* VAR_34 ;
 int FUNC_7 (char) ;
 scalar_t__ FUNC_8 (char) ;
 scalar_t__ FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int * VAR_35 ;
 int VAR_36 ;
 int FUNC_11 (int *,int ) ;
 char* VAR_37 ;
 int VAR_38 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 struct protox* FUNC_16 (char*) ;
 struct protox* VAR_39 ;
 int FUNC_17 () ;
 TYPE_1__* VAR_40 ;
 char* VAR_41 ;
 void* VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 char* VAR_45 ;
 scalar_t__ VAR_46 ;
 struct protox* VAR_47 ;
 int VAR_48 ;
 int FUNC_18 (struct protox*,scalar_t__,int*) ;
 struct protox* VAR_49 ;
 int VAR_50 ;
 int FUNC_19 (int,scalar_t__) ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 scalar_t__ VAR_51 ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char*,char**,int ) ;
 void* VAR_52 ;
 int FUNC_26 (int ,int ,int ,int ,int ,int*) ;
 int FUNC_27 () ;
 int VAR_53 ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*) ;
 int FUNC_30 (int,char*) ;
 int FUNC_31 (int,char*,...) ;
 int FUNC_32 () ;
 int FUNC_33 (char*) ;
 int FUNC_34 (int,char**) ;
 int VAR_54 ;

int
FUNC_35(int VAR_55, char *VAR_56[])
{
 struct protox *VAR_57 = ((void*)0);
 int VAR_58;
 int VAR_59 = -1;
 char *VAR_60;
 bool VAR_61 = 1;

 VAR_24 = VAR_5;

 VAR_55 = FUNC_34(VAR_55, VAR_56);
 if (VAR_55 < 0)
  FUNC_3(VAR_10);

 while ((VAR_58 = FUNC_5(VAR_55, VAR_56, "46AaBbdF:f:ghI:iLlM:mN:nPp:Qq:RrSTsuWw:xz"))
     != -1)
  switch(VAR_58) {
  case '4':



   FUNC_2(1, "IPv4 support is not compiled in");

   break;
  case '6':



   FUNC_2(1, "IPv6 support is not compiled in");

   break;
  case 'A':
   VAR_6 = 1;
   break;
  case 'a':
   VAR_25 = 1;
   break;
  case 'B':
   VAR_7 = 1;
   break;
  case 'b':
   VAR_26 = 1;
   break;
  case 'd':
   VAR_27 = 1;
   break;
  case 'F':
   VAR_59 = FUNC_25(VAR_45, &VAR_60, 0);
   if (*VAR_60 != '\0' ||
       (VAR_59 == 0 && (VAR_28 == VAR_8 || VAR_28 == VAR_9)))
    FUNC_31(1, "%s: invalid fib", VAR_45);
   break;
  case 'f':
   if (FUNC_24(VAR_45, "inet") == 0)
    VAR_24 = VAR_0;
   else if (FUNC_24(VAR_45, "unix") == 0 ||
     FUNC_24(VAR_45, "local") == 0)
    VAR_24 = VAR_4;





   else if (FUNC_24(VAR_45, "link") == 0)
    VAR_24 = VAR_2;
   else {
    FUNC_31(1, "%s: unknown address family",
        VAR_45);
   }
   break;
  case 'g':
   VAR_29 = 1;
   break;
  case 'h':
   VAR_30 = 1;
   break;
  case 'I': {
   char *VAR_62;

   VAR_31 = 1;
   for (VAR_62 = VAR_32 = VAR_45; FUNC_7(*VAR_62); VAR_62++)
    continue;
   VAR_52 = FUNC_0(VAR_62);
   break;
  }
  case 'i':
   VAR_31 = 1;
   break;
  case 'L':
   VAR_11 = 1;
   break;
  case 'M':
   VAR_37 = VAR_45;
   break;
  case 'm':
   VAR_38 = 1;
   break;
  case 'N':
   VAR_41 = VAR_45;
   break;
  case 'n':
   VAR_43 = VAR_44 = 1;
   break;
  case 'P':
   VAR_19 = 1;
   break;
  case 'p':
   if ((VAR_57 = FUNC_16(VAR_45)) == ((void*)0)) {
    FUNC_31(1, "%s: unknown or uninstrumented "
        "protocol", VAR_45);
   }
   VAR_48 = 1;
   break;
  case 'Q':
   VAR_20 = 1;
   break;
  case 'q':
   VAR_42 = FUNC_0(VAR_45);
   if (VAR_42 != 0)
    VAR_42++;
   break;
  case 'r':
   VAR_50 = 1;
   break;
  case 'R':
   VAR_21 = 1;
   break;
  case 's':
   ++VAR_51;
   break;
  case 'S':
   VAR_43 = 1;
   break;
  case 'u':
   VAR_24 = VAR_4;
   break;
  case 'W':
  case 'l':
   VAR_23 = 1;
   break;
  case 'w':
   VAR_33 = FUNC_0(VAR_45);
   VAR_31 = 1;
   break;
  case 'T':
   VAR_22 = 1;
   break;
  case 'x':
   VAR_53 = 1;
   break;
  case 'z':
   VAR_54 = 1;
   break;
  case '?':
  default:
   FUNC_27();
  }
 VAR_56 += VAR_46;
 VAR_55 -= VAR_46;



 if (*VAR_56) {
  if (FUNC_8(**VAR_56)) {
   VAR_33 = FUNC_0(*VAR_56);
   if (VAR_33 <= 0)
    FUNC_27();
   ++VAR_56;
   VAR_31 = 1;
  }
  if (*VAR_56) {
   VAR_41 = *VAR_56;
   if (*++VAR_56)
    VAR_37 = *VAR_56;
  }
 }






 VAR_36 = (VAR_41 == ((void*)0) && VAR_37 == ((void*)0));
 if (!VAR_36) {
  if (FUNC_21(FUNC_4()) != 0)
   FUNC_30(-1, "setgid");

  FUNC_10(VAR_40);
 }

 if (VAR_53 && VAR_22)
  FUNC_31(1, "-x and -T are incompatible, pick one.");

 if (VAR_7) {
  if (!VAR_36)
   FUNC_27();
  FUNC_1(VAR_32);
  FUNC_32();
  FUNC_3(0);
 }
 if (VAR_38) {
  if (!VAR_36) {
   if (FUNC_9(0, ((void*)0), 0) == 0)
    FUNC_11(VAR_35, VAR_40[VAR_12].n_value);
  } else
   FUNC_11(((void*)0), 0);
  FUNC_32();
  FUNC_3(0);
 }
 if (VAR_20) {
  if (!VAR_36) {
   if (FUNC_9(0, ((void*)0), 0) == 0)
    FUNC_17();
  } else
   FUNC_17();
  FUNC_32();
  FUNC_3(0);
 }
 if (VAR_31 && !VAR_51) {
  FUNC_33("statistics");
  FUNC_6(((void*)0), VAR_24);
  FUNC_28("statistics");
  FUNC_32();
  FUNC_3(0);
 }
 if (VAR_50) {
  FUNC_33("statistics");
  if (VAR_51) {
   FUNC_20();
  } else
   FUNC_19(VAR_59, VAR_24);
  FUNC_28("statistics");
  FUNC_32();
  FUNC_3(0);
 }

 if (VAR_29) {
  FUNC_33("statistics");
  if (VAR_51) {
   if (VAR_24 == VAR_0 || VAR_24 == VAR_5)
    FUNC_15();




  } else {
   if (VAR_24 == VAR_0 || VAR_24 == VAR_5)
    FUNC_13();




  }
  FUNC_28("statistics");
  FUNC_32();
  FUNC_3(0);
 }

 if (VAR_57) {
  FUNC_33("statistics");
  FUNC_18(VAR_57, VAR_57->pr_name, &VAR_61);
  if (!VAR_61)
   FUNC_29("socket");
  FUNC_28("statistics");
  FUNC_32();
  FUNC_3(0);
 }

 FUNC_33("statistics");
 if (VAR_24 == VAR_0 || VAR_24 == VAR_5)
  for (VAR_57 = VAR_49; VAR_57->pr_name; VAR_57++)
   FUNC_18(VAR_57, VAR_57->pr_name, &VAR_61);
 if ((VAR_24 == VAR_4 || VAR_24 == VAR_5) && !VAR_51)
  FUNC_26(VAR_40[VAR_13].n_value, VAR_40[VAR_15].n_value,
      VAR_40[VAR_14].n_value, VAR_40[VAR_16].n_value,
      VAR_40[VAR_17].n_value, &VAR_61);

 if (!VAR_61)
  FUNC_29("socket");
 FUNC_28("statistics");
 FUNC_32();
 FUNC_3(0);
}
