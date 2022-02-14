
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct checkout_opts {int quiet; scalar_t__ only_merge_on_switching_branches; scalar_t__ orphan_from_empty_tree; scalar_t__ new_orphan_branch; } ;
struct branch_info {char* name; scalar_t__ commit; int * path; } ;
typedef int old_branch_info ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int * FUNC_4 (int ,struct object_id*,int) ;
 int FUNC_5 (struct branch_info*,int ,int) ;
 int FUNC_6 (struct checkout_opts const*,struct branch_info*,struct branch_info*,int*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;
 void* FUNC_10 (char*,int ,struct object_id*,int*) ;
 int FUNC_11 (int *,char*,char**) ;
 int VAR_1 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (struct checkout_opts const*,struct branch_info*,struct branch_info*) ;

__attribute__((used)) static int FUNC_14(const struct checkout_opts *VAR_2,
      struct branch_info *VAR_3)
{
 int VAR_4 = 0;
 struct branch_info VAR_5;
 void *VAR_6;
 struct object_id VAR_7;
 int VAR_8, VAR_9 = 0;
 int VAR_10 = 1;

 FUNC_12("branch");

 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.path = VAR_6 = FUNC_10("HEAD", 0, &VAR_7, &VAR_8);
 if (VAR_5.path)
  VAR_5.commit = FUNC_4(VAR_1, &VAR_7, 1);
 if (!(VAR_8 & VAR_0))
  VAR_5.path = ((void*)0);

 if (VAR_5.path)
  FUNC_11(VAR_5.path, "refs/heads/", &VAR_5.name);

 if (VAR_2->new_orphan_branch && VAR_2->orphan_from_empty_tree) {
  if (VAR_3->name)
   FUNC_0("'switch --orphan' should never accept a commit as starting point");
  VAR_3->commit = ((void*)0);
  VAR_3->name = "(empty)";
  VAR_10 = 1;
 }

 if (!VAR_3->name) {
  VAR_3->name = "HEAD";
  VAR_3->commit = VAR_5.commit;
  if (!VAR_3->commit)
   FUNC_2(FUNC_1("You are on a branch yet to be born"));
  FUNC_8(VAR_3->commit);

  if (VAR_2->only_merge_on_switching_branches)
   VAR_10 = 0;
 }

 if (VAR_10) {
  VAR_4 = FUNC_6(VAR_2, &VAR_5, VAR_3, &VAR_9);
  if (VAR_4) {
   FUNC_3(VAR_6);
   return VAR_4;
  }
 }

 if (!VAR_2->quiet && !VAR_5.path && VAR_5.commit && VAR_3->commit != VAR_5.commit)
  FUNC_7(VAR_5.commit, VAR_3->commit);

 FUNC_13(VAR_2, &VAR_5, VAR_3);

 VAR_4 = FUNC_9(VAR_5.commit, VAR_3->commit, 1);
 FUNC_3(VAR_6);
 return VAR_4 || VAR_9;
}
