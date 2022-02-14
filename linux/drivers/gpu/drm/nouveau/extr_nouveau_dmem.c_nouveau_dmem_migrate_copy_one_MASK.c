
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct nouveau_drm {TYPE_2__* dmem; TYPE_3__* dev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {struct device* dev; } ;
struct TYPE_4__ {scalar_t__ (* copy_func ) (struct nouveau_drm*,int,int ,int ,int ,int ) ;} ;
struct TYPE_5__ {TYPE_1__ migrate; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 unsigned long FUNC_3 (int ) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct nouveau_drm*) ;
 int FUNC_7 (struct nouveau_drm*,struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct nouveau_drm*,int,int ,int ,int ,int ) ;

__attribute__((used)) static unsigned long FUNC_10(struct nouveau_drm *VAR_6,
  unsigned long VAR_7, dma_addr_t *VAR_8)
{
 struct device *VAR_9 = VAR_6->dev->dev;
 struct page *VAR_10, *VAR_11;

 VAR_11 = FUNC_4(VAR_7);
 if (!VAR_11 || !(VAR_7 & VAR_2))
  goto out;

 VAR_10 = FUNC_6(VAR_6);
 if (!VAR_10)
  return 0;

 *VAR_8 = FUNC_0(VAR_9, VAR_11, 0, VAR_5, VAR_0);
 if (FUNC_1(VAR_9, *VAR_8))
  goto out_free_page;

 if (VAR_6->dmem->migrate.copy_func(VAR_6, 1, VAR_4,
   FUNC_5(VAR_10), VAR_3,
   *VAR_8))
  goto out_dma_unmap;

 return FUNC_3(FUNC_8(VAR_10)) | VAR_1;

out_dma_unmap:
 FUNC_2(VAR_9, *VAR_8, VAR_5, VAR_0);
out_free_page:
 FUNC_7(VAR_6, VAR_10);
out:
 return 0;
}
