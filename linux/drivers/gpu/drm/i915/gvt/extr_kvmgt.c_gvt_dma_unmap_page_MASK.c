
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_vgpu {TYPE_4__* gvt; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {TYPE_3__* dev_priv; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_7__ {TYPE_2__ drm; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,unsigned long,int ) ;
 int FUNC_1 (struct intel_vgpu*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu *VAR_1, unsigned long VAR_2,
  dma_addr_t VAR_3, unsigned long VAR_4)
{
 struct device *VAR_5 = &VAR_1->gvt->dev_priv->drm.pdev->dev;

 FUNC_0(VAR_5, VAR_3, VAR_4, VAR_0);
 FUNC_1(VAR_1, VAR_2, VAR_4);
}
