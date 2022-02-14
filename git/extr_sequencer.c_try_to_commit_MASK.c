
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; int len; } ;
struct repository {int index_file; int index; } ;
struct replay_opts {int default_msg_cleanup; int gpg_sign; int explicit_cleanup; scalar_t__ record_origin; scalar_t__ signoff; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit_extra_header {int dummy; } ;
struct commit {int parents; } ;
typedef enum commit_msg_cleanup_mode { ____Placeholder_commit_msg_cleanup_mode } commit_msg_cleanup_mode ;
struct TYPE_2__ {int empty_tree; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct strbuf VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 int FUNC_2 (struct repository*,struct commit*,struct object_id*) ;
 scalar_t__ FUNC_3 (int ,int ,struct object_id*,struct commit_list*,struct object_id*,char const*,int ,struct commit_extra_header*) ;
 struct commit_list* FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char const*,char const**) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct commit_extra_header*) ;
 char* FUNC_11 (char const*) ;
 char* FUNC_12 () ;
 int FUNC_13 (struct commit*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 char* FUNC_16 (struct commit*,int *,char const*) ;
 scalar_t__ FUNC_17 (struct strbuf*,int) ;
 scalar_t__ FUNC_18 (int ,struct object_id*) ;
 scalar_t__ FUNC_19 (struct repository*,struct commit**) ;
 struct commit_extra_header* FUNC_20 (struct commit*,char const**) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ,char*,int *) ;
 int FUNC_23 (struct repository*,struct strbuf*,char const*) ;
 int FUNC_24 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_25 (struct strbuf*,int ,int) ;
 int FUNC_26 (struct strbuf*) ;
 int FUNC_27 (struct strbuf*,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_28 (struct commit*,char const*) ;
 scalar_t__ FUNC_29 (struct commit*,struct object_id*,int ,struct strbuf*,struct strbuf*) ;
 scalar_t__ FUNC_30 (struct object_id*,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_31(struct repository *VAR_10,
    struct strbuf *VAR_11, const char *VAR_12,
    struct replay_opts *VAR_13, unsigned int VAR_14,
    struct object_id *VAR_15)
{
 struct object_id VAR_16;
 struct commit *VAR_17 = ((void*)0);
 struct commit_list *VAR_18 = ((void*)0);
 struct commit_extra_header *VAR_19 = ((void*)0);
 struct strbuf VAR_20 = VAR_8;
 struct strbuf VAR_21 = VAR_8;
 char *VAR_22 = ((void*)0);
 const char *VAR_23 = ((void*)0);
 enum commit_msg_cleanup_mode VAR_24;
 int VAR_25 = 0;

 if (FUNC_19(VAR_10, &VAR_17))
  return -1;

 if (VAR_14 & VAR_1) {
  const char *VAR_26[] = { "gpgsig", ((void*)0) };
  const char *VAR_27 = FUNC_12();
  const char *VAR_28 = FUNC_16(VAR_17, ((void*)0),
            VAR_27);

  if (!VAR_11) {
   const char *VAR_29 = ((void*)0);

   FUNC_7(VAR_28, &VAR_29);
   VAR_11 = &VAR_21;
   FUNC_24(VAR_11, VAR_29);
   VAR_23 = "HEAD";
  }
  VAR_12 = VAR_22 = FUNC_11(VAR_28);
  FUNC_28(VAR_17, VAR_28);
  if (!VAR_12) {
   VAR_25 = FUNC_5(FUNC_0("unable to parse commit author"));
   goto out;
  }
  VAR_18 = FUNC_4(VAR_17->parents);
  VAR_19 = FUNC_20(VAR_17, VAR_26);
 } else if (VAR_17 &&
     (!(VAR_14 & VAR_6) || (VAR_14 & VAR_1))) {
  FUNC_1(VAR_17, &VAR_18);
 }

 if (FUNC_30(&VAR_16, VAR_10->index, VAR_10->index_file, 0, ((void*)0))) {
  VAR_25 = FUNC_5(FUNC_0("git write-tree failed to write a tree"));
  goto out;
 }

 if (!(VAR_14 & VAR_0) && FUNC_18(VAR_17 ?
         FUNC_13(VAR_17) :
         VAR_9->empty_tree, &VAR_16)) {
  VAR_25 = 1;
  goto out;
 }

 if (FUNC_8("prepare-commit-msg")) {
  VAR_25 = FUNC_23(VAR_10, VAR_11, VAR_23);
  if (VAR_25)
   goto out;
  if (FUNC_25(&VAR_21, FUNC_15(),
         2048) < 0) {
   VAR_25 = FUNC_6(FUNC_0("unable to read commit message "
           "from '%s'"),
         FUNC_15());
   goto out;
  }
  VAR_11 = &VAR_21;
 }

 if (VAR_14 & VAR_2)
  VAR_24 = VAR_3;
 else if ((VAR_13->signoff || VAR_13->record_origin) &&
   !VAR_13->explicit_cleanup)
  VAR_24 = VAR_5;
 else
  VAR_24 = VAR_13->default_msg_cleanup;

 if (VAR_24 != VAR_4)
  FUNC_27(VAR_11, VAR_24 == VAR_3);
 if ((VAR_14 & VAR_7) && FUNC_17(VAR_11, VAR_24)) {
  VAR_25 = 1;
  goto out;
 }

 FUNC_21();

 if (FUNC_3(VAR_11->buf, VAR_11->len, &VAR_16, VAR_18,
     VAR_15, VAR_12, VAR_13->gpg_sign, VAR_19)) {
  VAR_25 = FUNC_5(FUNC_0("failed to write commit object"));
  goto out;
 }

 if (FUNC_29(VAR_17, VAR_15,
        FUNC_14("GIT_REFLOG_ACTION"), VAR_11, &VAR_20)) {
  VAR_25 = FUNC_5("%s", VAR_20.buf);
  goto out;
 }

 FUNC_22(0, VAR_10->index_file, "post-commit", ((void*)0));
 if (VAR_14 & VAR_1)
  FUNC_2(VAR_10, VAR_17, VAR_15);

out:
 FUNC_10(VAR_19);
 FUNC_26(&VAR_20);
 FUNC_26(&VAR_21);
 FUNC_9(VAR_22);

 return VAR_25;
}
