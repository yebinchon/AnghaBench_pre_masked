
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tree {int dummy; } ;
struct strbuf {char* buf; } ;
struct merge_options {char* ancestor; char* branch1; char* branch2; TYPE_4__* repo; TYPE_3__* priv; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_10__ {int oid; } ;
struct commit {TYPE_8__* parents; TYPE_2__ object; } ;
struct TYPE_13__ {struct TYPE_13__* next; } ;
struct TYPE_12__ {int index; TYPE_1__* hash_algo; } ;
struct TYPE_11__ {scalar_t__ call_depth; } ;
struct TYPE_9__ {int empty_tree; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 unsigned int FUNC_2 (struct commit_list*) ;
 int FUNC_3 (struct commit*,TYPE_8__**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct merge_options*,int ) ;
 int FUNC_6 (struct merge_options*) ;
 struct commit_list* FUNC_7 (struct commit*,struct commit*) ;
 struct tree* FUNC_8 (TYPE_4__*,int ) ;
 struct commit* FUNC_9 (TYPE_4__*,struct tree*,char*) ;
 int FUNC_10 (struct merge_options*,int ,int ,int ,struct tree**) ;
 int FUNC_11 (struct merge_options*,int,int ,...) ;
 int FUNC_12 (struct merge_options*,struct commit*) ;
 struct commit* FUNC_13 (struct commit_list**) ;
 int FUNC_14 (TYPE_4__*,struct commit*) ;
 int FUNC_15 (TYPE_4__*) ;
 struct commit_list* FUNC_16 (struct commit_list*) ;
 scalar_t__ FUNC_17 (struct merge_options*,int) ;
 int FUNC_18 (struct strbuf*,int *,int ) ;
 int FUNC_19 (struct strbuf*) ;

__attribute__((used)) static int FUNC_20(struct merge_options *VAR_2,
        struct commit *VAR_3,
        struct commit *VAR_4,
        struct commit_list *VAR_5,
        struct commit **VAR_6)
{
 struct commit_list *VAR_7;
 struct commit *VAR_8;
 struct tree *VAR_9;
 int VAR_10;
 const char *VAR_11;
 struct strbuf VAR_12 = VAR_1;

 if (FUNC_17(VAR_2, 4)) {
  FUNC_11(VAR_2, 4, FUNC_1("Merging:"));
  FUNC_12(VAR_2, VAR_3);
  FUNC_12(VAR_2, VAR_4);
 }

 if (!VAR_5) {
  VAR_5 = FUNC_7(VAR_3, VAR_4);
  VAR_5 = FUNC_16(VAR_5);
 }

 if (FUNC_17(VAR_2, 5)) {
  unsigned VAR_13 = FUNC_2(VAR_5);

  FUNC_11(VAR_2, 5, FUNC_0("found %u common ancestor:",
    "found %u common ancestors:", VAR_13), VAR_13);
  for (VAR_7 = VAR_5; VAR_7; VAR_7 = VAR_7->next)
   FUNC_12(VAR_2, VAR_7->item);
 }

 VAR_8 = FUNC_13(&VAR_5);
 if (VAR_8 == ((void*)0)) {

  struct tree *VAR_14;

  VAR_14 = FUNC_8(VAR_2->repo, VAR_2->repo->hash_algo->empty_tree);
  VAR_8 = FUNC_9(VAR_2->repo, VAR_14,
        "ancestor");
  VAR_11 = "empty tree";
 } else if (VAR_2->ancestor && !VAR_2->priv->call_depth) {
  VAR_11 = VAR_2->ancestor;
 } else if (VAR_5) {
  VAR_11 = "merged common ancestors";
 } else {
  FUNC_18(&VAR_12,
      &VAR_8->object.oid,
      VAR_0);
  VAR_11 = VAR_12.buf;
 }

 for (VAR_7 = VAR_5; VAR_7; VAR_7 = VAR_7->next) {
  const char *VAR_15, *VAR_16;
  VAR_2->priv->call_depth++;
  FUNC_4(VAR_2->repo->index);
  VAR_15 = VAR_2->branch1;
  VAR_16 = VAR_2->branch2;
  VAR_2->branch1 = "Temporary merge branch 1";
  VAR_2->branch2 = "Temporary merge branch 2";
  if (FUNC_20(VAR_2, VAR_8, VAR_7->item,
          ((void*)0), &VAR_8) < 0)
   return -1;
  VAR_2->branch1 = VAR_15;
  VAR_2->branch2 = VAR_16;
  VAR_2->priv->call_depth--;

  if (!VAR_8)
   return FUNC_5(VAR_2, FUNC_1("merge returned no commit"));
 }

 FUNC_4(VAR_2->repo->index);
 if (!VAR_2->priv->call_depth)
  FUNC_15(VAR_2->repo);

 VAR_2->ancestor = VAR_11;
 VAR_10 = FUNC_10(VAR_2,
         FUNC_14(VAR_2->repo, VAR_3),
         FUNC_14(VAR_2->repo, VAR_4),
         FUNC_14(VAR_2->repo,
         VAR_8),
         &VAR_9);
 FUNC_19(&VAR_12);
 VAR_2->ancestor = ((void*)0);
 if (VAR_10 < 0) {
  FUNC_6(VAR_2);
  return VAR_10;
 }

 if (VAR_2->priv->call_depth) {
  *VAR_6 = FUNC_9(VAR_2->repo, VAR_9,
           "merged tree");
  FUNC_3(VAR_3, &(*VAR_6)->parents);
  FUNC_3(VAR_4, &(*VAR_6)->parents->next);
 }
 return VAR_10;
}
