
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct TYPE_5__ {TYPE_1__ chan; } ;
struct owl_dma_vchan {struct owl_dma_pchan* pchan; TYPE_2__ vc; } ;
struct owl_dma_pchan {int id; } ;
struct TYPE_6__ {int dev; } ;
struct owl_dma {TYPE_3__ dma; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct owl_dma_pchan* FUNC_1 (struct owl_dma*,struct owl_dma_vchan*) ;
 int FUNC_2 (struct owl_dma_vchan*) ;
 struct owl_dma* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct owl_dma_vchan *VAR_0)
{
 struct owl_dma *VAR_1 = FUNC_3(VAR_0->vc.chan.device);
 struct owl_dma_pchan *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2)
  return;

 FUNC_0(VAR_1->dma.dev, "allocated pchan %d\n", VAR_2->id);

 VAR_0->pchan = VAR_2;
 FUNC_2(VAR_0);
}
