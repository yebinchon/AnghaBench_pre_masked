
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_device {struct omap_device* hwmods; TYPE_2__* pdev; } ;
struct TYPE_3__ {int * od; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;


 int FUNC_0 (struct omap_device*) ;

void FUNC_1(struct omap_device *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->pdev->archdata.od = ((void*)0);
 FUNC_0(VAR_0->hwmods);
 FUNC_0(VAR_0);
}
