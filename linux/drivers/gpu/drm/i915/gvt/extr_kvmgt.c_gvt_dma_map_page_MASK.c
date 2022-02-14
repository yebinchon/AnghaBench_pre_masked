
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct intel_vgpu {TYPE_4__* gvt; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {TYPE_3__* dev_priv; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_7__ {TYPE_2__ drm; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,struct page*,int ,unsigned long,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct intel_vgpu*,unsigned long,unsigned long,struct page**) ;
 int FUNC_3 (struct intel_vgpu*,unsigned long,unsigned long) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct intel_vgpu *VAR_2, unsigned long VAR_3,
  dma_addr_t *VAR_4, unsigned long VAR_5)
{
 struct device *VAR_6 = &VAR_2->gvt->dev_priv->drm.pdev->dev;
 struct page *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_5, &VAR_7);
 if (VAR_8)
  return VAR_8;


 *VAR_4 = FUNC_0(VAR_6, VAR_7, 0, VAR_5, VAR_1);
 if (FUNC_1(VAR_6, *VAR_4)) {
  FUNC_4("DMA mapping failed for pfn 0x%lx, ret %d\n",
        FUNC_5(VAR_7), VAR_8);
  FUNC_3(VAR_2, VAR_3, VAR_5);
  return -VAR_0;
 }

 return 0;
}
