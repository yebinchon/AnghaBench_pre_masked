
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


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*,...) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 char* VAR_1 ;
 int FUNC_7 (char*,int,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char const*,int *,int ) ;
 scalar_t__ FUNC_10 (char*,int*,size_t*,int*,int) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_2, char *VAR_3[])
{
 const char *VAR_4, *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8;
 u_int32_t VAR_9, VAR_10;
 size_t VAR_11;
 char VAR_12[256];

 VAR_1 = VAR_3[0];
 FUNC_7(VAR_12, sizeof(VAR_12), "wlan0");
 if (VAR_2 > 1) {
  if (FUNC_8(VAR_3[1], "-d") == 0) {
   FUNC_7(VAR_12, sizeof(VAR_12), ((void*)0));
   VAR_2 -= 1, VAR_3 += 1;
  } else if (FUNC_8(VAR_3[1], "-i") == 0) {
   if (VAR_2 <= 2)
    FUNC_2(1, "missing interface name for -i option");
   FUNC_3(VAR_12, sizeof(VAR_12), VAR_3[2]);
   VAR_2 -= 2, VAR_3 += 2;
  } else if (FUNC_8(VAR_3[1], "-?") == 0)
   FUNC_11();
 }

 VAR_11 = sizeof(VAR_9);
 if (FUNC_10(VAR_12, &VAR_9, &VAR_11, ((void*)0), 0) < 0)
  FUNC_1(1, "sysctl-get(%s)", VAR_12);
 VAR_10 = VAR_9;
 for (; VAR_2 > 1; VAR_2--, VAR_3++) {
  VAR_4 = VAR_3[1];
  do {
   u_int VAR_13;

   if (*VAR_4 == '-') {
    VAR_4++;
    VAR_7 = -1;
   } else if (*VAR_4 == '+') {
    VAR_4++;
    VAR_7 = 1;
   } else
    VAR_7 = 0;
   for (VAR_5 = VAR_4; *VAR_5 != '\0' && *VAR_5 != '+' && *VAR_5 != '-';)
    VAR_5++;
   VAR_13 = FUNC_4(VAR_4, VAR_5-VAR_4);
   if (VAR_7 < 0)
    VAR_10 &= ~VAR_13;
   else if (VAR_7 > 0)
    VAR_10 |= VAR_13;
   else {
    if (VAR_13 == 0) {
     int VAR_14 = *VAR_4;
     if (FUNC_5(VAR_14))
      VAR_13 = FUNC_9(VAR_4, ((void*)0), 0);
     else
      FUNC_2(1, "unknown flag %.*s",
       (int)(VAR_5-VAR_4), VAR_4);
    }
    VAR_10 = VAR_13;
   }
  } while (*(VAR_4 = VAR_5) != '\0');
 }
 if (VAR_9 != VAR_10) {
  FUNC_6("%s: 0x%x => ", VAR_12, VAR_9);
  if (FUNC_10(VAR_12, ((void*)0), ((void*)0), &VAR_10, sizeof(VAR_10)) < 0)
   FUNC_1(1, "sysctl-set(%s)", VAR_12);
  FUNC_6("0x%x", VAR_10);
  VAR_9 = VAR_10;
 } else
  FUNC_6("%s: 0x%x", VAR_12, VAR_9);
 VAR_6 = "<";
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++)
  if (VAR_9 & VAR_0[VAR_8].bit) {
   FUNC_6("%s%s", VAR_6, VAR_0[VAR_8].name);
   VAR_6 = ",";
  }
 FUNC_6("%s\n", *VAR_6 != '<' ? ">" : "");
 return 0;
}
