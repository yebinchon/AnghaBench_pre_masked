
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct string_list_item {int string; struct branch_info* util; } ;
struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {char const* buf; } ;
struct remote {int name; } ;
struct option {int dummy; } ;
struct known_remotes {struct remote* to_delete; int * member_1; int * member_0; } ;
struct branches_for_remote {struct remote* remote; struct known_remotes* keep; struct string_list* skipped; struct string_list* branches; } ;
struct branch_info {scalar_t__ remote_name; } ;
typedef int cb_data ;
struct TYPE_4__ {int nr; struct string_list_item* items; } ;
struct TYPE_3__ {char* string; } ;


 int VAR_0 ;
 struct option FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 struct string_list VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,struct string_list*,int ) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,struct branches_for_remote*) ;
 int FUNC_7 (int ,struct known_remotes*) ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char const*,int *) ;
 int FUNC_11 (char const*,int *) ;
 int FUNC_12 (struct branches_for_remote*,int ,int) ;
 int FUNC_13 () ;
 struct remote* FUNC_14 (char const*) ;
 int FUNC_15 (struct remote*,int) ;
 int VAR_8 ;
 int FUNC_16 (struct strbuf*,char*,int ,...) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (struct strbuf*) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (struct string_list*,int ) ;
 int FUNC_21 (int ,struct option*) ;

__attribute__((used)) static int FUNC_22(int VAR_9, const char **VAR_10)
{
 struct option VAR_11[] = {
  FUNC_0()
 };
 struct remote *VAR_12;
 struct strbuf VAR_13 = VAR_2;
 struct known_remotes VAR_14 = { ((void*)0), ((void*)0) };
 struct string_list VAR_15 = VAR_3;
 struct string_list VAR_16 = VAR_3;
 struct branches_for_remote VAR_17;
 int VAR_18, VAR_19;

 FUNC_12(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.branches = &VAR_15;
 VAR_17.skipped = &VAR_16;
 VAR_17.keep = &VAR_14;

 if (VAR_9 != 2)
  FUNC_21(VAR_7, VAR_11);

 VAR_12 = FUNC_14(VAR_10[1]);
 if (!FUNC_15(VAR_12, 1))
  FUNC_4(FUNC_2("No such remote: '%s'"), VAR_10[1]);

 VAR_14.to_delete = VAR_12;
 FUNC_7(VAR_5, &VAR_14);

 FUNC_13();
 for (VAR_18 = 0; VAR_18 < VAR_6.nr; VAR_18++) {
  struct string_list_item *VAR_20 = VAR_6.items + VAR_18;
  struct branch_info *VAR_21 = VAR_20->util;
  if (VAR_21->remote_name && !FUNC_19(VAR_21->remote_name, VAR_12->name)) {
   const char *VAR_22[] = { "remote", "merge", ((void*)0) }, **VAR_23;
   for (VAR_23 = VAR_22; *VAR_23; VAR_23++) {
    FUNC_18(&VAR_13);
    FUNC_16(&VAR_13, "branch.%s.%s",
      VAR_20->string, *VAR_23);
    VAR_19 = FUNC_11(VAR_13.buf, ((void*)0));
    if (VAR_19 && VAR_19 != VAR_0)
     FUNC_4(FUNC_2("could not unset '%s'"), VAR_13.buf);
   }
  }
 }






 VAR_17.remote = VAR_12;
 VAR_19 = FUNC_6(VAR_4, &VAR_17);
 FUNC_17(&VAR_13);

 if (!VAR_19)
  VAR_19 = FUNC_3("remote: remove", &VAR_15, VAR_1);
 FUNC_20(&VAR_15, 0);

 if (VAR_16.nr) {
  FUNC_9(VAR_8,
      FUNC_1("Note: A branch outside the refs/remotes/ hierarchy was not removed;\n"
         "to delete it, use:",
         "Note: Some branches outside the refs/remotes/ hierarchy were not removed;\n"
         "to delete them, use:",
         VAR_16.nr));
  for (VAR_18 = 0; VAR_18 < VAR_16.nr; VAR_18++)
   FUNC_8(VAR_8, "  git branch -d %s\n",
    VAR_16.items[VAR_18].string);
 }
 FUNC_20(&VAR_16, 0);

 if (!VAR_19) {
  FUNC_16(&VAR_13, "remote.%s", VAR_12->name);
  if (FUNC_10(VAR_13.buf, ((void*)0)) < 1)
   return FUNC_5(FUNC_2("Could not remove config section '%s'"), VAR_13.buf);
 }

 return VAR_19;
}
