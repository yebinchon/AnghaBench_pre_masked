
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {int * algo; struct psb_intel_sdvo* algo_data; TYPE_1__ dev; int name; int class; int owner; } ;
struct psb_intel_sdvo {TYPE_3__ ddc; } ;
struct drm_device {TYPE_2__* pdev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static bool
FUNC_2(struct psb_intel_sdvo *VAR_4,
     struct drm_device *VAR_5)
{
 VAR_4->ddc.owner = VAR_2;
 VAR_4->ddc.class = VAR_0;
 FUNC_1(VAR_4->ddc.name, VAR_1, "SDVO DDC proxy");
 VAR_4->ddc.dev.parent = &VAR_5->pdev->dev;
 VAR_4->ddc.algo_data = VAR_4;
 VAR_4->ddc.algo = &VAR_3;

 return FUNC_0(&VAR_4->ddc) == 0;
}
