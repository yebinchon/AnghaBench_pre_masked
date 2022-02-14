
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int size; } ;
struct tegra_bo {int num_pages; TYPE_1__* pages; TYPE_5__ gem; TYPE_1__* sgt; } ;
struct drm_device {int dev; } ;
struct TYPE_11__ {int nents; int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_1__*,int,int) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct drm_device *VAR_3, struct tegra_bo *VAR_4)
{
 int VAR_5;

 VAR_4->pages = FUNC_3(&VAR_4->gem);
 if (FUNC_0(VAR_4->pages))
  return FUNC_1(VAR_4->pages);

 VAR_4->num_pages = VAR_4->gem.size >> VAR_2;

 VAR_4->sgt = FUNC_5(VAR_4->pages, VAR_4->num_pages);
 if (FUNC_0(VAR_4->sgt)) {
  VAR_5 = FUNC_1(VAR_4->sgt);
  goto put_pages;
 }

 VAR_5 = FUNC_2(VAR_3->dev, VAR_4->sgt->sgl, VAR_4->sgt->nents,
    VAR_0);
 if (VAR_5 == 0) {
  VAR_5 = -VAR_1;
  goto free_sgt;
 }

 return 0;

free_sgt:
 FUNC_7(VAR_4->sgt);
 FUNC_6(VAR_4->sgt);
put_pages:
 FUNC_4(&VAR_4->gem, VAR_4->pages, 0, 0);
 return VAR_5;
}
