
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct rebase_options {int keep_empty; int allow_empty_message; int rebase_merges; int rebase_cousins; int autosquash; int signoff; int reschedule_failed_exec; struct object_id* squash_onto; int allow_rerere_autoupdate; int cmd; int onto_name; int switch_to; int strategy_opts; int strategy; struct object_id gpg_sign_opt; int head_name; struct object_id upstream; struct object_id restrict_revision; struct object_id onto; int flags; } ;
struct option {char member_1; char* member_2; intptr_t member_8; int * member_7; int member_6; int member_5; int member_4; struct object_id* member_3; int member_0; } ;
typedef enum action { ____Placeholder_action } action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 struct option FUNC_1 (char,char*,int *,int ,int) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 (int ,char*,int*,int ,int ) ;
 struct option FUNC_4 () ;
 struct option FUNC_5 (int ,char*,int *,int ,int ) ;
 struct option FUNC_6 (int *) ;
 struct option FUNC_7 (int ,char*,int *,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct rebase_options VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (char*) ;
 int VAR_20 ;
 int FUNC_9 (struct object_id*) ;
 struct object_id VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_11 (struct rebase_options*,int) ;
 int FUNC_12 (int ,struct option*) ;
 int FUNC_13 (int ) ;

int FUNC_14(int VAR_24, const char **VAR_25, const char *VAR_26)
{
 struct rebase_options VAR_27 = VAR_18;
 struct object_id VAR_28 = VAR_21;
 enum action VAR_29 = VAR_5;
 struct option VAR_30[] = {
  FUNC_5(0, "ff", &VAR_27.flags, FUNC_0("allow fast-forward"),
      VAR_16),
  FUNC_2(0, "keep-empty", &VAR_27.keep_empty, FUNC_0("keep empty commits")),
  FUNC_2(0, "allow-empty-message", &VAR_27.allow_empty_message,
    FUNC_0("allow commits with empty messages")),
  FUNC_2(0, "rebase-merges", &VAR_27.rebase_merges, FUNC_0("rebase merge commits")),
  FUNC_2(0, "rebase-cousins", &VAR_27.rebase_cousins,
    FUNC_0("keep original branch points of cousins")),
  FUNC_2(0, "autosquash", &VAR_27.autosquash,
    FUNC_0("move commits that begin with squash!/fixup!")),
  FUNC_2(0, "signoff", &VAR_27.signoff, FUNC_0("sign commits")),
  FUNC_1('v', "verbose", &VAR_27.flags,
   FUNC_0("display a diffstat of what changed upstream"),
   VAR_17 | VAR_19 | VAR_15),
  FUNC_3(0, "continue", &VAR_29, FUNC_0("continue rebase"),
       VAR_2),
  FUNC_3(0, "skip", &VAR_29, FUNC_0("skip commit"), VAR_9),
  FUNC_3(0, "edit-todo", &VAR_29, FUNC_0("edit the todo list"),
       VAR_3),
  FUNC_3(0, "show-current-patch", &VAR_29, FUNC_0("show the current patch"),
       VAR_8),
  FUNC_3(0, "shorten-ids", &VAR_29,
   FUNC_0("shorten commit ids in the todo list"), VAR_7),
  FUNC_3(0, "expand-ids", &VAR_29,
   FUNC_0("expand commit ids in the todo list"), VAR_4),
  FUNC_3(0, "check-todo-list", &VAR_29,
   FUNC_0("check the todo list"), VAR_1),
  FUNC_3(0, "rearrange-squash", &VAR_29,
   FUNC_0("rearrange fixup/squash lines"), VAR_6),
  FUNC_3(0, "add-exec-commands", &VAR_29,
   FUNC_0("insert exec commands in todo list"), VAR_0),
  { VAR_10, 0, "onto", &VAR_27.onto, FUNC_0("onto"), FUNC_0("onto"),
    VAR_13, VAR_22, 0 },
  { VAR_10, 0, "restrict-revision", &VAR_27.restrict_revision,
    FUNC_0("restrict-revision"), FUNC_0("restrict revision"),
    VAR_13, VAR_22, 0 },
  { VAR_10, 0, "squash-onto", &VAR_28, FUNC_0("squash-onto"),
    FUNC_0("squash onto"), VAR_13, VAR_23, 0 },
  { VAR_10, 0, "upstream", &VAR_27.upstream, FUNC_0("upstream"),
    FUNC_0("the upstream commit"), VAR_13, VAR_22,
    0 },
  FUNC_7(0, "head-name", &VAR_27.head_name, FUNC_0("head-name"), FUNC_0("head name")),
  { VAR_11, 'S', "gpg-sign", &VAR_27.gpg_sign_opt, FUNC_0("key-id"),
   FUNC_0("GPG-sign commits"),
   VAR_14, ((void*)0), (intptr_t) "" },
  FUNC_7(0, "strategy", &VAR_27.strategy, FUNC_0("strategy"),
      FUNC_0("rebase strategy")),
  FUNC_7(0, "strategy-opts", &VAR_27.strategy_opts, FUNC_0("strategy-opts"),
      FUNC_0("strategy options")),
  FUNC_7(0, "switch-to", &VAR_27.switch_to, FUNC_0("switch-to"),
      FUNC_0("the branch or commit to checkout")),
  FUNC_7(0, "onto-name", &VAR_27.onto_name, FUNC_0("onto-name"), FUNC_0("onto name")),
  FUNC_7(0, "cmd", &VAR_27.cmd, FUNC_0("cmd"), FUNC_0("the command to run")),
  FUNC_6(&VAR_27.allow_rerere_autoupdate),
  FUNC_2(0, "reschedule-failed-exec", &VAR_27.reschedule_failed_exec,
    FUNC_0("automatically re-schedule any `exec` that fails")),
  FUNC_4()
 };

 VAR_27.rebase_cousins = -1;

 if (VAR_24 == 1)
  FUNC_12(VAR_20, VAR_30);

 VAR_24 = FUNC_10(VAR_24, VAR_25, VAR_26, VAR_30,
   VAR_20, VAR_12);

 if (!FUNC_9(&VAR_28))
  VAR_27.squash_onto = &VAR_28;

 if (VAR_27.rebase_cousins >= 0 && !VAR_27.rebase_merges)
  FUNC_13(FUNC_8("--[no-]rebase-cousins has no effect without "
     "--rebase-merges"));

 return !!FUNC_11(&VAR_27, VAR_29);
}
