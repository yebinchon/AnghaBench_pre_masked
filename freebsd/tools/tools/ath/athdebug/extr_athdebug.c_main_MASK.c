
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int ;
typedef int oid ;
typedef int ndebug ;
typedef int debug ;
struct TYPE_3__ {int bit; int name; } ;


 char* VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*,...) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char const) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,...) ;
 char* VAR_2 ;
 int FUNC_7 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;
 int FUNC_10 (char const*,int *,int ) ;
 scalar_t__ FUNC_11 (char*,int*,size_t*,int*,int) ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_3, char *VAR_4[])
{
 const char *VAR_5;
 const char *VAR_6, *VAR_7;
 const char *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13;
 size_t VAR_14;
 char VAR_15[256];

 VAR_5 = FUNC_2("ATH");
 if (VAR_5 == ((void*)0))
  VAR_5 = VAR_0;
 VAR_2 = VAR_4[0];
 if (VAR_3 > 1) {
  if (FUNC_8(VAR_4[1], "-i") == 0) {
   if (VAR_3 < 2)
    FUNC_1(1, "missing interface name for -i option");
   VAR_5 = VAR_4[2];
   if (FUNC_9(VAR_5, "ath", 3) != 0)
    FUNC_1(2, "huh, this is for ath devices?");
   VAR_3 -= 2, VAR_4 += 2;
  } else if (FUNC_8(VAR_4[1], "-?") == 0)
   FUNC_12();
 }


 FUNC_7(VAR_15, sizeof(VAR_15), "dev.%s.debug", VAR_5);



 VAR_14 = sizeof(VAR_12);
 if (FUNC_11(VAR_15, &VAR_12, &VAR_14, ((void*)0), 0) < 0)
  FUNC_0(1, "sysctl-get(%s)", VAR_15);
 VAR_13 = VAR_12;
 for (; VAR_3 > 1; VAR_3--, VAR_4++) {
  VAR_6 = VAR_4[1];
  do {
   u_int VAR_16;

   if (*VAR_6 == '-') {
    VAR_6++;
    VAR_10 = -1;
   } else if (*VAR_6 == '+') {
    VAR_6++;
    VAR_10 = 1;
   } else
    VAR_10 = 0;
   for (VAR_7 = VAR_6; *VAR_7 != '\0' && *VAR_7 != '+' && *VAR_7 != '-';)
    VAR_7++;
   VAR_16 = FUNC_3(VAR_6, VAR_7-VAR_6);
   if (VAR_10 < 0)
    VAR_13 &= ~VAR_16;
   else if (VAR_10 > 0)
    VAR_13 |= VAR_16;
   else {
    if (VAR_16 == 0) {
     if (FUNC_4(*VAR_6))
      VAR_16 = FUNC_10(VAR_6, ((void*)0), 0);
     else
      FUNC_1(1, "unknown flag %.*s",
       (int) (VAR_7-VAR_6), VAR_6);
    }
    VAR_13 = VAR_16;
   }
  } while (*(VAR_6 = VAR_7) != '\0');
 }
 if (VAR_12 != VAR_13) {
  FUNC_6("%s: 0x%llx => ", VAR_15, (long long) VAR_12);
  if (FUNC_11(VAR_15, ((void*)0), ((void*)0), &VAR_13, sizeof(VAR_13)) < 0)
   FUNC_0(1, "sysctl-set(%s)", VAR_15);
  FUNC_6("0x%llx", (long long) VAR_13);
  VAR_12 = VAR_13;
 } else
  FUNC_6("%s: 0x%llx", VAR_15, (long long) VAR_12);
 VAR_8 = "<";
 for (VAR_11 = 0; VAR_11 < FUNC_5(VAR_1); VAR_11++)
  if (VAR_12 & VAR_1[VAR_11].bit) {
   FUNC_6("%s%s", VAR_8, VAR_1[VAR_11].name);
   VAR_8 = ",";
  }
 FUNC_6("%s\n", *VAR_8 != '<' ? ">" : "");
 return 0;
}
