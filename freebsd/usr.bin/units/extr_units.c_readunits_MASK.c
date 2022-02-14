
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int line ;
typedef int filename ;
typedef int cap_rights_t ;
struct TYPE_4__ {void* prefixval; void* prefixname; } ;
struct TYPE_3__ {void* uval; void* uname; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char const*,char*) ;
 char* FUNC_10 (char*) ;
 size_t VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_11 (char*,int,char*,char*,char*) ;
 int FUNC_12 (void*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*,int ) ;
 size_t VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void
FUNC_18(const char *VAR_10)
{
 FILE *VAR_11;
 char VAR_12[512], *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 cap_rights_t VAR_17;

 VAR_8 = 0;
 VAR_15 = 0;

 if (VAR_10) {
  VAR_11 = FUNC_9(VAR_10, "r");
  if (!VAR_11)
   FUNC_4(1, "unable to open units file '%s'", VAR_10);
 }
 else {
  VAR_11 = FUNC_9(VAR_5, "r");
  if (!VAR_11) {
   char *VAR_18, *VAR_19;
   char VAR_20[1000];

   VAR_19 = FUNC_10("PATH");
   if (VAR_19) {
    VAR_18 = FUNC_16(VAR_19, VAR_4);
    while (VAR_18) {
     FUNC_11(VAR_20, sizeof(VAR_20),
         "%s/%s", VAR_18, VAR_5);
     VAR_11 = FUNC_9(VAR_20, "rt");
     if (VAR_11)
      break;
     VAR_18 = FUNC_16(((void*)0), VAR_4);
    }
   }
   if (!VAR_11)
    FUNC_4(1, "can't find units file '%s'", VAR_5);
  }
 }
 FUNC_0(&VAR_17, VAR_1, VAR_0);
 if (FUNC_1(FUNC_8(VAR_11), &VAR_17) < 0)
  FUNC_3(1, "cap_rights_limit() failed");
 while (!FUNC_6(VAR_11)) {
  if (!FUNC_7(VAR_12, sizeof(VAR_12), VAR_11))
   break;
  VAR_15++;
  VAR_13 = VAR_12;
  if (*VAR_13 == '/' || *VAR_13 == '#')
   continue;
  VAR_13 += FUNC_15(VAR_13, " \n\t");
  VAR_14 = FUNC_13(VAR_13, " \n\t");
  VAR_13[VAR_14] = 0;
  if (!FUNC_14(VAR_13))
   continue;
  if (VAR_13[FUNC_14(VAR_13) - 1] == '-') {
   if (VAR_6 == VAR_2) {
    FUNC_17("memory for prefixes exceeded in line %d", VAR_15);
    continue;
   }
   VAR_13[FUNC_14(VAR_13) - 1] = 0;
   VAR_7[VAR_6].prefixname = FUNC_2(VAR_13);
   for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
    if (!FUNC_12(VAR_7[VAR_16].prefixname, VAR_13)) {
     FUNC_17("redefinition of prefix '%s' on line %d ignored",
         VAR_13, VAR_15);
     continue;
    }
   VAR_13 += VAR_14 + 1;
   VAR_13 += FUNC_15(VAR_13, " \n\t");
   VAR_14 = FUNC_13(VAR_13, "\n\t");
   if (VAR_14 == 0) {
    FUNC_17("unexpected end of prefix on line %d",
        VAR_15);
    continue;
   }
   VAR_13[VAR_14] = 0;
   VAR_7[VAR_6++].prefixval = FUNC_2(VAR_13);
  }
  else {
   if (VAR_8 == VAR_3) {
    FUNC_17("memory for units exceeded in line %d", VAR_15);
    continue;
   }
   VAR_9[VAR_8].uname = FUNC_2(VAR_13);
   for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
    if (!FUNC_12(VAR_9[VAR_16].uname, VAR_13)) {
     FUNC_17("redefinition of unit '%s' on line %d ignored",
         VAR_13, VAR_15);
     continue;
    }
   VAR_13 += VAR_14 + 1;
   VAR_13 += FUNC_15(VAR_13, " \n\t");
   if (!FUNC_14(VAR_13)) {
    FUNC_17("unexpected end of unit on line %d",
        VAR_15);
    continue;
   }
   VAR_14 = FUNC_13(VAR_13, "\n\t");
   VAR_13[VAR_14] = 0;
   VAR_9[VAR_8++].uval = FUNC_2(VAR_13);
  }
 }
 FUNC_5(VAR_11);
}
