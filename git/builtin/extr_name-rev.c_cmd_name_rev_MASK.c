
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {char* member_2; int* member_3; int member_6; int member_8; int * member_7; int member_5; int * member_4; int member_1; int member_0; } ;
struct object_id {int dummy; } ;
struct object_array {int nr; TYPE_1__* objects; } ;
struct object {scalar_t__ type; } ;
struct name_ref_data {int name_only; int tags_only; int exclude_filters; int ref_filters; int member_3; int member_2; int member_1; int member_0; } ;
struct commit {scalar_t__ date; } ;
typedef int buffer ;
struct TYPE_2__ {int * name; struct object* item; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 struct object_array VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct option FUNC_1 (int ,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (char*) ;
 struct option FUNC_4 (int ,char*,int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct object_array) ;
 int FUNC_6 (struct object*,char const*,struct object_array*) ;
 scalar_t__ VAR_8 ;
 struct object* FUNC_7 (int ,struct object*,char const*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (char*,int,int ) ;
 int FUNC_11 (int ,struct name_ref_data*) ;
 int FUNC_12 (int ,char*,char const*) ;
 struct object* FUNC_13 (int) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (char const*,struct object_id*) ;
 int FUNC_16 (int ,int *) ;
 int VAR_9 ;
 int FUNC_17 (int *) ;
 int VAR_10 ;
 int FUNC_18 (char*,struct name_ref_data*) ;
 int VAR_11 ;
 struct object* FUNC_19 (int ,struct object_id*) ;
 int FUNC_20 (int,char const**,char const*,struct option*,int ,int ) ;
 int VAR_12 ;
 int FUNC_21 (struct object*,int *,int,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_22 (int ,struct option*) ;

int FUNC_23(int VAR_16, const char **VAR_17, const char *VAR_18)
{
 struct object_array VAR_19 = VAR_1;
 int VAR_20 = 0, VAR_21 = 0, VAR_22 = 1, VAR_23 = 0, VAR_24 = 0;
 struct name_ref_data VAR_25 = { 0, 0, VAR_6, VAR_6 };
 struct option VAR_26[] = {
  FUNC_1(0, "name-only", &VAR_25.name_only, FUNC_0("print only names (no SHA-1)")),
  FUNC_1(0, "tags", &VAR_25.tags_only, FUNC_0("only use tags to name the commits")),
  FUNC_4(0, "refs", &VAR_25.ref_filters, FUNC_0("pattern"),
       FUNC_0("only use refs matching <pattern>")),
  FUNC_4(0, "exclude", &VAR_25.exclude_filters, FUNC_0("pattern"),
       FUNC_0("ignore refs matching <pattern>")),
  FUNC_3(""),
  FUNC_1(0, "all", &VAR_20, FUNC_0("list all commits reachable from all refs")),
  FUNC_1(0, "stdin", &VAR_21, FUNC_0("read from stdin")),
  FUNC_1(0, "undefined", &VAR_22, FUNC_0("allow to print `undefined` names (default)")),
  FUNC_1(0, "always", &VAR_23,
      FUNC_0("show abbreviated commit object as fallback")),
  {

   VAR_3, 0, "peel-tag", VAR_24, ((void*)0),
   FUNC_0("dereference tags in the input (internal use)"),
   VAR_5 | VAR_4, ((void*)0), 1,
  },
  FUNC_2(),
 };

 FUNC_17(&VAR_12);
 FUNC_16(VAR_9, ((void*)0));
 VAR_16 = FUNC_20(VAR_16, VAR_17, VAR_18, VAR_26, VAR_11, 0);
 if (VAR_20 + VAR_21 + !!VAR_16 > 1) {
  FUNC_8("Specify either a list, or --all, not both!");
  FUNC_22(VAR_11, VAR_26);
 }
 if (VAR_20 || VAR_21)
  VAR_8 = 0;

 for (; VAR_16; VAR_16--, VAR_17++) {
  struct object_id VAR_27;
  struct object *VAR_28;
  struct commit *VAR_29;

  if (FUNC_15(*VAR_17, &VAR_27)) {
   FUNC_12(VAR_13, "Could not get sha1 for %s. Skipping.\n",
     *VAR_17);
   continue;
  }

  VAR_29 = ((void*)0);
  VAR_28 = FUNC_19(VAR_15, &VAR_27);
  if (VAR_28) {
   struct object *VAR_30 = FUNC_7(VAR_15,
         VAR_28, *VAR_17, 0);
   if (VAR_30 && VAR_30->type == VAR_2)
    VAR_29 = (struct commit *)VAR_30;
  }

  if (!VAR_28) {
   FUNC_12(VAR_13, "Could not get object for %s. Skipping.\n",
     *VAR_17);
   continue;
  }

  if (VAR_29) {
   if (VAR_8 > VAR_29->date)
    VAR_8 = VAR_29->date;
  }

  if (VAR_24) {
   if (!VAR_29) {
    FUNC_12(VAR_13, "Could not get commit for %s. Skipping.\n",
     *VAR_17);
    continue;
   }
   VAR_28 = (struct object *)VAR_29;
  }
  FUNC_6(VAR_28, *VAR_17, &VAR_19);
 }

 if (VAR_8) {

  if (VAR_8 > VAR_7 + VAR_0)
   VAR_8 = VAR_8 - VAR_0;
  else
   VAR_8 = VAR_7;
 }
 FUNC_11(VAR_10, &VAR_25);

 if (VAR_21) {
  char VAR_31[2048];

  while (!FUNC_9(VAR_14)) {
   char *VAR_32 = FUNC_10(VAR_31, sizeof(VAR_31), VAR_14);
   if (!VAR_32)
    break;
   FUNC_18(VAR_32, &VAR_25);
  }
 } else if (VAR_20) {
  int VAR_33, VAR_34;

  VAR_34 = FUNC_14();
  for (VAR_33 = 0; VAR_33 < VAR_34; VAR_33++) {
   struct object *VAR_35 = FUNC_13(VAR_33);
   if (!VAR_35 || VAR_35->type != VAR_2)
    continue;
   FUNC_21(VAR_35, ((void*)0),
      VAR_23, VAR_22, VAR_25.name_only);
  }
 } else {
  int VAR_36;
  for (VAR_36 = 0; VAR_36 < VAR_19.nr; VAR_36++)
   FUNC_21(VAR_19.objects[VAR_36].item, VAR_19.objects[VAR_36].name,
      VAR_23, VAR_22, VAR_25.name_only);
 }

 FUNC_5(VAR_19);
 return 0;
}
