
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct base_tree_info {int nr_patch_id; int base_commit; scalar_t__ alloc_patch_id; int * patch_id; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct base_tree_info *VAR_0, FILE *VAR_1)
{
 int VAR_2;


 if (FUNC_2(&VAR_0->base_commit))
  return;


 FUNC_0(VAR_1, "\nbase-commit: %s\n", FUNC_3(&VAR_0->base_commit));


 for (VAR_2 = VAR_0->nr_patch_id - 1; VAR_2 >= 0; VAR_2--)
  FUNC_0(VAR_1, "prerequisite-patch-id: %s\n", FUNC_3(&VAR_0->patch_id[VAR_2]));

 FUNC_1(VAR_0->patch_id);
 VAR_0->nr_patch_id = 0;
 VAR_0->alloc_patch_id = 0;
 FUNC_4(&VAR_0->base_commit);
}
