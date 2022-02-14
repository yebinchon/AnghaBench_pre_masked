
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; } ;
struct oidname {char* names; char* labels; TYPE_1__ oid; } ;
struct oidformat {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (char const,int *) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (struct oidformat const*) ;
 scalar_t__ FUNC_5 (struct oidformat const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 size_t FUNC_7 (char const*,char*) ;

__attribute__((used)) static void
FUNC_8(const struct oidname *VAR_0, const struct oidformat *VAR_1,
    FILE *VAR_2)
{
 const char *VAR_3, *VAR_4;
 size_t VAR_5;
 char VAR_6;


 FUNC_1(VAR_2, "sysctl");
 VAR_3 = VAR_0->names;
 VAR_4 = VAR_0->labels;
 for (VAR_5 = 0; VAR_5 < VAR_0->oid.len; ++VAR_5) {
  if (*VAR_4 == '\0') {
   FUNC_2('_', VAR_2);
   while (*VAR_3 != '\0') {

    FUNC_2(FUNC_3(*VAR_3) ? *VAR_3 : '_', VAR_2);
    ++VAR_3;
   }
  }
  VAR_3 += FUNC_6(VAR_3) + 1;
  VAR_4 += FUNC_6(VAR_4) + 1;
 }
 if (FUNC_4(VAR_1))
  FUNC_1(VAR_2, "_celcius");
 else if (FUNC_5(VAR_1))
  FUNC_1(VAR_2, "_seconds");


 VAR_3 = VAR_0->names;
 VAR_4 = VAR_0->labels;
 VAR_6 = '{';
 for (VAR_5 = 0; VAR_5 < VAR_0->oid.len; ++VAR_5) {
  if (*VAR_4 != '\0') {
   FUNC_0(VAR_4[FUNC_7(VAR_4,
       "abcdefghijklmnopqrstuvwxyz"
       "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
       "0123456789_")] == '\0');
   FUNC_1(VAR_2, "%c%s=\"", VAR_6, VAR_4);
   while (*VAR_3 != '\0') {

    if (*VAR_3 == '\\' || *VAR_3 == '"')
     FUNC_2('\\', VAR_2);
    FUNC_2(*VAR_3++, VAR_2);
   }
   FUNC_2('"', VAR_2);
   VAR_6 = ',';
  }
  VAR_3 += FUNC_6(VAR_3) + 1;
  VAR_4 += FUNC_6(VAR_4) + 1;
 }
 if (VAR_6 != '{')
  FUNC_2('}', VAR_2);
}
