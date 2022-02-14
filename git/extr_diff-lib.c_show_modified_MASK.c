
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int find_copies_harder; } ;
struct TYPE_7__ {TYPE_1__ flags; } ;
struct rev_info {TYPE_3__ diffopt; int dense_combined_merges; scalar_t__ combine_merges; } ;
struct object_id {int dummy; } ;
struct combine_diff_path {char* path; unsigned int mode; TYPE_2__* parent; int oid; int * next; } ;
struct combine_diff_parent {int dummy; } ;
struct cache_entry {unsigned int ce_mode; int name; struct object_id const oid; } ;
struct TYPE_6__ {unsigned int mode; int oid; void* status; } ;


 void* VAR_0 ;
 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*,unsigned int,unsigned int,struct object_id const*,struct object_id const*,int,int,int ,int ,unsigned int) ;
 int FUNC_3 (struct rev_info*,char*,struct cache_entry const*,struct object_id const*,int,unsigned int,int ) ;
 int FUNC_4 (struct combine_diff_path*) ;
 scalar_t__ FUNC_5 (struct cache_entry const*,struct object_id const**,unsigned int*,int,int,unsigned int*,TYPE_3__*) ;
 int FUNC_6 (struct object_id const*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct object_id const*) ;
 scalar_t__ FUNC_11 (struct object_id const*,struct object_id const*) ;
 int FUNC_12 (struct combine_diff_path*,int,int ,struct rev_info*) ;
 struct combine_diff_path* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct rev_info *VAR_1,
    const struct cache_entry *VAR_2,
    const struct cache_entry *VAR_3,
    int VAR_4,
    int VAR_5, int VAR_6)
{
 unsigned int VAR_7, VAR_8;
 const struct object_id *VAR_9;
 unsigned VAR_10 = 0;

 if (FUNC_5(VAR_3, &VAR_9, &VAR_7, VAR_5, VAR_6,
     &VAR_10, &VAR_1->diffopt) < 0) {
  if (VAR_4)
   FUNC_3(VAR_1, "-", VAR_2,
          &VAR_2->oid, 1, VAR_2->ce_mode,
          0);
  return -1;
 }

 if (VAR_1->combine_merges && !VAR_5 &&
     (!FUNC_11(VAR_9, &VAR_2->oid) || !FUNC_11(&VAR_2->oid, &VAR_3->oid))) {
  struct combine_diff_path *VAR_11;
  int VAR_12 = FUNC_0(VAR_3);

  VAR_11 = FUNC_13(FUNC_1(2, VAR_12));
  VAR_11->path = (char *) &VAR_11->parent[2];
  VAR_11->next = ((void*)0);
  FUNC_7(VAR_11->path, VAR_3->name, VAR_12);
  VAR_11->path[VAR_12] = 0;
  VAR_11->mode = VAR_7;
  FUNC_9(&VAR_11->oid);
  FUNC_8(VAR_11->parent, 0, 2 * sizeof(struct combine_diff_parent));
  VAR_11->parent[0].status = VAR_0;
  VAR_11->parent[0].mode = VAR_3->ce_mode;
  FUNC_10(&VAR_11->parent[0].oid, &VAR_3->oid);
  VAR_11->parent[1].status = VAR_0;
  VAR_11->parent[1].mode = VAR_2->ce_mode;
  FUNC_10(&VAR_11->parent[1].oid, &VAR_2->oid);
  FUNC_12(VAR_11, 2, VAR_1->dense_combined_merges, VAR_1);
  FUNC_4(VAR_11);
  return 0;
 }

 VAR_8 = VAR_2->ce_mode;
 if (VAR_7 == VAR_8 && FUNC_11(VAR_9, &VAR_2->oid) && !VAR_10 &&
     !VAR_1->diffopt.flags.find_copies_harder)
  return 0;

 FUNC_2(&VAR_1->diffopt, VAR_8, VAR_7,
      &VAR_2->oid, VAR_9, 1, !FUNC_6(VAR_9),
      VAR_2->name, 0, VAR_10);
 return 0;
}
