
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct string_list* server_options; } ;
struct string_list {scalar_t__ nr; } ;
struct remote {char** url; int url_nr; } ;
struct ref_sorting {int dummy; } ;
struct ref_array_item {char* symref; char* refname; int objectname; } ;
struct ref_array {int nr; struct ref_array_item** items; } ;
struct ref {int symref; int old_oid; int name; struct ref* next; } ;
struct option {char* member_2; char const** member_3; int member_6; int member_5; int member_4; int member_1; int member_0; } ;
struct argv_array {int dummy; } ;
typedef int ref_array ;


 struct argv_array VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct option FUNC_1 (char,char*,unsigned int*,int ,unsigned int) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (struct ref_sorting**) ;
 struct option FUNC_5 (int ,char*,int*,int ,int,int ) ;
 struct option FUNC_6 (int ,char*,char const**,int ,int ) ;
 struct option FUNC_7 (char,char*,struct string_list*,int ,int ) ;
 struct option FUNC_8 (int*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct string_list VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (struct ref_sorting*) ;
 int FUNC_10 (struct argv_array*,char*) ;
 int FUNC_11 (struct ref const*,unsigned int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ,char*,char*) ;
 int VAR_10 ;
 int FUNC_14 (struct ref_array*,int ,int) ;
 char* FUNC_15 (int *) ;
 int FUNC_16 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_17 (char*,char*,...) ;
 int FUNC_18 (struct ref_array*) ;
 struct ref_array_item* FUNC_19 (struct ref_array*,int ,int *) ;
 int FUNC_20 (struct ref_sorting*,struct ref_array*) ;
 struct remote* FUNC_21 (char const*) ;
 int VAR_11 ;
 int FUNC_22 (char const**,int ) ;
 scalar_t__ FUNC_23 (struct transport*) ;
 struct transport* FUNC_24 (struct remote*,int *) ;
 struct ref* FUNC_25 (struct transport*,struct argv_array*) ;
 int FUNC_26 (struct transport*,int ,char const*) ;
 char** FUNC_27 (int,int) ;
 char* FUNC_28 (int ) ;
 char* FUNC_29 (char*,char const*) ;

int FUNC_30(int VAR_12, const char **VAR_13, const char *VAR_14)
{
 const char *VAR_15 = ((void*)0);
 unsigned VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 const char *VAR_21 = ((void*)0);
 const char **VAR_22 = ((void*)0);
 struct argv_array VAR_23 = VAR_0;
 int VAR_24;
 struct string_list VAR_25 = VAR_8;

 struct remote *VAR_26;
 struct transport *VAR_27;
 const struct ref *VAR_28;
 struct ref_array VAR_29;
 static struct ref_sorting *VAR_30 = ((void*)0), **VAR_31 = &VAR_30;

 struct option VAR_32[] = {
  FUNC_8(&VAR_18, FUNC_0("do not print remote URL")),
  FUNC_6(0, "upload-pack", &VAR_21, FUNC_0("exec"),
      FUNC_0("path of git-upload-pack on the remote host")),
  { VAR_1, 0, "exec", &VAR_21, FUNC_0("exec"),
      FUNC_0("path of git-upload-pack on the remote host"),
      VAR_2 },
  FUNC_1('t', "tags", &VAR_16, FUNC_0("limit to tags"), VAR_7),
  FUNC_1('h', "heads", &VAR_16, FUNC_0("limit to heads"), VAR_5),
  FUNC_1(0, "refs", &VAR_16, FUNC_0("do not show peeled tags"), VAR_6),
  FUNC_2(0, "get-url", &VAR_17,
    FUNC_0("take url.<base>.insteadOf into account")),
  FUNC_4(VAR_31),
  FUNC_5(0, "exit-code", &VAR_19,
         FUNC_0("exit with exit code 2 if no matching refs are found"),
         2, VAR_3),
  FUNC_2(0, "symref", &VAR_20,
    FUNC_0("show underlying ref in addition to the object pointed by it")),
  FUNC_7('o', "server-option", &VAR_25, FUNC_0("server-specific"), FUNC_0("option to transmit")),
  FUNC_3()
 };

 FUNC_14(&VAR_29, 0, sizeof(VAR_29));

 VAR_12 = FUNC_16(VAR_12, VAR_13, VAR_14, VAR_32, VAR_10,
        VAR_4);
 VAR_15 = VAR_13[0];

 if (VAR_12 > 1) {
  int VAR_33;
  VAR_22 = FUNC_27(VAR_12, sizeof(const char *));
  for (VAR_33 = 1; VAR_33 < VAR_12; VAR_33++) {
   VAR_22[VAR_33 - 1] = FUNC_29("*/%s", VAR_13[VAR_33]);
  }
 }

 if (VAR_16 & VAR_7)
  FUNC_10(&VAR_23, "refs/tags/");
 if (VAR_16 & VAR_5)
  FUNC_10(&VAR_23, "refs/heads/");

 VAR_26 = FUNC_21(VAR_15);
 if (!VAR_26) {
  if (VAR_15)
   FUNC_12("bad repository '%s'", VAR_15);
  FUNC_12("No remote configured to list refs from.");
 }
 if (!VAR_26->url_nr)
  FUNC_12("remote %s has no configured URL", VAR_15);

 if (VAR_17) {
  FUNC_17("%s\n", *VAR_26->url);
  FUNC_9(VAR_30);
  return 0;
 }

 VAR_27 = FUNC_24(VAR_26, ((void*)0));
 if (VAR_21 != ((void*)0))
  FUNC_26(VAR_27, VAR_9, VAR_21);
 if (VAR_25.nr)
  VAR_27->server_options = &VAR_25;

 VAR_28 = FUNC_25(VAR_27, &VAR_23);
 if (FUNC_23(VAR_27)) {
  FUNC_9(VAR_30);
  return 1;
 }

 if (!VAR_15 && !VAR_18)
  FUNC_13(VAR_11, "From %s\n", *VAR_26->url);
 for ( ; VAR_28; VAR_28 = VAR_28->next) {
  struct ref_array_item *VAR_34;
  if (!FUNC_11(VAR_28, VAR_16))
   continue;
  if (!FUNC_22(VAR_22, VAR_28->name))
   continue;
  VAR_34 = FUNC_19(&VAR_29, VAR_28->name, &VAR_28->old_oid);
  VAR_34->symref = FUNC_28(VAR_28->symref);
 }

 if (VAR_30)
  FUNC_20(VAR_30, &VAR_29);

 for (VAR_24 = 0; VAR_24 < VAR_29.nr; VAR_24++) {
  const struct ref_array_item *VAR_35 = VAR_29.items[VAR_24];
  if (VAR_20 && VAR_35->symref)
   FUNC_17("ref: %s\t%s\n", VAR_35->symref, VAR_35->refname);
  FUNC_17("%s\t%s\n", FUNC_15(&VAR_35->objectname), VAR_35->refname);
  VAR_19 = 0;
 }

 FUNC_9(VAR_30);
 FUNC_18(&VAR_29);
 return VAR_19;
}
