
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct strbuf {char const* buf; int len; } ;
struct repository {TYPE_5__* index; } ;
struct replay_opts {int xopts_nr; char* strategy; char* gpg_sign; int allow_rerere_auto; int * xopts; scalar_t__ allow_ff; int squash_onto; scalar_t__ have_squash_onto; } ;
struct merge_options {char* branch1; char* branch2; int buffer_output; struct strbuf obuf; } ;
struct lock_file {int dummy; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_12__ {int oid; } ;
struct commit {TYPE_4__ object; TYPE_3__* parents; } ;
struct child_process {int git_cmd; int args; int env_array; } ;
struct TYPE_15__ {struct commit_list* next; } ;
struct TYPE_14__ {int hexsz; } ;
struct TYPE_13__ {scalar_t__ cache_changed; } ;
struct TYPE_11__ {struct commit_list* next; TYPE_2__* item; } ;
struct TYPE_9__ {int oid; } ;
struct TYPE_10__ {TYPE_1__ object; } ;


 int VAR_0 ;
 struct child_process VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct strbuf VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_8__* FUNC_3 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,...) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct repository*,int *,int *,int ,struct replay_opts*) ;
 int FUNC_8 (char const*,char const**) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct commit_list*) ;
 char* FUNC_11 (struct commit*,int *) ;
 struct commit_list* FUNC_12 (struct commit*,struct commit*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct repository*) ;
 char* FUNC_15 (struct repository*) ;
 char* FUNC_16 (struct repository*) ;
 char* FUNC_17 (struct repository*) ;
 char* FUNC_18 (struct replay_opts*) ;
 int FUNC_19 (struct merge_options*,struct repository*) ;
 scalar_t__ FUNC_20 (char const) ;
 struct commit* FUNC_21 (char*) ;
 struct commit* FUNC_22 (char const*,int,struct strbuf*) ;
 int FUNC_23 (struct merge_options*,struct commit*,struct commit*,struct commit_list*,struct commit**) ;
 char* FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int *,int *) ;
 scalar_t__ FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (struct repository*,struct lock_file*,int ) ;
 scalar_t__ FUNC_28 (struct repository*) ;
 int FUNC_29 (struct repository*,int ) ;
 int FUNC_30 (struct lock_file*) ;
 int FUNC_31 (struct child_process*) ;
 int FUNC_32 (struct repository*,char*,struct replay_opts*,int) ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_33 (struct strbuf*,char*,char*,...) ;
 int FUNC_34 (struct strbuf*) ;
 int FUNC_35 (struct strbuf*) ;
 int FUNC_36 (char*,char*) ;
 int FUNC_37 (char const*,char*) ;
 int FUNC_38 (char const*) ;
 scalar_t__ FUNC_39 (char const*,char*) ;
 TYPE_6__* VAR_10 ;
 int FUNC_40 (int ) ;
 int FUNC_41 (struct commit*,char const*) ;
 int FUNC_42 (char const*) ;
 scalar_t__ FUNC_43 (TYPE_5__*,struct lock_file*,int ) ;
 int FUNC_44 (char const*,int,char*,int ) ;

__attribute__((used)) static int FUNC_45(struct repository *VAR_11,
      struct commit *VAR_12,
      const char *VAR_13, int VAR_14,
      int VAR_15, struct replay_opts *VAR_16)
{
 int VAR_17 = (VAR_15 & VAR_6) ?
  VAR_3 | VAR_7 : 0;
 struct strbuf VAR_18 = VAR_5;
 struct commit *VAR_19, *VAR_20, *VAR_21;
 struct commit_list *VAR_22, *VAR_23, *VAR_24 = ((void*)0);
 struct commit_list *VAR_25 = ((void*)0), **VAR_26 = &VAR_25;
 const char *VAR_27 = !VAR_16->xopts_nr &&
  (!VAR_16->strategy || !FUNC_36(VAR_16->strategy, "recursive")) ?
  ((void*)0) : VAR_16->strategy;
 struct merge_options VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 static struct lock_file VAR_34;
 const char *VAR_35;

 if (FUNC_27(VAR_11, &VAR_34, VAR_4) < 0) {
  VAR_32 = -1;
  goto leave_merge;
 }

 VAR_19 = FUNC_21("HEAD");
 if (!VAR_19) {
  VAR_32 = FUNC_5(FUNC_0("cannot merge without a current revision"));
  goto leave_merge;
 }





 VAR_29 = VAR_30 = VAR_14;
 for (VAR_35 = VAR_13; VAR_35 - VAR_13 < VAR_14; VAR_35 += FUNC_39(VAR_35, " \t\n")) {
  if (!*VAR_35)
   break;
  if (*VAR_35 == '#' && (!VAR_35[1] || FUNC_20(VAR_35[1]))) {
   VAR_35 += 1 + FUNC_39(VAR_35 + 1, " \t\n");
   VAR_30 = VAR_35 - VAR_13;
   break;
  }
  VAR_33 = FUNC_37(VAR_35, " \t\n");
  if (!VAR_33)
   continue;
  VAR_20 = FUNC_22(VAR_35, VAR_33, &VAR_18);
  if (!VAR_20) {
   VAR_32 = FUNC_5(FUNC_0("unable to parse '%.*s'"), VAR_33, VAR_35);
   goto leave_merge;
  }
  VAR_26 = &FUNC_3(VAR_20, VAR_26)->next;
  VAR_35 += VAR_33;
  VAR_29 = VAR_35 - VAR_13;
 }

 if (!VAR_25) {
  VAR_32 = FUNC_5(FUNC_0("nothing to merge: '%.*s'"), VAR_14, VAR_13);
  goto leave_merge;
 }

 if (VAR_16->have_squash_onto &&
     FUNC_25(&VAR_19->object.oid, &VAR_16->squash_onto)) {




  FUNC_30(&VAR_34);
  if (VAR_25->next)
   VAR_32 = FUNC_5(FUNC_0("octopus merge cannot be executed on "
          "top of a [new root]"));
  else
   VAR_32 = FUNC_7(VAR_11, &VAR_25->item->object.oid,
           &VAR_19->object.oid, 0,
           VAR_16);
  goto leave_merge;
 }

 if (VAR_12) {
  const char *VAR_36 = FUNC_11(VAR_12, ((void*)0));
  const char *VAR_37;
  int VAR_38;

  if (!VAR_36) {
   VAR_32 = FUNC_5(FUNC_0("could not get commit message of '%s'"),
        FUNC_24(&VAR_12->object.oid));
   goto leave_merge;
  }
  FUNC_42(VAR_36);
  FUNC_8(VAR_36, &VAR_37);
  VAR_38 = FUNC_38(VAR_37);
  VAR_32 = FUNC_44(VAR_37, VAR_38, FUNC_17(VAR_11), 0);
  FUNC_41(VAR_12, VAR_36);
  if (VAR_32) {
   FUNC_6(FUNC_0("could not write '%s'"),
        FUNC_17(VAR_11));
   goto leave_merge;
  }
 } else {
  struct strbuf VAR_39 = VAR_5;
  int VAR_40;

  FUNC_33(&VAR_39, "author %s", FUNC_13(0));
  FUNC_42(VAR_39.buf);
  FUNC_35(&VAR_39);

  if (VAR_30 < VAR_14) {
   VAR_35 = VAR_13 + VAR_30;
   VAR_40 = VAR_14 - VAR_30;
  } else {
   FUNC_33(&VAR_39, "Merge %s '%.*s'",
        VAR_25->next ? "branches" : "branch",
        VAR_29, VAR_13);
   VAR_35 = VAR_39.buf;
   VAR_40 = VAR_39.len;
  }

  VAR_32 = FUNC_44(VAR_35, VAR_40, FUNC_17(VAR_11), 0);
  FUNC_34(&VAR_39);
  if (VAR_32) {
   FUNC_6(FUNC_0("could not write '%s'"),
        FUNC_17(VAR_11));
   goto leave_merge;
  }
 }





 VAR_31 = VAR_16->allow_ff && VAR_12 && VAR_12->parents &&
  FUNC_25(&VAR_12->parents->item->object.oid,
        &VAR_19->object.oid);





 if (VAR_31) {
  struct commit_list *VAR_41 = VAR_12->parents->next;

  for (VAR_23 = VAR_25; VAR_23 && VAR_41; VAR_23 = VAR_23->next, VAR_41 = VAR_41->next)
   if (!FUNC_25(&VAR_23->item->object.oid,
       &VAR_41->item->object.oid)) {
    VAR_31 = 0;
    break;
   }




  if (VAR_23 || VAR_41)
   VAR_31 = 0;
 }

 if (VAR_31) {
  FUNC_30(&VAR_34);
  VAR_32 = FUNC_7(VAR_11, &VAR_12->object.oid,
          &VAR_19->object.oid, 0, VAR_16);
  if (VAR_15 & VAR_6) {
   VAR_17 |= VAR_0;
   goto fast_forward_edit;
  }
  goto leave_merge;
 }

 if (VAR_27 || VAR_25->next) {

  struct child_process VAR_42 = VAR_1;

  if (FUNC_26(&VAR_42.env_array)) {
   const char *VAR_43 = FUNC_18(VAR_16);

   VAR_32 = FUNC_5(FUNC_0(VAR_8), VAR_43, VAR_43);
   goto leave_merge;
  }

  VAR_42.git_cmd = 1;
  FUNC_1(&VAR_42.args, "merge");
  FUNC_1(&VAR_42.args, "-s");
  if (!VAR_27)
   FUNC_1(&VAR_42.args, "octopus");
  else {
   FUNC_1(&VAR_42.args, VAR_27);
   for (VAR_33 = 0; VAR_33 < VAR_16->xopts_nr; VAR_33++)
    FUNC_2(&VAR_42.args,
       "-X%s", VAR_16->xopts[VAR_33]);
  }
  FUNC_1(&VAR_42.args, "--no-edit");
  FUNC_1(&VAR_42.args, "--no-ff");
  FUNC_1(&VAR_42.args, "--no-log");
  FUNC_1(&VAR_42.args, "--no-stat");
  FUNC_1(&VAR_42.args, "-F");
  FUNC_1(&VAR_42.args, FUNC_17(VAR_11));
  if (VAR_16->gpg_sign)
   FUNC_1(&VAR_42.args, VAR_16->gpg_sign);


  for (VAR_23 = VAR_25; VAR_23; VAR_23 = VAR_23->next)
   FUNC_1(&VAR_42.args,
     FUNC_24(&VAR_23->item->object.oid));

  FUNC_34(&VAR_18);
  FUNC_40(FUNC_14(VAR_11));
  FUNC_30(&VAR_34);

  FUNC_30(&VAR_34);
  VAR_32 = FUNC_31(&VAR_42);


  if (!VAR_32 && (FUNC_4(VAR_11->index) < 0 ||
        FUNC_28(VAR_11) < 0))
   VAR_32 = FUNC_5(FUNC_0("could not read index"));
  goto leave_merge;
 }

 VAR_20 = VAR_25->item;
 VAR_22 = FUNC_12(VAR_19, VAR_20);
 if (VAR_22 && FUNC_25(&VAR_20->object.oid,
      &VAR_22->item->object.oid)) {
  VAR_32 = 0;

  goto leave_merge;
 }

 FUNC_44(FUNC_24(&VAR_20->object.oid), VAR_10->hexsz,
        FUNC_15(VAR_11), 0);
 FUNC_44("no-ff", 5, FUNC_16(VAR_11), 0);

 for (VAR_23 = VAR_22; VAR_23; VAR_23 = VAR_23->next)
  FUNC_3(VAR_23->item, &VAR_24);
 FUNC_10(VAR_22);

 FUNC_28(VAR_11);
 FUNC_19(&VAR_28, VAR_11);
 VAR_28.branch1 = "HEAD";
 VAR_28.branch2 = VAR_18.buf;
 VAR_28.buffer_output = 2;

 VAR_32 = FUNC_23(&VAR_28, VAR_19, VAR_20, VAR_24, &VAR_21);
 if (VAR_32 <= 0)
  FUNC_9(VAR_28.obuf.buf, VAR_9);
 FUNC_34(&VAR_28.obuf);
 if (VAR_32 < 0) {
  FUNC_5(FUNC_0("could not even attempt to merge '%.*s'"),
        VAR_29, VAR_13);
  goto leave_merge;
 }
 VAR_32 = !VAR_32;

 if (VAR_11->index->cache_changed &&
     FUNC_43(VAR_11->index, &VAR_34, VAR_2)) {
  VAR_32 = FUNC_5(FUNC_0("merge: Unable to write new index file"));
  goto leave_merge;
 }

 FUNC_30(&VAR_34);
 if (VAR_32)
  FUNC_29(VAR_11, VAR_16->allow_rerere_auto);
 else





 fast_forward_edit:
  VAR_32 = !!FUNC_32(VAR_11, FUNC_17(VAR_11), VAR_16,
           VAR_17);

leave_merge:
 FUNC_34(&VAR_18);
 FUNC_30(&VAR_34);
 FUNC_10(VAR_25);
 return VAR_32;
}
