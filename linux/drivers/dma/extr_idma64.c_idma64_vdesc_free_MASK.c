
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct idma64_chan {int dummy; } ;


 int FUNC_0 (struct idma64_chan*,int ) ;
 struct idma64_chan* FUNC_1 (int ) ;
 int FUNC_2 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_3(struct virt_dma_desc *VAR_0)
{
 struct idma64_chan *VAR_1 = FUNC_1(VAR_0->tx.chan);

 FUNC_0(VAR_1, FUNC_2(VAR_0));
}
