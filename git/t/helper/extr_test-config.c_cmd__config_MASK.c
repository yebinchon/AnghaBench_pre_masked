
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct config_set {int dummy; } ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*,int*) ;
 int FUNC_4 (char const*,int*) ;
 int FUNC_5 (char const*,char const**) ;
 int FUNC_6 (char const*,char const**) ;
 struct string_list* FUNC_7 (char const*) ;
 int FUNC_8 (struct config_set*,char const*) ;
 int FUNC_9 (struct config_set*) ;
 int FUNC_10 (struct config_set*,char const*,char const**) ;
 struct string_list* FUNC_11 (struct config_set*,char const*) ;
 int FUNC_12 (struct config_set*) ;
 int VAR_1 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ,void*) ;
 int FUNC_15 () ;
 int VAR_2 ;
 int FUNC_16 (char const*,char*) ;

int FUNC_17(int VAR_3, const char **VAR_4)
{
 int VAR_5, VAR_6;
 const char *VAR_7;
 const struct string_list *VAR_8;
 struct config_set VAR_9;

 if (VAR_3 == 3 && !FUNC_16(VAR_4[1], "read_early_config")) {
  FUNC_14(VAR_0, (void *)VAR_4[2]);
  return 0;
 }

 FUNC_15();

 FUNC_12(&VAR_9);

 if (VAR_3 < 2) {
  FUNC_1(VAR_2, "Please, provide a command name on the command-line\n");
  goto exit1;
 } else if (VAR_3 == 3 && !FUNC_16(VAR_4[1], "get_value")) {
  if (!FUNC_6(VAR_4[2], &VAR_7)) {
   if (!VAR_7)
    FUNC_13("(NULL)\n");
   else
    FUNC_13("%s\n", VAR_7);
   goto exit0;
  } else {
   FUNC_13("Value not found for \"%s\"\n", VAR_4[2]);
   goto exit1;
  }
 } else if (VAR_3 == 3 && !FUNC_16(VAR_4[1], "get_value_multi")) {
  VAR_8 = FUNC_7(VAR_4[2]);
  if (VAR_8) {
   for (VAR_5 = 0; VAR_5 < VAR_8->nr; VAR_5++) {
    VAR_7 = VAR_8->items[VAR_5].string;
    if (!VAR_7)
     FUNC_13("(NULL)\n");
    else
     FUNC_13("%s\n", VAR_7);
   }
   goto exit0;
  } else {
   FUNC_13("Value not found for \"%s\"\n", VAR_4[2]);
   goto exit1;
  }
 } else if (VAR_3 == 3 && !FUNC_16(VAR_4[1], "get_int")) {
  if (!FUNC_4(VAR_4[2], &VAR_6)) {
   FUNC_13("%d\n", VAR_6);
   goto exit0;
  } else {
   FUNC_13("Value not found for \"%s\"\n", VAR_4[2]);
   goto exit1;
  }
 } else if (VAR_3 == 3 && !FUNC_16(VAR_4[1], "get_bool")) {
  if (!FUNC_3(VAR_4[2], &VAR_6)) {
   FUNC_13("%d\n", VAR_6);
   goto exit0;
  } else {
   FUNC_13("Value not found for \"%s\"\n", VAR_4[2]);
   goto exit1;
  }
 } else if (VAR_3 == 3 && !FUNC_16(VAR_4[1], "get_string")) {
  if (!FUNC_5(VAR_4[2], &VAR_7)) {
   FUNC_13("%s\n", VAR_7);
   goto exit0;
  } else {
   FUNC_13("Value not found for \"%s\"\n", VAR_4[2]);
   goto exit1;
  }
 } else if (!FUNC_16(VAR_4[1], "configset_get_value")) {
  for (VAR_5 = 3; VAR_5 < VAR_3; VAR_5++) {
   int VAR_10;
   if ((VAR_10 = FUNC_8(&VAR_9, VAR_4[VAR_5]))) {
    FUNC_1(VAR_2, "Error (%d) reading configuration file %s.\n", VAR_10, VAR_4[VAR_5]);
    goto exit2;
   }
  }
  if (!FUNC_10(&VAR_9, VAR_4[2], &VAR_7)) {
   if (!VAR_7)
    FUNC_13("(NULL)\n");
   else
    FUNC_13("%s\n", VAR_7);
   goto exit0;
  } else {
   FUNC_13("Value not found for \"%s\"\n", VAR_4[2]);
   goto exit1;
  }
 } else if (!FUNC_16(VAR_4[1], "configset_get_value_multi")) {
  for (VAR_5 = 3; VAR_5 < VAR_3; VAR_5++) {
   int VAR_11;
   if ((VAR_11 = FUNC_8(&VAR_9, VAR_4[VAR_5]))) {
    FUNC_1(VAR_2, "Error (%d) reading configuration file %s.\n", VAR_11, VAR_4[VAR_5]);
    goto exit2;
   }
  }
  VAR_8 = FUNC_11(&VAR_9, VAR_4[2]);
  if (VAR_8) {
   for (VAR_5 = 0; VAR_5 < VAR_8->nr; VAR_5++) {
    VAR_7 = VAR_8->items[VAR_5].string;
    if (!VAR_7)
     FUNC_13("(NULL)\n");
    else
     FUNC_13("%s\n", VAR_7);
   }
   goto exit0;
  } else {
   FUNC_13("Value not found for \"%s\"\n", VAR_4[2]);
   goto exit1;
  }
 } else if (!FUNC_16(VAR_4[1], "iterate")) {
  FUNC_2(VAR_1, ((void*)0));
  goto exit0;
 }

 FUNC_0("%s: Please check the syntax and the function name", VAR_4[0]);

exit0:
 FUNC_9(&VAR_9);
 return 0;

exit1:
 FUNC_9(&VAR_9);
 return 1;

exit2:
 FUNC_9(&VAR_9);
 return 2;
}
