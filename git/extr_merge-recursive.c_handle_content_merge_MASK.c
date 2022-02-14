
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rename_conflict_info {TYPE_5__* ren1; } ;
struct merge_options {TYPE_4__* repo; TYPE_3__* priv; int branch2; int branch1; } ;
struct diff_filespec {int mode; scalar_t__ path; } ;
struct merge_file_info {int clean; struct diff_filespec const blob; } ;
struct cache_entry {int ce_flags; } ;
struct TYPE_14__ {struct cache_entry** cache; } ;
struct TYPE_13__ {int branch; TYPE_2__* pair; } ;
struct TYPE_12__ {TYPE_6__* index; } ;
struct TYPE_11__ {int call_depth; TYPE_6__ orig_index; } ;
struct TYPE_10__ {TYPE_1__* two; } ;
struct TYPE_9__ {int mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct merge_options*,struct diff_filespec const*,char const*,int ,int,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct cache_entry*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,char const*,int,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_6__*,char const*,int ) ;
 int FUNC_8 (struct diff_filespec const*) ;
 scalar_t__ FUNC_9 (struct merge_options*,struct diff_filespec const*,struct diff_filespec const*,struct diff_filespec const*,char const*,int ,int ,int,struct merge_file_info*) ;
 int FUNC_10 (struct merge_options*,int,char*,char const*,...) ;
 int FUNC_11 (TYPE_6__*,char const*) ;
 int FUNC_12 (char const*) ;
 char* FUNC_13 (struct merge_options*,char const*,int ) ;
 scalar_t__ FUNC_14 (struct merge_options*,int,struct diff_filespec const*,char const*) ;
 scalar_t__ FUNC_15 (struct merge_options*,char const*,struct diff_filespec const*,struct diff_filespec const*,struct diff_filespec const*) ;
 int FUNC_16 (struct merge_options*,char const*) ;
 scalar_t__ FUNC_17 (struct merge_options*,char const*,struct diff_filespec const*) ;

__attribute__((used)) static int FUNC_18(struct merge_file_info *VAR_1,
    struct merge_options *VAR_2,
    const char *VAR_3,
    int VAR_4,
    const struct diff_filespec *VAR_5,
    const struct diff_filespec *VAR_6,
    const struct diff_filespec *VAR_7,
    struct rename_conflict_info *VAR_8)
{
 const char *VAR_9 = FUNC_1("content");
 unsigned VAR_10 = 0;

 if (!FUNC_8(VAR_5))
  VAR_9 = FUNC_1("add/add");

 FUNC_3(VAR_5->path && VAR_6->path && VAR_7->path);
 if (VAR_8 && FUNC_5(VAR_2->repo->index, VAR_3, !VAR_2->priv->call_depth,
        FUNC_0(VAR_8->ren1->pair->two->mode)))
  VAR_10 = 1;

 if (FUNC_9(VAR_2, VAR_5, VAR_6, VAR_7, VAR_3,
        VAR_2->branch1, VAR_2->branch2,
        VAR_2->priv->call_depth * 2, VAR_1))
  return -1;







 if (VAR_1->clean && FUNC_17(VAR_2, VAR_3, &VAR_1->blob) &&
     !VAR_10) {
  int VAR_11;
  struct cache_entry *VAR_12;

  FUNC_10(VAR_2, 3, FUNC_1("Skipped %s (merged same as existing)"), VAR_3);
  if (FUNC_2(VAR_2, &VAR_1->blob, VAR_3,
      0, (!VAR_2->priv->call_depth && !VAR_4), 0))
   return -1;






  VAR_11 = FUNC_7(&VAR_2->priv->orig_index, VAR_3, FUNC_12(VAR_3));
  VAR_12 = VAR_2->priv->orig_index.cache[VAR_11];
  if (FUNC_4(VAR_12)) {
   VAR_11 = FUNC_7(VAR_2->repo->index, VAR_3, FUNC_12(VAR_3));
   VAR_12 = VAR_2->repo->index->cache[VAR_11];
   VAR_12->ce_flags |= VAR_0;
  }
  return VAR_1->clean;
 }

 if (!VAR_1->clean) {
  if (FUNC_0(VAR_1->blob.mode))
   VAR_9 = FUNC_1("submodule");
  FUNC_10(VAR_2, 1, FUNC_1("CONFLICT (%s): Merge conflict in %s"),
    VAR_9, VAR_3);
  if (VAR_8 && !VAR_10)
   if (FUNC_15(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7))
    return -1;
 }

 if (VAR_10 || VAR_4) {
  char *VAR_13;
  if (VAR_2->priv->call_depth) {
   FUNC_11(VAR_2->repo->index, VAR_3);
  } else {
   if (!VAR_1->clean) {
    if (FUNC_15(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7))
     return -1;
   } else {
    int VAR_14 = FUNC_16(VAR_2, VAR_3);

    if (FUNC_15(VAR_2, VAR_3, ((void*)0),
        VAR_14 ? &VAR_1->blob : ((void*)0),
        VAR_14 ? ((void*)0) : &VAR_1->blob))
     return -1;
   }

  }
  VAR_13 = FUNC_13(VAR_2, VAR_3, VAR_8->ren1->branch);
  if (VAR_4) {
   FUNC_10(VAR_2, 1, FUNC_1("Refusing to lose dirty file at %s"),
          VAR_3);
  }
  FUNC_10(VAR_2, 1, FUNC_1("Adding as %s instead"), VAR_13);
  if (FUNC_14(VAR_2, 0, &VAR_1->blob, VAR_13)) {
   FUNC_6(VAR_13);
   return -1;
  }
  FUNC_6(VAR_13);
  VAR_1->clean = 0;
 } else if (FUNC_14(VAR_2, VAR_1->clean, &VAR_1->blob, VAR_3))
  return -1;
 return !VAR_4 && VAR_1->clean;
}
