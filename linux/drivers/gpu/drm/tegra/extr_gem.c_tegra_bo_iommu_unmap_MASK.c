
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {int mm_lock; int domain; } ;
struct tegra_bo {int mm; int size; int paddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tegra_drm *VAR_0, struct tegra_bo *VAR_1)
{
 if (!VAR_1->mm)
  return 0;

 FUNC_3(&VAR_0->mm_lock);
 FUNC_1(VAR_0->domain, VAR_1->paddr, VAR_1->size);
 FUNC_0(VAR_1->mm);
 FUNC_4(&VAR_0->mm_lock);

 FUNC_2(VAR_1->mm);

 return 0;
}
