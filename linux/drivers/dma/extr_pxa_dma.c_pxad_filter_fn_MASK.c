
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pxad_param {int prio; int drcmr; } ;
struct pxad_chan {int prio; int drcmr; } ;
struct dma_chan {TYPE_2__* device; } ;
struct TYPE_6__ {int driver; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int * driver; } ;


 TYPE_3__ VAR_0 ;
 struct pxad_chan* FUNC_0 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_1(struct dma_chan *VAR_1, void *VAR_2)
{
 struct pxad_chan *VAR_3 = FUNC_0(VAR_1);
 struct pxad_param *VAR_4 = VAR_2;

 if (VAR_1->device->dev->driver != &VAR_0.driver)
  return 0;

 VAR_3->drcmr = VAR_4->drcmr;
 VAR_3->prio = VAR_4->prio;

 return 1;
}
