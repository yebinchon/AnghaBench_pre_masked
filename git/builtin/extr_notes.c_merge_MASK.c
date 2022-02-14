
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int path; } ;
struct strbuf {char* buf; scalar_t__ len; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;
struct notes_tree {int dummy; } ;
struct notes_merge_options {int verbosity; char* local_ref; char* remote_ref; int commit_msg; int strategy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ) ;
 struct option FUNC_4 (int ,char*,int*,int ,int,int ) ;
 struct option FUNC_5 (char,char*,char const**,int ,int ) ;
 struct option FUNC_6 (int*) ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int VAR_5 ;
 char* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int *) ;
 char* FUNC_9 () ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct strbuf*) ;
 struct worktree* FUNC_13 (char*,char*) ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (struct notes_tree*) ;
 scalar_t__ FUNC_16 (char*,int *) ;
 int VAR_6 ;
 char* FUNC_17 (int ) ;
 struct notes_tree* FUNC_18 (char*,int ) ;
 int FUNC_19 (int ,struct notes_merge_options*) ;
 int FUNC_20 (struct notes_merge_options*) ;
 int FUNC_21 (struct notes_merge_options*) ;
 int FUNC_22 (struct notes_merge_options*,struct notes_tree*,struct object_id*) ;
 scalar_t__ FUNC_23 (char const*,int *) ;
 int FUNC_24 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_25 (char*,char*,char const**) ;
 int VAR_7 ;
 int FUNC_26 (int *,char*,scalar_t__) ;
 int FUNC_27 (struct strbuf*,char*,char const*,...) ;
 int FUNC_28 (struct strbuf*,char const*) ;
 int FUNC_29 (struct strbuf*) ;
 int VAR_8 ;
 int FUNC_30 (char*,char*,struct object_id*,int *,int ,int ) ;
 int FUNC_31 (int ,struct option*) ;

__attribute__((used)) static int FUNC_32(int VAR_9, const char **VAR_10, const char *VAR_11)
{
 struct strbuf VAR_12 = VAR_4, VAR_13 = VAR_4;
 struct object_id VAR_14;
 struct notes_tree *VAR_15;
 struct notes_merge_options VAR_16;
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 int VAR_20 = 0, VAR_21;
 const char *VAR_22 = ((void*)0);
 struct option VAR_23[] = {
  FUNC_3(FUNC_1("General options")),
  FUNC_6(&VAR_20),
  FUNC_3(FUNC_1("Merge options")),
  FUNC_5('s', "strategy", &VAR_22, FUNC_1("strategy"),
      FUNC_1("resolve notes conflicts using the given strategy "
         "(manual/ours/theirs/union/cat_sort_uniq)")),
  FUNC_3(FUNC_1("Committing unmerged notes")),
  FUNC_4(0, "commit", &VAR_18,
         FUNC_1("finalize notes merge by committing unmerged notes"),
         1, VAR_3),
  FUNC_3(FUNC_1("Aborting notes merge resolution")),
  FUNC_4(0, "abort", &VAR_19,
         FUNC_1("abort notes merge"),
         1, VAR_3),
  FUNC_2()
 };

 VAR_9 = FUNC_24(VAR_9, VAR_10, VAR_11, VAR_23,
        VAR_6, 0);

 if (VAR_22 || VAR_18 + VAR_19 == 0)
  VAR_17 = 1;
 if (VAR_17 + VAR_18 + VAR_19 != 1) {
  FUNC_11(FUNC_7("cannot mix --commit, --abort or -s/--strategy"));
  FUNC_31(VAR_6, VAR_23);
 }

 if (VAR_17 && VAR_9 != 1) {
  FUNC_11(FUNC_7("must specify a notes ref to merge"));
  FUNC_31(VAR_6, VAR_23);
 } else if (!VAR_17 && VAR_9) {
  FUNC_11(FUNC_7("too many parameters"));
  FUNC_31(VAR_6, VAR_23);
 }

 FUNC_19(VAR_8, &VAR_16);
 VAR_16.verbosity = VAR_20 + VAR_1;

 if (VAR_19)
  return FUNC_20(&VAR_16);
 if (VAR_18)
  return FUNC_21(&VAR_16);

 VAR_16.local_ref = FUNC_9();
 FUNC_28(&VAR_12, VAR_10[0]);
 FUNC_12(&VAR_12);
 VAR_16.remote_ref = VAR_12.buf;

 VAR_15 = FUNC_18("merge", VAR_0);

 if (VAR_22) {
  if (FUNC_23(VAR_22, &VAR_16.strategy)) {
   FUNC_11(FUNC_7("unknown -s/--strategy: %s"), VAR_22);
   FUNC_31(VAR_6, VAR_23);
  }
 } else {
  struct strbuf VAR_24 = VAR_4;
  const char *VAR_25 = ((void*)0);

  if (!FUNC_25(VAR_16.local_ref, "refs/notes/", &VAR_25))
   FUNC_0("local ref %s is outside of refs/notes/",
       VAR_16.local_ref);

  FUNC_27(&VAR_24, "notes.%s.mergeStrategy", VAR_25);

  if (FUNC_16(VAR_24.buf, &VAR_16.strategy))
   FUNC_16("notes.mergeStrategy", &VAR_16.strategy);

  FUNC_29(&VAR_24);
 }

 FUNC_27(&VAR_13, "notes: Merged notes from %s into %s",
      VAR_12.buf, FUNC_9());
 FUNC_26(&(VAR_16.commit_msg), VAR_13.buf + 7, VAR_13.len - 7);

 VAR_21 = FUNC_22(&VAR_16, VAR_15, &VAR_14);

 if (VAR_21 >= 0)

  FUNC_30(VAR_13.buf, FUNC_9(), &VAR_14, ((void*)0), 0,
      VAR_5);
 else {
  const struct worktree *VAR_26;

  FUNC_30(VAR_13.buf, "NOTES_MERGE_PARTIAL", &VAR_14, ((void*)0),
      0, VAR_5);

  VAR_26 = FUNC_13("NOTES_MERGE_REF", FUNC_9());
  if (VAR_26)
   FUNC_10(FUNC_7("a notes merge into %s is already in-progress at %s"),
       FUNC_9(), VAR_26->path);
  if (FUNC_8("NOTES_MERGE_REF", FUNC_9(), ((void*)0)))
   FUNC_10(FUNC_7("failed to store link to current notes ref (%s)"),
       FUNC_9());
  FUNC_14(VAR_7, FUNC_7("Automatic notes merge failed. Fix conflicts in %s "
      "and commit the result with 'git notes merge --commit', "
      "or abort the merge with 'git notes merge --abort'.\n"),
   FUNC_17(VAR_2));
 }

 FUNC_15(VAR_15);
 FUNC_29(&VAR_12);
 FUNC_29(&VAR_13);
 return VAR_21 < 0;
}
