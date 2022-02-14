
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int scratch_mfn; int scratch_page; } ;
struct intel_gvt {TYPE_4__ gtt; TYPE_3__* dev_priv; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_7__ {TYPE_2__ drm; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_gvt*) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 scalar_t__ VAR_2 ;

void FUNC_3(struct intel_gvt *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev_priv->drm.pdev->dev;
 dma_addr_t VAR_5 = (dma_addr_t)(VAR_3->gtt.scratch_mfn <<
     VAR_0);

 FUNC_2(VAR_4, VAR_5, 4096, VAR_1);

 FUNC_0(VAR_3->gtt.scratch_page);

 if (VAR_2)
  FUNC_1(VAR_3);
}
