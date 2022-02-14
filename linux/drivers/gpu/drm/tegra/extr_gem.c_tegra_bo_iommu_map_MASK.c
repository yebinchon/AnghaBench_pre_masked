
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tegra_drm {int mm_lock; TYPE_3__* drm; int domain; int mm; } ;
struct TYPE_8__ {int size; } ;
struct tegra_bo {TYPE_4__* mm; int size; TYPE_2__* sgt; int paddr; TYPE_1__ gem; } ;
struct TYPE_11__ {int start; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int nents; int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,TYPE_4__*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct tegra_drm *VAR_6, struct tegra_bo *VAR_7)
{
 int VAR_8 = VAR_3 | VAR_4;
 int VAR_9;

 if (VAR_7->mm)
  return -VAR_0;

 VAR_7->mm = FUNC_5(sizeof(*VAR_7->mm), VAR_2);
 if (!VAR_7->mm)
  return -VAR_1;

 FUNC_6(&VAR_6->mm_lock);

 VAR_9 = FUNC_1(&VAR_6->mm,
      VAR_7->mm, VAR_7->gem.size, VAR_5, 0, 0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->drm->dev, "out of I/O virtual memory: %d\n",
   VAR_9);
  goto unlock;
 }

 VAR_7->paddr = VAR_7->mm->start;

 VAR_7->size = FUNC_3(VAR_6->domain, VAR_7->paddr, VAR_7->sgt->sgl,
    VAR_7->sgt->nents, VAR_8);
 if (!VAR_7->size) {
  FUNC_0(VAR_6->drm->dev, "failed to map buffer\n");
  VAR_9 = -VAR_1;
  goto remove;
 }

 FUNC_7(&VAR_6->mm_lock);

 return 0;

remove:
 FUNC_2(VAR_7->mm);
unlock:
 FUNC_7(&VAR_6->mm_lock);
 FUNC_4(VAR_7->mm);
 return VAR_9;
}
