
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_drm {scalar_t__ domain; } ;
struct TYPE_2__ {size_t size; } ;
struct tegra_bo {int vaddr; int paddr; TYPE_1__ gem; } ;
struct drm_device {int dev; struct tegra_drm* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,size_t,int *,int) ;
 int FUNC_2 (struct drm_device*,struct tegra_bo*) ;
 int FUNC_3 (struct drm_device*,struct tegra_bo*) ;
 int FUNC_4 (struct tegra_drm*,struct tegra_bo*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_3, struct tegra_bo *VAR_4)
{
 struct tegra_drm *VAR_5 = VAR_3->dev_private;
 int VAR_6;

 if (VAR_5->domain) {
  VAR_6 = FUNC_3(VAR_3, VAR_4);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_4(VAR_5, VAR_4);
  if (VAR_6 < 0) {
   FUNC_2(VAR_3, VAR_4);
   return VAR_6;
  }
 } else {
  size_t VAR_7 = VAR_4->gem.size;

  VAR_4->vaddr = FUNC_1(VAR_3->dev, VAR_7, &VAR_4->paddr,
      VAR_1 | VAR_2);
  if (!VAR_4->vaddr) {
   FUNC_0(VAR_3->dev,
    "failed to allocate buffer of size %zu\n",
    VAR_7);
   return -VAR_0;
  }
 }

 return 0;
}
