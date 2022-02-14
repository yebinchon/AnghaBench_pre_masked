
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prompt {int dummy; } ;
struct datalink {int dummy; } ;
struct bundle {int dummy; } ;
typedef int FILE ;



 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*,int) ;
 int * FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,int,char**,int) ;
 int FUNC_4 (struct bundle*,int,char const* const*,struct prompt*,char const*,struct datalink*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int ,char*,char const*,...) ;
 struct prompt* VAR_9 ;
 int FUNC_8 (char*,int,char*,char const*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char const*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,int *) ;

__attribute__((used)) static int
FUNC_14(struct bundle *VAR_10, const char *VAR_11, const char *VAR_12,
           struct prompt *VAR_13, struct datalink *VAR_14, int VAR_15)
{
  FILE *VAR_16;
  char *VAR_17;
  int VAR_18, VAR_19;
  char VAR_20[VAR_0];
  char VAR_21[VAR_5];
  int VAR_22;
  int VAR_23;
  char *VAR_24[VAR_4];
  int VAR_25;
  int VAR_26;
  char VAR_27[VAR_0];
  struct prompt *VAR_28;

  if (*VAR_12 == '/')
    FUNC_8(VAR_21, sizeof VAR_21, "%s", VAR_12);
  else
    FUNC_8(VAR_21, sizeof VAR_21, "%s/%s", VAR_6, VAR_12);
  VAR_16 = FUNC_2(VAR_21, "r");
  if (VAR_16 == ((void*)0)) {
    FUNC_7(VAR_2, "ReadSystem: Can't open %s.\n", VAR_21);
    return -2;
  }
  FUNC_7(VAR_2, "ReadSystem: Checking %s (%s).\n", VAR_11, VAR_21);

  VAR_22 = 0;
  while ((VAR_18 = FUNC_13(VAR_20, sizeof VAR_20, VAR_16))) {
    VAR_22 += VAR_18;
    if (FUNC_6(*VAR_20))
      continue;

    VAR_17 = FUNC_11(VAR_20);

    switch (*VAR_17) {
    case '\0':
      break;

    case '!':
      switch (FUNC_0(VAR_17+1, VAR_27)) {
      case 128:
        FUNC_7(VAR_1, "%s: Including \"%s\"\n", VAR_21, VAR_27);
        VAR_18 = FUNC_14(VAR_10, VAR_11, VAR_27, VAR_13, VAR_14, VAR_15);
        FUNC_7(VAR_1, "%s: Done include of \"%s\"\n", VAR_21, VAR_27);
        if (!VAR_18) {
          FUNC_5(VAR_16);
          return 0;
        }
        break;
      default:
        FUNC_7(VAR_3, "%s: %s: Invalid command\n", VAR_21, VAR_17);
        break;
      }
      break;

    default:
      if ((VAR_17 = FUNC_1(VAR_17, VAR_21, VAR_22)) == ((void*)0))
        continue;

      if (FUNC_10(VAR_17, VAR_11) == 0) {

        if (VAR_15 == VAR_8) {
          FUNC_5(VAR_16);
   return 0;
 }
 while ((VAR_18 = FUNC_13(VAR_20, sizeof VAR_20, VAR_16))) {
          VAR_22 += VAR_18;
          VAR_26 = FUNC_6(*VAR_20);
          VAR_17 = FUNC_11(VAR_20);

          if (*VAR_17 == '\0')
            continue;

          if (!VAR_26) {
            if (*VAR_17 != '!' && VAR_15 == VAR_7)
              VAR_17 = FUNC_1(VAR_17, VAR_21, VAR_22);
            break;
          }

          VAR_19 = FUNC_12(VAR_17);
          if ((VAR_23 = FUNC_3(VAR_17, VAR_19, VAR_24, VAR_17 - VAR_20)) < 0)
            FUNC_7(VAR_3, "%s: %d: Syntax error\n", VAR_21, VAR_22);
          else {
            VAR_25 = VAR_23 > 0 && !FUNC_9(VAR_24[0], "allow");
            if ((VAR_15 != VAR_7 && VAR_25) ||
                (VAR_15 == VAR_7 && !VAR_25)) {




              VAR_28 = VAR_9;
              VAR_9 = ((void*)0);
       FUNC_4(VAR_10, VAR_23, (char const *const *)VAR_24, VAR_13,
                          VAR_11, VAR_14);
              VAR_9 = VAR_28;
            }
          }
        }

 FUNC_5(VAR_16);
 return 0;
      }
      break;
    }
  }
  FUNC_5(VAR_16);
  return -1;
}
