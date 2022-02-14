
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct string_list {int nr; } ;
struct split_commit_graph_opts {int dummy; } ;
struct remote {int dummy; } ;
struct argv_array {int argv; } ;
struct TYPE_11__ {scalar_t__ nr; } ;
struct TYPE_10__ {scalar_t__ choice; } ;
struct TYPE_8__ {scalar_t__ fetch_write_commit_graph; } ;
struct TYPE_9__ {int objects; TYPE_1__ settings; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct string_list VAR_6 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct argv_array*) ;
 int FUNC_2 (char const*,struct string_list*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct argv_array*) ;
 int FUNC_4 (struct argv_array*,char*) ;
 int FUNC_5 (struct argv_array*,char*,char*,int *) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 TYPE_7__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (int*,scalar_t__*) ;
 scalar_t__ VAR_17 ;
 int FUNC_10 (struct string_list*,int) ;
 int FUNC_11 (struct remote*,int,char const**,int) ;
 int FUNC_12 (struct remote*) ;
 int VAR_18 ;
 int FUNC_13 (TYPE_2__*,struct argv_array*,int ,scalar_t__,int ,int,int) ;
 TYPE_5__ VAR_19 ;
 int FUNC_14 (int ,struct string_list*) ;
 int FUNC_15 () ;
 int VAR_20 ;
 int FUNC_16 (int ,int *) ;
 int VAR_21 ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (TYPE_2__*) ;
 int VAR_22 ;
 int FUNC_19 (struct split_commit_graph_opts*,int ,int) ;
 scalar_t__ VAR_23 ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int,char const**,char const*,int ,int ,int ) ;
 int FUNC_22 (TYPE_2__*) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 struct remote* FUNC_23 (char const*) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int *,char*,char const*) ;
 int FUNC_26 (int *,char*) ;
 int FUNC_27 (struct string_list*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 TYPE_2__* VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_28 (int ,int,struct split_commit_graph_opts*) ;
 scalar_t__ FUNC_29 (char*,scalar_t__) ;

int FUNC_30(int VAR_32, const char **VAR_33, const char *VAR_34)
{
 int VAR_35;
 struct string_list VAR_36 = VAR_6;
 struct remote *VAR_37 = ((void*)0);
 int VAR_38 = 0;
 int VAR_39 = 1;
 struct argv_array VAR_40 = VAR_0;

 FUNC_20("fetch");


 FUNC_26(&VAR_14, "fetch");
 for (VAR_35 = 1; VAR_35 < VAR_32; VAR_35++)
  FUNC_25(&VAR_14, " %s", VAR_33[VAR_35]);

 FUNC_9(&VAR_27,
         &VAR_25);
 FUNC_16(VAR_21, ((void*)0));

 VAR_32 = FUNC_21(VAR_32, VAR_33, VAR_34,
        VAR_8, VAR_9, 0);

 if (VAR_12) {
  if (VAR_12 < 0)
   FUNC_8(FUNC_0("Negative depth in --deepen is not supported"));
  if (VAR_15)
   FUNC_8(FUNC_0("--deepen and --depth are mutually exclusive"));
  VAR_15 = FUNC_29("%d", VAR_12);
 }
 if (VAR_30) {
  if (VAR_15)
   FUNC_8(FUNC_0("--depth and --unshallow cannot be used together"));
  else if (!FUNC_18(VAR_29))
   FUNC_8(FUNC_0("--unshallow on a complete repository does not make sense"));
  else
   VAR_15 = FUNC_29("%d", VAR_3);
 }


 if (VAR_15 && FUNC_6(VAR_15) < 1)
  FUNC_8(FUNC_0("depth %s is not a positive number"), VAR_15);
 if (VAR_15 || VAR_13 || VAR_11.nr)
  VAR_10 = 1;

 if (VAR_19.choice && !FUNC_17())
  FUNC_8("--filter can only be used when extensions.partialClone is set");

 if (VAR_7) {
  if (VAR_32 == 1)
   FUNC_8(FUNC_0("fetch --all does not take a repository argument"));
  else if (VAR_32 > 1)
   FUNC_8(FUNC_0("fetch --all does not make sense with refspecs"));
  (void) FUNC_14(VAR_20, &VAR_36);
 } else if (VAR_32 == 0) {

  VAR_37 = FUNC_23(((void*)0));
 } else if (VAR_23) {

  for (VAR_35 = 0; VAR_35 < VAR_32; VAR_35++)
   if (!FUNC_2(VAR_33[VAR_35], &VAR_36))
    FUNC_8(FUNC_0("No such remote or remote group: %s"), VAR_33[VAR_35]);
 } else {

  (void) FUNC_2(VAR_33[0], &VAR_36);
  if (VAR_36.nr > 1) {

   if (VAR_32 > 1)
    FUNC_8(FUNC_0("Fetching a group and specifying refspecs does not make sense"));
  } else {

   VAR_37 = FUNC_23(VAR_33[0]);
   VAR_39 = (VAR_32 == 1);
   VAR_32--;
   VAR_33++;
  }
 }

 VAR_17 = 0;

 if (VAR_37) {
  if (VAR_19.choice || FUNC_17())
   FUNC_12(VAR_37);
  VAR_38 = FUNC_11(VAR_37, VAR_32, VAR_33, VAR_39);
 } else {
  int VAR_41 = VAR_22;

  if (VAR_19.choice)
   FUNC_8(FUNC_0("--filter can only be used with the remote "
         "configured in extensions.partialclone"));

  if (VAR_41 < 0)
   VAR_41 = VAR_18;


  VAR_38 = FUNC_10(&VAR_36, VAR_41);
 }

 if (!VAR_38 && (VAR_25 != VAR_4)) {
  struct argv_array VAR_42 = VAR_0;
  int VAR_43 = VAR_22;

  if (VAR_43 < 0)
   VAR_43 = VAR_27;
  if (VAR_43 < 0)
   VAR_43 = VAR_18;

  FUNC_1(&VAR_42);
  VAR_38 = FUNC_13(VAR_29,
          &VAR_42,
          VAR_28,
          VAR_25,
          VAR_26,
          VAR_31 < 0,
          VAR_43);
  FUNC_3(&VAR_42);
 }

 FUNC_27(&VAR_36, 0);

 FUNC_22(VAR_29);
 if (VAR_29->settings.fetch_write_commit_graph) {
  int VAR_44 = VAR_2;
  struct split_commit_graph_opts VAR_45;
  FUNC_19(&VAR_45, 0, sizeof(struct split_commit_graph_opts));

  if (VAR_24)
   VAR_44 |= VAR_1;

  FUNC_28(FUNC_15(),
          VAR_44,
          &VAR_45);
 }

 FUNC_7(VAR_29->objects);

 if (VAR_16) {
  FUNC_5(&VAR_40, "gc", "--auto", ((void*)0));
  if (VAR_31 < 0)
   FUNC_4(&VAR_40, "--quiet");
  FUNC_24(VAR_40.argv, VAR_5);
  FUNC_3(&VAR_40);
 }

 return VAR_38;
}
