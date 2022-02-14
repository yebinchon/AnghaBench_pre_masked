
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_acr {scalar_t__ boot_falcon; } ;
struct acr_r352 {int ls_blob; int load_blob; struct acr_r352* hsbl_blob; struct acr_r352* hsbl_unload_blob; int unload_blob; } ;


 scalar_t__ VAR_0 ;
 struct acr_r352* FUNC_0 (struct nvkm_acr*) ;
 int FUNC_1 (struct acr_r352*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_acr *VAR_1)
{
 struct acr_r352 *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->unload_blob);

 if (VAR_1->boot_falcon != VAR_0)
  FUNC_1(VAR_2->hsbl_unload_blob);
 FUNC_1(VAR_2->hsbl_blob);
 FUNC_2(&VAR_2->load_blob);
 FUNC_2(&VAR_2->ls_blob);

 FUNC_1(VAR_2);
}
