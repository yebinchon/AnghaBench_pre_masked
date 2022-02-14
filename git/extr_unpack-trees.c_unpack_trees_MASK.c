
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nsec; int sec; } ;
struct pattern_list {int initialized; int cache_nr; int updated_workdir; scalar_t__ cache_tree; struct cache_entry** cache; int oid; TYPE_2__* split_index; int version; TYPE_1__ timestamp; } ;
struct unpack_trees_options {int skip_sparse_checkout; unsigned int merge_size; char* prefix; scalar_t__ exiting_early; struct pattern_list* src_index; scalar_t__ show_all_errors; struct pattern_list result; struct pattern_list* dst_index; struct pattern_list* pl; scalar_t__ nontrivial_merge; scalar_t__ trivial_merges_only; scalar_t__ merge; int pathspec; struct cache_entry* df_conflict_entry; int update; } ;
struct tree_desc {int dummy; } ;
struct traverse_info {int pathspec; scalar_t__ show_all_errors; struct unpack_trees_options* data; int fn; } ;
struct cache_entry {int ce_flags; } ;
typedef int pl ;
struct TYPE_4__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,char*,int ,struct pattern_list*,int *) ;
 scalar_t__ FUNC_1 (struct pattern_list*,struct cache_entry*,struct unpack_trees_options*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct pattern_list*,int) ;
 int FUNC_6 (int ,struct pattern_list*) ;
 scalar_t__ FUNC_7 (struct cache_entry*,struct traverse_info*) ;
 int FUNC_8 (struct cache_entry*) ;
 scalar_t__ FUNC_9 (struct unpack_trees_options*) ;
 int FUNC_10 (struct pattern_list*) ;
 int VAR_7 ;
 int FUNC_11 (char*,unsigned int) ;
 int FUNC_12 (struct pattern_list*) ;
 int FUNC_13 (struct unpack_trees_options*) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char*,int ) ;
 char* FUNC_16 (char*) ;
 TYPE_2__* FUNC_17 (struct pattern_list*) ;
 int FUNC_18 (struct pattern_list*) ;
 int FUNC_19 (struct pattern_list*,struct pattern_list*,int,int) ;
 int FUNC_20 (struct pattern_list*,int ,int) ;
 int FUNC_21 (struct pattern_list*,struct pattern_list*) ;
 struct cache_entry* FUNC_22 (struct unpack_trees_options*) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (struct traverse_info*,char const*) ;
 int VAR_8 ;
 int FUNC_25 () ;
 int FUNC_26 (char*) ;
 int FUNC_27 (struct pattern_list*,unsigned int,struct tree_desc*,struct traverse_info*) ;
 int VAR_9 ;
 int FUNC_28 (struct unpack_trees_options*,char*) ;
 scalar_t__ FUNC_29 (struct cache_entry*,struct unpack_trees_options*) ;
 scalar_t__ FUNC_30 (struct cache_entry*,int ,struct unpack_trees_options*) ;
 struct cache_entry* FUNC_31 (int,int ) ;

int FUNC_32(unsigned VAR_10, struct tree_desc *VAR_11, struct unpack_trees_options *VAR_12)
{
 int VAR_13, VAR_14;
 static struct cache_entry *VAR_15;
 struct pattern_list VAR_16;

 if (VAR_10 > VAR_4)
  FUNC_11("unpack_trees takes at most %d trees", VAR_4);

 FUNC_25();
 FUNC_20(&VAR_16, 0, sizeof(VAR_16));
 if (!VAR_7 || !VAR_12->update)
  VAR_12->skip_sparse_checkout = 1;
 if (!VAR_12->skip_sparse_checkout) {
  char *VAR_17 = FUNC_16("info/sparse-checkout");
  if (FUNC_0(VAR_17, "", 0, &VAR_16, ((void*)0)) < 0)
   VAR_12->skip_sparse_checkout = 1;
  else
   VAR_12->pl = &VAR_16;
  FUNC_14(VAR_17);
 }

 FUNC_20(&VAR_12->result, 0, sizeof(VAR_12->result));
 VAR_12->result.initialized = 1;
 VAR_12->result.timestamp.sec = VAR_12->src_index->timestamp.sec;
 VAR_12->result.timestamp.nsec = VAR_12->src_index->timestamp.nsec;
 VAR_12->result.version = VAR_12->src_index->version;
 if (!VAR_12->src_index->split_index) {
  VAR_12->result.split_index = ((void*)0);
 } else if (VAR_12->src_index == VAR_12->dst_index) {






  VAR_12->result.split_index = VAR_12->src_index->split_index;
  VAR_12->result.split_index->refcount++;
 } else {
  VAR_12->result.split_index = FUNC_17(&VAR_12->result);
 }
 FUNC_23(&VAR_12->result.oid, &VAR_12->src_index->oid);
 VAR_12->merge_size = VAR_10;
 FUNC_18(VAR_12->src_index);




 if (!VAR_12->skip_sparse_checkout)
  FUNC_19(VAR_12->pl, VAR_12->src_index, 0, VAR_1);

 if (!VAR_15)
  VAR_15 = FUNC_31(1, FUNC_2(0));
 VAR_12->df_conflict_entry = VAR_15;

 if (VAR_10) {
  const char *VAR_18 = VAR_12->prefix ? VAR_12->prefix : "";
  struct traverse_info VAR_19;

  FUNC_24(&VAR_19, VAR_18);
  VAR_19.fn = VAR_9;
  VAR_19.data = VAR_12;
  VAR_19.show_all_errors = VAR_12->show_all_errors;
  VAR_19.pathspec = VAR_12->pathspec;

  if (VAR_12->prefix) {





   while (1) {
    struct cache_entry *VAR_20 = FUNC_22(VAR_12);
    if (!VAR_20)
     break;
    if (FUNC_7(VAR_20, &VAR_19))
     break;
    if (FUNC_29(VAR_20, VAR_12) < 0)
     goto return_failed;
   }
  }

  FUNC_25();
  VAR_14 = FUNC_27(VAR_12->src_index, VAR_10, VAR_11, &VAR_19);
  FUNC_26("traverse_trees");
  if (VAR_14 < 0)
   goto return_failed;
 }


 if (VAR_12->merge) {
  while (1) {
   struct cache_entry *VAR_21 = FUNC_22(VAR_12);
   if (!VAR_21)
    break;
   if (FUNC_29(VAR_21, VAR_12) < 0)
    goto return_failed;
  }
 }
 FUNC_18(VAR_12->src_index);

 if (VAR_12->trivial_merges_only && VAR_12->nontrivial_merge) {
  VAR_14 = FUNC_28(VAR_12, "Merge requires file-level merging");
  goto done;
 }

 if (!VAR_12->skip_sparse_checkout) {
  int VAR_22 = 1;






  FUNC_19(VAR_12->pl, &VAR_12->result, VAR_0, VAR_2 | VAR_1);

  VAR_14 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_12->result.cache_nr; VAR_13++) {
   struct cache_entry *VAR_23 = VAR_12->result.cache[VAR_13];
   if (VAR_23->ce_flags & VAR_0 &&
       FUNC_30(VAR_23, VAR_3, VAR_12)) {
    if (!VAR_12->show_all_errors)
     goto return_failed;
    VAR_14 = -1;
   }

   if (FUNC_1(&VAR_12->result, VAR_23, VAR_12)) {
    if (!VAR_12->show_all_errors)
     goto return_failed;
    VAR_14 = -1;
   }
   if (!FUNC_8(VAR_23))
    VAR_22 = 0;

  }
  if (VAR_14 < 0)
   goto return_failed;






  if (VAR_12->result.cache_nr && VAR_22) {
   VAR_14 = FUNC_28(VAR_12, "Sparse checkout leaves no entry on working directory");
   goto done;
  }
 }

 VAR_14 = FUNC_9(VAR_12) ? (-2) : 0;
 if (VAR_12->dst_index) {
  FUNC_21(&VAR_12->result, VAR_12->src_index);
  if (!VAR_14) {
   if (FUNC_15("GIT_TEST_CHECK_CACHE_TREE", 0))
    FUNC_6(VAR_8, &VAR_12->result);
   if (!VAR_12->result.cache_tree)
    VAR_12->result.cache_tree = FUNC_3();
   if (!FUNC_4(VAR_12->result.cache_tree))
    FUNC_5(&VAR_12->result,
        VAR_6 |
        VAR_5);
  }

  VAR_12->result.updated_workdir = 1;
  FUNC_12(VAR_12->dst_index);
  *VAR_12->dst_index = VAR_12->result;
 } else {
  FUNC_12(&VAR_12->result);
 }
 VAR_12->src_index = ((void*)0);

done:
 FUNC_26("unpack_trees");
 FUNC_10(&VAR_16);
 return VAR_14;

return_failed:
 if (VAR_12->show_all_errors)
  FUNC_13(VAR_12);
 FUNC_18(VAR_12->src_index);
 VAR_14 = FUNC_28(VAR_12, ((void*)0));
 if (VAR_12->exiting_early)
  VAR_14 = 0;
 goto done;
}
