
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; } ;
struct tegra_bo {int paddr; scalar_t__ vaddr; TYPE_3__ gem; TYPE_1__* sgt; scalar_t__ pages; } ;
struct drm_device {int dev; } ;
struct TYPE_4__ {int nents; int sgl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_1, struct tegra_bo *VAR_2)
{
 if (VAR_2->pages) {
  FUNC_1(VAR_1->dev, VAR_2->sgt->sgl, VAR_2->sgt->nents,
        VAR_0);
  FUNC_2(&VAR_2->gem, VAR_2->pages, 1, 1);
  FUNC_4(VAR_2->sgt);
  FUNC_3(VAR_2->sgt);
 } else if (VAR_2->vaddr) {
  FUNC_0(VAR_1->dev, VAR_2->gem.size, VAR_2->vaddr, VAR_2->paddr);
 }
}
