
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_item {int kind; int usage; int flags; int usage_minimum; int usage_maximum; } ;
struct hid_data {int dummy; } ;
struct command {int line; int anyvalue; int value; int debounce; int lastseen; int lastused; char* action; void* name; struct hid_item item; struct command* next; } ;
typedef int report_desc_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int,char*,char const*,int,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (struct command*) ;

 int FUNC_8 (struct hid_data*) ;

 scalar_t__ FUNC_9 (struct hid_data*,struct hid_item*) ;

 struct hid_data* FUNC_10 (int ,int,int) ;
 char* FUNC_11 (int) ;
 char* FUNC_12 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_13 (int ) ;
 struct command* FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*,int,char*,char*,char*,...) ;
 int FUNC_18 (char*,char*,...) ;
 char* FUNC_19 (char*,char) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 void* FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 int * FUNC_23 (char*,char) ;
 int FUNC_24 (int ,char*,char const*,int,char*) ;
 int VAR_4 ;
 int FUNC_25 (char*,char*) ;

struct command *
FUNC_26(const char *VAR_5, report_desc_t VAR_6, int VAR_7, int VAR_8)
{
 FILE *VAR_9;
 char *VAR_10;
 int VAR_11;
 char VAR_12[VAR_2], VAR_13[VAR_2], VAR_14[VAR_2], VAR_15[VAR_2], VAR_16[VAR_2];
 char VAR_17[VAR_2], VAR_18[VAR_2], *VAR_19;
 struct command *VAR_20, *VAR_21;
 struct hid_data *VAR_22;
 struct hid_item VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

 VAR_9 = FUNC_6(VAR_5, "r");
 if (VAR_9 == ((void*)0))
  FUNC_2(1, "%s", VAR_5);

 VAR_21 = ((void*)0);
 for (VAR_11 = 1; ; VAR_11++) {
  if (FUNC_5(VAR_12, sizeof VAR_12, VAR_9) == ((void*)0))
   break;
  if (VAR_12[0] == '#' || VAR_12[0] == '\n')
   continue;
  VAR_10 = FUNC_19(VAR_12, '\n');
  while (VAR_10 && FUNC_13(FUNC_15(VAR_9))) {
   if (FUNC_5(VAR_10, sizeof VAR_12 - FUNC_22(VAR_12), VAR_9) == ((void*)0))
    break;
   VAR_10 = FUNC_19(VAR_12, '\n');
  }
  if (VAR_10)
   *VAR_10 = 0;
  if (FUNC_18(VAR_12, "%s %s %s %[^\n]",
      VAR_13, VAR_14, VAR_15, VAR_16) != 4) {
   if (VAR_3) {
    FUNC_24(VAR_1, "config file `%s', line %d"
           ", syntax error: %s", VAR_5, VAR_11, VAR_12);
    FUNC_7(VAR_21);
    return (((void*)0));
   } else {
    FUNC_3(1, "config file `%s', line %d,"
         ", syntax error: %s", VAR_5, VAR_11, VAR_12);
   }
  }
  VAR_19 = FUNC_19(VAR_13, '#');
  if (VAR_19 != ((void*)0)) {
   *VAR_19 = 0;
   VAR_24 = FUNC_1(VAR_19 + 1);
  } else
   VAR_24 = 0;

  VAR_20 = FUNC_14(sizeof *VAR_20);
  if (VAR_20 == ((void*)0))
   FUNC_2(1, "malloc failed");
  VAR_20->next = VAR_21;
  VAR_21 = VAR_20;
  VAR_20->line = VAR_11;

  if (FUNC_20(VAR_14, "*") == 0) {
   VAR_20->anyvalue = 1;
  } else {
   VAR_20->anyvalue = 0;
   if (FUNC_18(VAR_14, "%d", &VAR_20->value) != 1) {
    if (VAR_3) {
     FUNC_24(VAR_1,
            "config file `%s', line %d, "
            "bad value: %s (should be * or a number)\n",
            VAR_5, VAR_11, VAR_14);
     FUNC_7(VAR_21);
     return (((void*)0));
    } else {
     FUNC_3(1, "config file `%s', line %d, "
          "bad value: %s (should be * or a number)\n",
          VAR_5, VAR_11, VAR_14);
    }
   }
  }

  if (FUNC_18(VAR_15, "%d", &VAR_20->debounce) != 1) {
   if (VAR_3) {
    FUNC_24(VAR_1,
           "config file `%s', line %d, "
           "bad value: %s (should be a number >= 0)\n",
           VAR_5, VAR_11, VAR_15);
    FUNC_7(VAR_21);
    return (((void*)0));
   } else {
    FUNC_3(1, "config file `%s', line %d, "
         "bad value: %s (should be a number >= 0)\n",
         VAR_5, VAR_11, VAR_15);
   }
  }

  VAR_18[0] = 0;
  VAR_25 = 0;
  for (VAR_22 = FUNC_10(VAR_6, 1 << 128, VAR_7);
       FUNC_9(VAR_22, &VAR_23); ) {
   if (VAR_4 > 2)
    FUNC_16("kind=%d usage=%x\n", VAR_23.kind, VAR_23.usage);
   if (VAR_23.flags & VAR_0)
    continue;
   switch (VAR_23.kind) {
   case 128:
    if (VAR_23.usage_minimum != 0 ||
        VAR_23.usage_maximum != 0) {
     VAR_27 = VAR_23.usage_minimum;
     VAR_28 = VAR_23.usage_maximum;
     VAR_29 = 1;
    } else {
     VAR_27 = VAR_23.usage;
     VAR_28 = VAR_23.usage;
     VAR_29 = 0;
    }
    for (VAR_26 = VAR_27; VAR_26 <= VAR_28; VAR_26++) {
     if (VAR_18[0]) {
      FUNC_17(VAR_17, sizeof VAR_17,
        "%s.%s:%s", VAR_18+1,
        FUNC_12(FUNC_0(VAR_26)),
        FUNC_11(VAR_26));
     } else {
      FUNC_17(VAR_17, sizeof VAR_17,
        "%s:%s",
        FUNC_12(FUNC_0(VAR_26)),
        FUNC_11(VAR_26));
     }
     if (VAR_4 > 2)
      FUNC_16("usage %s\n", VAR_17);
     VAR_30 = FUNC_22(VAR_17) - FUNC_22(VAR_13);
     if (VAR_30 > 0) {
      if (FUNC_20(VAR_17 + VAR_30, VAR_13))
       continue;
      if (VAR_17[VAR_30 - 1] != '.')
       continue;
     } else if (FUNC_20(VAR_17, VAR_13))
      continue;
     if (VAR_24 == VAR_25++)
      goto foundhid;
    }
    break;
   case 130:
    FUNC_17(VAR_18 + FUNC_22(VAR_18),
        sizeof VAR_18 - FUNC_22(VAR_18), ".%s:%s",
        FUNC_12(FUNC_0(VAR_23.usage)),
        FUNC_11(VAR_23.usage));
    break;
   case 129:
    if (VAR_18[0])
     *FUNC_23(VAR_18, '.') = 0;
    break;
   default:
    break;
   }
  }
  if (VAR_8) {
   if (VAR_4)
    FUNC_25("ignore item '%s'", VAR_13);
   continue;
  }
  if (VAR_3) {
   FUNC_24(VAR_1, "config file `%s', line %d, HID "
          "item not found: `%s'\n", VAR_5, VAR_11, VAR_13);
   FUNC_7(VAR_21);
   return (((void*)0));
  } else {
   FUNC_3(1, "config file `%s', line %d, HID item "
        "not found: `%s'\n", VAR_5, VAR_11, VAR_13);
  }

 foundhid:
  FUNC_8(VAR_22);
  VAR_20->lastseen = -1;
  VAR_20->lastused = -1;
  VAR_20->item = VAR_23;
  VAR_20->name = FUNC_21(VAR_13);
  VAR_20->action = FUNC_21(VAR_16);
  if (VAR_29) {
   if (VAR_20->value == 1)
    VAR_20->value = VAR_26 - VAR_27;
   else
    VAR_20->value = -1;
  }

  if (VAR_4)
   FUNC_16("PARSE:%d %s, %d, '%s'\n", VAR_20->line, VAR_13,
          VAR_20->value, VAR_20->action);
 }
 FUNC_4(VAR_9);
 return (VAR_21);
}
