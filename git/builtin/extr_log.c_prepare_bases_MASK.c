
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rev_info {int max_parents; int topo_order; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {int recursive; } ;
struct diff_options {TYPE_1__ flags; } ;
struct commit_base {int dummy; } ;
struct TYPE_4__ {int flags; struct object_id oid; } ;
struct commit {TYPE_2__ object; } ;
struct base_tree_info {int nr_patch_id; struct object_id* patch_id; int alloc_patch_id; struct object_id base_commit; } ;


 int FUNC_0 (struct object_id*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct rev_info*,TYPE_2__*,char*) ;
 int FUNC_3 (struct commit_base*) ;
 int* FUNC_4 (struct commit_base*,struct commit*) ;
 scalar_t__ FUNC_5 (struct commit*,struct diff_options*,struct object_id*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct diff_options*) ;
 struct commit* FUNC_8 (struct rev_info*) ;
 int FUNC_9 (struct commit_base*) ;
 int FUNC_10 (struct object_id*,struct object_id*) ;
 scalar_t__ FUNC_11 (struct rev_info*) ;
 int FUNC_12 (int ,struct diff_options*) ;
 int FUNC_13 (int ,struct rev_info*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_14(struct base_tree_info *VAR_2,
     struct commit *VAR_3,
     struct commit **VAR_4,
     int VAR_5)
{
 struct commit *VAR_6;
 struct rev_info VAR_7;
 struct diff_options VAR_8;
 struct commit_base VAR_9;
 int VAR_10;

 if (!VAR_3)
  return;

 FUNC_9(&VAR_9);
 FUNC_12(VAR_1, &VAR_8);
 VAR_8.flags.recursive = 1;
 FUNC_7(&VAR_8);

 FUNC_10(&VAR_2->base_commit, &VAR_3->object.oid);

 FUNC_13(VAR_1, &VAR_7, ((void*)0));
 VAR_7.max_parents = 1;
 VAR_7.topo_order = 1;
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_4[VAR_10]->object.flags &= ~VAR_0;
  FUNC_2(&VAR_7, &VAR_4[VAR_10]->object, "rev_list");
  *FUNC_4(&VAR_9, VAR_4[VAR_10]) = 1;
 }
 VAR_3->object.flags |= VAR_0;
 FUNC_2(&VAR_7, &VAR_3->object, "base");

 if (FUNC_11(&VAR_7))
  FUNC_6(FUNC_1("revision walk setup failed"));




 while ((VAR_6 = FUNC_8(&VAR_7)) != ((void*)0)) {
  struct object_id VAR_11;
  struct object_id *VAR_12;
  if (*FUNC_4(&VAR_9, VAR_6))
   continue;
  if (FUNC_5(VAR_6, &VAR_8, &VAR_11, 0, 1))
   FUNC_6(FUNC_1("cannot get patch id"));
  FUNC_0(VAR_2->patch_id, VAR_2->nr_patch_id + 1, VAR_2->alloc_patch_id);
  VAR_12 = VAR_2->patch_id + VAR_2->nr_patch_id;
  FUNC_10(VAR_12, &VAR_11);
  VAR_2->nr_patch_id++;
 }
 FUNC_3(&VAR_9);
}
