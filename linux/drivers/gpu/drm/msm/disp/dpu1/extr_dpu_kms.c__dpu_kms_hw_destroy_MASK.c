
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct drm_device {int dummy; } ;
struct dpu_kms {int rm_init; int * mmio; TYPE_2__* pdev; int * hw_mdp; int ** vbif; TYPE_3__* catalog; int rm; scalar_t__* hw_vbif; int * hw_intr; struct drm_device* dev; } ;
struct TYPE_6__ {int vbif_count; TYPE_1__* vbif; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {size_t id; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct dpu_kms*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dpu_kms *VAR_3)
{
 struct drm_device *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->dev;
 if (!VAR_4)
  return;

 if (VAR_3->hw_intr)
  FUNC_3(VAR_3->hw_intr);
 VAR_3->hw_intr = ((void*)0);


 FUNC_0(VAR_3);

 if (VAR_3->catalog) {
  for (VAR_5 = 0; VAR_5 < VAR_3->catalog->vbif_count; VAR_5++) {
   u32 VAR_6 = VAR_3->catalog->vbif[VAR_5].id;

   if ((VAR_6 < VAR_0) && VAR_3->hw_vbif[VAR_6])
    FUNC_5(VAR_3->hw_vbif[VAR_6]);
  }
 }

 if (VAR_3->rm_init)
  FUNC_6(&VAR_3->rm);
 VAR_3->rm_init = 0;

 if (VAR_3->catalog)
  FUNC_2(VAR_3->catalog);
 VAR_3->catalog = ((void*)0);

 if (VAR_3->vbif[VAR_1])
  FUNC_1(&VAR_3->pdev->dev, VAR_3->vbif[VAR_1]);
 VAR_3->vbif[VAR_1] = ((void*)0);

 if (VAR_3->vbif[VAR_2])
  FUNC_1(&VAR_3->pdev->dev, VAR_3->vbif[VAR_2]);
 VAR_3->vbif[VAR_2] = ((void*)0);

 if (VAR_3->hw_mdp)
  FUNC_4(VAR_3->hw_mdp);
 VAR_3->hw_mdp = ((void*)0);

 if (VAR_3->mmio)
  FUNC_1(&VAR_3->pdev->dev, VAR_3->mmio);
 VAR_3->mmio = ((void*)0);
}
