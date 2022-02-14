
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_drm {scalar_t__ domain; } ;
struct TYPE_2__ {struct tegra_bo* import_attach; } ;
struct tegra_bo {int nents; TYPE_1__ gem; struct tegra_bo* sgt; int sgl; int paddr; } ;
struct drm_device {int dev; struct tegra_drm* dev_private; } ;
struct dma_buf_attachment {int nents; TYPE_1__ gem; struct dma_buf_attachment* sgt; int sgl; int paddr; } ;
struct dma_buf {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tegra_bo* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tegra_bo*) ;
 int FUNC_2 (struct tegra_bo*) ;
 int FUNC_3 (struct tegra_bo*) ;
 struct tegra_bo* FUNC_4 (struct dma_buf*,int ) ;
 int FUNC_5 (struct dma_buf*,struct tegra_bo*) ;
 struct tegra_bo* FUNC_6 (struct tegra_bo*,int ) ;
 int FUNC_7 (struct dma_buf*) ;
 int FUNC_8 (struct tegra_bo*,struct tegra_bo*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct dma_buf*) ;
 int FUNC_11 (struct tegra_bo*) ;
 int FUNC_12 (int ) ;
 struct tegra_bo* FUNC_13 (struct drm_device*,int ) ;
 int FUNC_14 (struct tegra_drm*,struct tegra_bo*) ;

__attribute__((used)) static struct tegra_bo *FUNC_15(struct drm_device *VAR_2,
     struct dma_buf *VAR_3)
{
 struct tegra_drm *VAR_4 = VAR_2->dev_private;
 struct dma_buf_attachment *VAR_5;
 struct tegra_bo *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_13(VAR_2, VAR_3->size);
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_5 = FUNC_4(VAR_3, VAR_2->dev);
 if (FUNC_1(VAR_5)) {
  VAR_7 = FUNC_3(VAR_5);
  goto free;
 }

 FUNC_10(VAR_3);

 VAR_6->sgt = FUNC_6(VAR_5, VAR_0);
 if (FUNC_1(VAR_6->sgt)) {
  VAR_7 = FUNC_3(VAR_6->sgt);
  goto detach;
 }

 if (VAR_4->domain) {
  VAR_7 = FUNC_14(VAR_4, VAR_6);
  if (VAR_7 < 0)
   goto detach;
 } else {
  if (VAR_6->sgt->nents > 1) {
   VAR_7 = -VAR_1;
   goto detach;
  }

  VAR_6->paddr = FUNC_12(VAR_6->sgt->sgl);
 }

 VAR_6->gem.import_attach = VAR_5;

 return VAR_6;

detach:
 if (!FUNC_2(VAR_6->sgt))
  FUNC_8(VAR_5, VAR_6->sgt, VAR_0);

 FUNC_5(VAR_3, VAR_5);
 FUNC_7(VAR_3);
free:
 FUNC_9(&VAR_6->gem);
 FUNC_11(VAR_6);
 return FUNC_0(VAR_7);
}
