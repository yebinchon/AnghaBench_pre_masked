
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch_ids {int patches; } ;
struct patch_id {int dummy; } ;
struct commit {int dummy; } ;
typedef int patch ;


 int VAR_0 ;
 struct patch_id* FUNC_0 (int *,struct patch_id*,int ,int *) ;
 scalar_t__ FUNC_1 (struct patch_id*,struct commit*,struct patch_ids*) ;
 int FUNC_2 (struct patch_id*,int ,int) ;
 int FUNC_3 (struct commit*) ;

struct patch_id *FUNC_4(struct commit *VAR_1,
         struct patch_ids *VAR_2)
{
 struct patch_id VAR_3;

 if (!FUNC_3(VAR_1))
  return ((void*)0);

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 if (FUNC_1(&VAR_3, VAR_1, VAR_2))
  return ((void*)0);

 return FUNC_0(&VAR_2->patches, &VAR_3, VAR_0, ((void*)0));
}
