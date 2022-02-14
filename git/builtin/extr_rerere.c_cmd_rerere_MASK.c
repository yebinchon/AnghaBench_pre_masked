
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct rerere_id {int dummy; } ;
struct pathspec {int dummy; } ;
struct option {int dummy; } ;
struct TYPE_2__ {char* string; struct rerere_id* util; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int ,char*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rerere_id* VAR_4 ;
 struct string_list VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,char const*,char const*,char const*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_6 ;
 int FUNC_7 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_8 (struct pathspec*,int ,int ,char const*,char const**) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,struct string_list*) ;
 int FUNC_12 (int ,struct pathspec*) ;
 int FUNC_13 (int ,struct string_list*) ;
 int FUNC_14 (struct rerere_id const*,char*) ;
 int FUNC_15 (int ,struct string_list*) ;
 int VAR_7 ;
 scalar_t__ FUNC_16 (int ,struct string_list*,int) ;
 int FUNC_17 (char const*,char*) ;
 int FUNC_18 (struct string_list*,int) ;
 int VAR_8 ;
 int FUNC_19 (int ,struct option*) ;
 int FUNC_20 (int ) ;

int FUNC_21(int VAR_9, const char **VAR_10, const char *VAR_11)
{
 struct string_list VAR_12 = VAR_5;
 int VAR_13, VAR_14 = -1, VAR_15 = 0;

 struct option VAR_16[] = {
  FUNC_2(0, "rerere-autoupdate", &VAR_14,
   FUNC_0("register clean resolutions in index"), 1),
  FUNC_1(),
 };

 VAR_9 = FUNC_7(VAR_9, VAR_10, VAR_11, VAR_16, VAR_7, 0);

 FUNC_6(VAR_6, ((void*)0));

 if (VAR_14 == 1)
  VAR_15 = VAR_1;
 if (VAR_14 == 0)
  VAR_15 = VAR_2;

 if (VAR_9 < 1)
  return FUNC_10(VAR_8, VAR_15);

 if (!FUNC_17(VAR_10[0], "forget")) {
  struct pathspec VAR_17;
  if (VAR_9 < 2)
   FUNC_20(FUNC_3("'git rerere forget' without paths is deprecated"));
  FUNC_8(&VAR_17, 0, VAR_0,
          VAR_11, VAR_10 + 1);
  return FUNC_12(VAR_8, &VAR_17);
 }

 if (!FUNC_17(VAR_10[0], "clear")) {
  FUNC_11(VAR_8, &VAR_12);
 } else if (!FUNC_17(VAR_10[0], "gc"))
  FUNC_13(VAR_8, &VAR_12);
 else if (!FUNC_17(VAR_10[0], "status")) {
  if (FUNC_16(VAR_8, &VAR_12,
     VAR_15 | VAR_3) < 0)
   return 0;
  for (VAR_13 = 0; VAR_13 < VAR_12.nr; VAR_13++)
   FUNC_9("%s\n", VAR_12.items[VAR_13].string);
 } else if (!FUNC_17(VAR_10[0], "remaining")) {
  FUNC_15(VAR_8, &VAR_12);
  for (VAR_13 = 0; VAR_13 < VAR_12.nr; VAR_13++) {
   if (VAR_12.items[VAR_13].util != VAR_4)
    FUNC_9("%s\n", VAR_12.items[VAR_13].string);
   else


    VAR_12.items[VAR_13].util = ((void*)0);
  }
 } else if (!FUNC_17(VAR_10[0], "diff")) {
  if (FUNC_16(VAR_8, &VAR_12,
     VAR_15 | VAR_3) < 0)
   return 0;
  for (VAR_13 = 0; VAR_13 < VAR_12.nr; VAR_13++) {
   const char *VAR_18 = VAR_12.items[VAR_13].string;
   const struct rerere_id *VAR_19 = VAR_12.items[VAR_13].util;
   if (FUNC_5(FUNC_14(VAR_19, "preimage"), VAR_18, VAR_18, VAR_18))
    FUNC_4(FUNC_3("unable to generate diff for '%s'"), FUNC_14(VAR_19, ((void*)0)));
  }
 } else
  FUNC_19(VAR_7, VAR_16);

 FUNC_18(&VAR_12, 1);
 return 0;
}
