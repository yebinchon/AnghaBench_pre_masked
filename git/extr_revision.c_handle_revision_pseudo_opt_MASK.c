
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int single_worktree; int bisect; void* no_walk; int ref_excludes; int repo; } ;
struct ref_store {int dummy; } ;
struct all_refs_cb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rev_info*,int) ;
 int FUNC_2 (struct rev_info*,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (struct rev_info*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int FUNC_7 (int ,char const*,struct all_refs_cb*) ;
 int FUNC_8 (int ,char const*,char*,struct all_refs_cb*) ;
 int VAR_5 ;
 struct ref_store* FUNC_9 (int ) ;
 struct ref_store* FUNC_10 (char const*) ;
 int VAR_6 ;
 int FUNC_11 (struct ref_store*,struct rev_info*,int,int ) ;
 int FUNC_12 (struct all_refs_cb*,struct rev_info*,int) ;
 int FUNC_13 (int ,struct all_refs_cb*) ;
 int FUNC_14 (char*,char const**,char const**) ;
 int FUNC_15 (int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_16 (char const*,char*,char const**) ;
 int FUNC_17 (char const*,char*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_18(const char *VAR_14,
    struct rev_info *VAR_15,
    int VAR_16, const char **VAR_17, int *VAR_18)
{
 const char *VAR_19 = VAR_17[0];
 const char *VAR_20;
 struct ref_store *VAR_21;
 int VAR_22;

 if (VAR_14) {






  if (!VAR_15->single_worktree)
   FUNC_0("--single-worktree cannot be used together with submodule");
  VAR_21 = FUNC_10(VAR_14);
 } else
  VAR_21 = FUNC_9(VAR_15->repo);
 if (!FUNC_17(VAR_19, "--all")) {
  FUNC_11(VAR_21, VAR_15, *VAR_18, VAR_8);
  FUNC_11(VAR_21, VAR_15, *VAR_18, VAR_11);
  if (!VAR_15->single_worktree) {
   struct all_refs_cb VAR_23;

   FUNC_12(&VAR_23, VAR_15, *VAR_18);
   FUNC_13(VAR_6, &VAR_23);
  }
  FUNC_5(&VAR_15->ref_excludes);
 } else if (!FUNC_17(VAR_19, "--branches")) {
  FUNC_11(VAR_21, VAR_15, *VAR_18, VAR_7);
  FUNC_5(&VAR_15->ref_excludes);
 } else if (!FUNC_17(VAR_19, "--bisect")) {
  FUNC_15(&VAR_12, &VAR_13);
  FUNC_11(VAR_21, VAR_15, *VAR_18, VAR_4);
  FUNC_11(VAR_21, VAR_15, *VAR_18 ^ (VAR_3 | VAR_0),
       VAR_5);
  VAR_15->bisect = 1;
 } else if (!FUNC_17(VAR_19, "--tags")) {
  FUNC_11(VAR_21, VAR_15, *VAR_18, VAR_10);
  FUNC_5(&VAR_15->ref_excludes);
 } else if (!FUNC_17(VAR_19, "--remotes")) {
  FUNC_11(VAR_21, VAR_15, *VAR_18, VAR_9);
  FUNC_5(&VAR_15->ref_excludes);
 } else if ((VAR_22 = FUNC_14("glob", VAR_17, &VAR_20))) {
  struct all_refs_cb VAR_24;
  FUNC_12(&VAR_24, VAR_15, *VAR_18);
  FUNC_7(VAR_6, VAR_20, &VAR_24);
  FUNC_5(&VAR_15->ref_excludes);
  return VAR_22;
 } else if ((VAR_22 = FUNC_14("exclude", VAR_17, &VAR_20))) {
  FUNC_3(&VAR_15->ref_excludes, VAR_20);
  return VAR_22;
 } else if (FUNC_16(VAR_19, "--branches=", &VAR_20)) {
  struct all_refs_cb VAR_25;
  FUNC_12(&VAR_25, VAR_15, *VAR_18);
  FUNC_8(VAR_6, VAR_20, "refs/heads/", &VAR_25);
  FUNC_5(&VAR_15->ref_excludes);
 } else if (FUNC_16(VAR_19, "--tags=", &VAR_20)) {
  struct all_refs_cb VAR_26;
  FUNC_12(&VAR_26, VAR_15, *VAR_18);
  FUNC_8(VAR_6, VAR_20, "refs/tags/", &VAR_26);
  FUNC_5(&VAR_15->ref_excludes);
 } else if (FUNC_16(VAR_19, "--remotes=", &VAR_20)) {
  struct all_refs_cb VAR_27;
  FUNC_12(&VAR_27, VAR_15, *VAR_18);
  FUNC_8(VAR_6, VAR_20, "refs/remotes/", &VAR_27);
  FUNC_5(&VAR_15->ref_excludes);
 } else if (!FUNC_17(VAR_19, "--reflog")) {
  FUNC_4(VAR_15, *VAR_18);
 } else if (!FUNC_17(VAR_19, "--indexed-objects")) {
  FUNC_2(VAR_15, *VAR_18);
 } else if (!FUNC_17(VAR_19, "--alternate-refs")) {
  FUNC_1(VAR_15, *VAR_18);
 } else if (!FUNC_17(VAR_19, "--not")) {
  *VAR_18 ^= VAR_3 | VAR_0;
 } else if (!FUNC_17(VAR_19, "--no-walk")) {
  VAR_15->no_walk = VAR_1;
 } else if (FUNC_16(VAR_19, "--no-walk=", &VAR_20)) {




  if (!FUNC_17(VAR_20, "sorted"))
   VAR_15->no_walk = VAR_1;
  else if (!FUNC_17(VAR_20, "unsorted"))
   VAR_15->no_walk = VAR_2;
  else
   return FUNC_6("invalid argument to --no-walk");
 } else if (!FUNC_17(VAR_19, "--do-walk")) {
  VAR_15->no_walk = 0;
 } else if (!FUNC_17(VAR_19, "--single-worktree")) {
  VAR_15->single_worktree = 1;
 } else {
  return 0;
 }

 return 1;
}
