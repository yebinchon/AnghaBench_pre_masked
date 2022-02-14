
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int address; int vma; } ;
struct page {int dummy; } ;
struct nouveau_drm {TYPE_3__* dmem; TYPE_1__* dev; } ;
struct migrate_vma {int* src; int* dst; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {scalar_t__ (* copy_func ) (struct nouveau_drm*,int,int ,int ,int ,int ) ;} ;
struct TYPE_6__ {TYPE_2__ migrate; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct device*,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ) ;
 struct page* FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct nouveau_drm*,int,int ,int ,int ,int ) ;

__attribute__((used)) static vm_fault_t FUNC_11(struct nouveau_drm *VAR_8,
  struct vm_fault *VAR_9, struct migrate_vma *VAR_10,
  dma_addr_t *VAR_11)
{
 struct device *VAR_12 = VAR_8->dev->dev;
 struct page *VAR_13, *VAR_14;

 VAR_14 = FUNC_7(VAR_10->src[0]);
 if (!VAR_14 || !(VAR_10->src[0] & VAR_3))
  return 0;

 VAR_13 = FUNC_1(VAR_1, VAR_9->vma, VAR_9->address);
 if (!VAR_13)
  return VAR_7;
 FUNC_5(VAR_13);

 *VAR_11 = FUNC_2(VAR_12, VAR_13, 0, VAR_6, VAR_0);
 if (FUNC_3(VAR_12, *VAR_11))
  goto error_free_page;

 if (VAR_8->dmem->migrate.copy_func(VAR_8, 1, VAR_4, *VAR_11,
   VAR_5, FUNC_8(VAR_14)))
  goto error_dma_unmap;

 VAR_10->dst[0] = FUNC_6(FUNC_9(VAR_13)) | VAR_2;
 return 0;

error_dma_unmap:
 FUNC_4(VAR_12, *VAR_11, VAR_6, VAR_0);
error_free_page:
 FUNC_0(VAR_13);
 return VAR_7;
}
