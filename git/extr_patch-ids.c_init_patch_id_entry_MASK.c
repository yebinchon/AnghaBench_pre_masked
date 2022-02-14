
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch_ids {int diffopts; } ;
struct patch_id {int ent; struct commit* commit; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 scalar_t__ FUNC_0 (struct commit*,int *,struct object_id*,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct object_id*) ;

__attribute__((used)) static int FUNC_3(struct patch_id *VAR_0,
          struct commit *VAR_1,
          struct patch_ids *VAR_2)
{
 struct object_id VAR_3;

 VAR_0->commit = VAR_1;
 if (FUNC_0(VAR_1, &VAR_2->diffopts, &VAR_3, 1, 0))
  return -1;

 FUNC_1(&VAR_0->ent, FUNC_2(&VAR_3));
 return 0;
}
