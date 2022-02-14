
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct merge_msg_entry {int written; TYPE_4__ const* merge_head; } ;
struct TYPE_18__ {scalar_t__ length; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_19__ {int gitdir; } ;
typedef TYPE_2__ git_repository ;
typedef int git_filebuf ;
struct TYPE_20__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_21__ {int id_str; } ;
typedef TYPE_4__ git_annotated_commit ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct merge_msg_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int) ;
 struct merge_msg_entry* FUNC_2 (size_t,int) ;
 int FUNC_3 (struct merge_msg_entry*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,size_t,int *) ;
 int FUNC_13 (TYPE_1__*,struct merge_msg_entry*,size_t,int ) ;
 scalar_t__ FUNC_14 (struct merge_msg_entry*) ;
 int FUNC_15 (int *,TYPE_1__*,char) ;
 int FUNC_16 (int *,TYPE_1__*,char) ;
 int FUNC_17 (int *,TYPE_1__*,char) ;
 int FUNC_18 (int *,TYPE_1__*,char) ;
 int VAR_6 ;
 int FUNC_19 (struct merge_msg_entry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_20(
 git_repository *VAR_10,
 const git_annotated_commit *VAR_11[],
 size_t VAR_12)
{
 git_filebuf VAR_13 = VAR_2;
 git_buf VAR_14 = VAR_0;
 struct merge_msg_entry *VAR_15;
 git_vector VAR_16 = VAR_5;
 size_t VAR_17;
 char VAR_18 = 0;
 int VAR_19 = 0;

 FUNC_1(VAR_10 && VAR_11);

 VAR_15 = FUNC_2(VAR_12, sizeof(struct merge_msg_entry));
 FUNC_0(VAR_15);

 if (FUNC_12(&VAR_16, VAR_12, ((void*)0)) < 0) {
  FUNC_3(VAR_15);
  return -1;
 }

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
  VAR_15[VAR_17].merge_head = VAR_11[VAR_17];

 if ((VAR_19 = FUNC_5(&VAR_14, VAR_10->gitdir, VAR_4)) < 0 ||
  (VAR_19 = FUNC_8(&VAR_13, VAR_14.ptr, VAR_1, VAR_3)) < 0 ||
  (VAR_19 = FUNC_10(&VAR_13, "Merge ", 6)) < 0)
  goto cleanup;
 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  if (!FUNC_19(&VAR_15[VAR_17]))
   break;

  if ((VAR_19 = FUNC_9(&VAR_13,
   "%scommit '%s'", (VAR_17 > 0) ? "; " : "",
   VAR_15[VAR_17].merge_head->id_str)) < 0)
   goto cleanup;

  VAR_15[VAR_17].written = 1;
 }

 if (VAR_17)
  VAR_18 = ';';

 if ((VAR_19 = FUNC_13(&VAR_16, VAR_15, VAR_12, VAR_6)) < 0 ||
  (VAR_19 = FUNC_15(&VAR_13, &VAR_16, VAR_18)) < 0)
  goto cleanup;

 if (VAR_16.length)
  VAR_18 =',';

 if ((VAR_19 = FUNC_13(&VAR_16, VAR_15, VAR_12, VAR_9)) < 0 ||
  (VAR_19 = FUNC_18(&VAR_13, &VAR_16, VAR_18)) < 0)
  goto cleanup;

 if (VAR_16.length)
  VAR_18 =',';

 if ((VAR_19 = FUNC_13(&VAR_16, VAR_15, VAR_12, VAR_8)) < 0 ||
  (VAR_19 = FUNC_17(&VAR_13, &VAR_16, VAR_18)) < 0)
  goto cleanup;

 if (VAR_16.length)
  VAR_18 =',';



 while ((VAR_19 = FUNC_13(&VAR_16, VAR_15, VAR_12, VAR_7)) > 0) {
  if ((VAR_19 = FUNC_16(&VAR_13, &VAR_16, VAR_18)) < 0)
   goto cleanup;

  if (VAR_16.length)
   VAR_18 =',';
 }

 if (VAR_19 < 0)
  goto cleanup;

 for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
  if (FUNC_14(&VAR_15[VAR_17]))
   continue;

  if ((VAR_19 = FUNC_9(&VAR_13, "; commit '%s'",
   VAR_15[VAR_17].merge_head->id_str)) < 0)
   goto cleanup;
 }

 if ((VAR_19 = FUNC_9(&VAR_13, "\n")) < 0 ||
  (VAR_19 = FUNC_7(&VAR_13)) < 0)
  goto cleanup;

cleanup:
 if (VAR_19 < 0)
  FUNC_6(&VAR_13);

 FUNC_4(&VAR_14);

 FUNC_11(&VAR_16);
 FUNC_3(VAR_15);

 return VAR_19;
}
