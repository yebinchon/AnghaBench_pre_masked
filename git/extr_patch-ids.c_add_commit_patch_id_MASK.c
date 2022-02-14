
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch_ids {int patches; } ;
struct patch_id {int ent; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct patch_id*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct patch_id*,struct commit*,struct patch_ids*) ;
 int FUNC_3 (struct commit*) ;
 struct patch_id* FUNC_4 (int,int) ;

struct patch_id *FUNC_5(struct commit *VAR_0,
         struct patch_ids *VAR_1)
{
 struct patch_id *VAR_2;

 if (!FUNC_3(VAR_0))
  return ((void*)0);

 VAR_2 = FUNC_4(1, sizeof(*VAR_2));
 if (FUNC_2(VAR_2, VAR_0, VAR_1)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 FUNC_1(&VAR_1->patches, &VAR_2->ent);
 return VAR_2;
}
