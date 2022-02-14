
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct branch_info* util; } ;
struct branch_info {char* remote_name; int rebase; int merge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int VAR_3 ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (int *,char*) ;
 struct string_list_item* FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,size_t*) ;
 int FUNC_9 (int ,char const*) ;
 struct branch_info* FUNC_10 (int,int) ;
 char* FUNC_11 (char const*,size_t) ;
 char* FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,int) ;

__attribute__((used)) static int FUNC_14(const char *VAR_4, const char *VAR_5, void *VAR_6)
{
 if (FUNC_3(VAR_4, "branch.")) {
  const char *VAR_7 = VAR_4;
  char *VAR_8;
  struct string_list_item *VAR_9;
  struct branch_info *VAR_10;
  enum { REMOTE, MERGE, REBASE } VAR_11;
  size_t VAR_12;

  VAR_4 += 7;
  if (FUNC_8(VAR_4, ".remote", &VAR_12)) {
   VAR_8 = FUNC_11(VAR_4, VAR_12);
   VAR_11 = REMOTE;
  } else if (FUNC_8(VAR_4, ".merge", &VAR_12)) {
   VAR_8 = FUNC_11(VAR_4, VAR_12);
   VAR_11 = MERGE;
  } else if (FUNC_8(VAR_4, ".rebase", &VAR_12)) {
   VAR_8 = FUNC_11(VAR_4, VAR_12);
   VAR_11 = REBASE;
  } else
   return 0;

  VAR_9 = FUNC_7(&VAR_3, VAR_8);

  if (!VAR_9->util)
   VAR_9->util = FUNC_10(1, sizeof(struct branch_info));
  VAR_10 = VAR_9->util;
  if (VAR_11 == REMOTE) {
   if (VAR_10->remote_name)
    FUNC_9(FUNC_0("more than one %s"), VAR_7);
   VAR_10->remote_name = FUNC_12(VAR_5);
  } else if (VAR_11 == MERGE) {
   char *VAR_13 = FUNC_4(VAR_5, ' ');
   VAR_5 = FUNC_1(VAR_5);
   while (VAR_13) {
    char *VAR_14;
    VAR_14 = FUNC_13(VAR_5, VAR_13 - VAR_5);
    FUNC_6(&VAR_10->merge, VAR_14);
    VAR_5 = FUNC_1(VAR_13 + 1);
    VAR_13 = FUNC_4(VAR_5, ' ');
   }
   FUNC_6(&VAR_10->merge, FUNC_12(VAR_5));
  } else {
   int VAR_15 = FUNC_2(VAR_5);
   if (VAR_15 >= 0)
    VAR_10->rebase = VAR_15;
   else if (!FUNC_5(VAR_5, "preserve"))
    VAR_10->rebase = VAR_1;
   else if (!FUNC_5(VAR_5, "merges"))
    VAR_10->rebase = VAR_2;
   else if (!FUNC_5(VAR_5, "interactive"))
    VAR_10->rebase = VAR_0;
  }
 }
 return 0;
}
