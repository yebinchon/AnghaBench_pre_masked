
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_cli {int mutex; struct nouveau_abi16* abi16; } ;
struct nouveau_abi16 {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct drm_file*) ;
 struct nouveau_cli* FUNC_3 (struct drm_file*) ;

struct nouveau_abi16 *
FUNC_4(struct drm_file *VAR_0)
{
 struct nouveau_cli *VAR_1 = FUNC_3(VAR_0);
 FUNC_0(&VAR_1->mutex);
 if (FUNC_2(VAR_0))
  return VAR_1->abi16;
 FUNC_1(&VAR_1->mutex);
 return ((void*)0);
}
