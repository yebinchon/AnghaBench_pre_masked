
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int ;
typedef int oid ;
typedef int ndebug ;
typedef int debug ;
struct TYPE_3__ {int bit; int name; } ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*,...) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,...) ;
 char* VAR_1 ;
 int FUNC_6 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 int FUNC_9 (char const*,int *,int ) ;
 scalar_t__ FUNC_10 (char*,int*,size_t*,int*,int) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_2, char *VAR_3[])
{
 const char *VAR_4 = "mwl0";
 const char *VAR_5, *VAR_6;
 const char *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u_int32_t VAR_11, VAR_12;
 size_t VAR_13;
 char VAR_14[256];

 VAR_1 = VAR_3[0];
 if (VAR_2 > 1) {
  if (FUNC_7(VAR_3[1], "-i") == 0) {
   if (VAR_2 < 2)
    FUNC_1(1, "missing interface name for -i option");
   VAR_4 = VAR_3[2];
   if (FUNC_8(VAR_4, "mv", 2) != 0)
    FUNC_1(2, "huh, this is for mv devices?");
   VAR_2 -= 2, VAR_3 += 2;
  } else if (FUNC_7(VAR_3[1], "-?") == 0)
   FUNC_11();
 }

 FUNC_6(VAR_14, sizeof(VAR_14), "dev.mwl.%s.debug", VAR_4+3);
 VAR_13 = sizeof(VAR_11);
 if (FUNC_10(VAR_14, &VAR_11, &VAR_13, ((void*)0), 0) < 0)
  FUNC_0(1, "sysctl-get(%s)", VAR_14);
 VAR_12 = VAR_11;
 for (; VAR_2 > 1; VAR_2--, VAR_3++) {
  VAR_5 = VAR_3[1];
  do {
   u_int VAR_15;

   if (*VAR_5 == '-') {
    VAR_5++;
    VAR_9 = -1;
   } else if (*VAR_5 == '+') {
    VAR_5++;
    VAR_9 = 1;
   } else
    VAR_9 = 0;
   for (VAR_6 = VAR_5; *VAR_6 != '\0' && *VAR_6 != '+' && *VAR_6 != '-';)
    VAR_6++;
   VAR_15 = FUNC_2(VAR_5, VAR_6-VAR_5);
   if (VAR_9 < 0)
    VAR_12 &= ~VAR_15;
   else if (VAR_9 > 0)
    VAR_12 |= VAR_15;
   else {
    if (VAR_15 == 0) {
     VAR_8 = *VAR_5;
     if (FUNC_3(VAR_8))
      VAR_15 = FUNC_9(VAR_5, ((void*)0), 0);
     else
      FUNC_1(1, "unknown flag %.*s",
       (int)(VAR_6-VAR_5), VAR_5);
    }
    VAR_12 = VAR_15;
   }
  } while (*(VAR_5 = VAR_6) != '\0');
 }
 if (VAR_11 != VAR_12) {
  FUNC_5("%s: 0x%x => ", VAR_14, VAR_11);
  if (FUNC_10(VAR_14, ((void*)0), ((void*)0), &VAR_12, sizeof(VAR_12)) < 0)
   FUNC_0(1, "sysctl-set(%s)", VAR_14);
  FUNC_5("0x%x", VAR_12);
  VAR_11 = VAR_12;
 } else
  FUNC_5("%s: 0x%x", VAR_14, VAR_11);
 VAR_7 = "<";
 for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_0); VAR_10++)
  if (VAR_11 & VAR_0[VAR_10].bit) {
   FUNC_5("%s%s", VAR_7, VAR_0[VAR_10].name);
   VAR_7 = ",";
  }
 FUNC_5("%s\n", *VAR_7 != '<' ? ">" : "");
 return 0;
}
