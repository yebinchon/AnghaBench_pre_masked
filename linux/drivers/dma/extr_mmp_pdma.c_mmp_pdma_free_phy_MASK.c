
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mmp_pdma_device {int phy_lock; } ;
struct TYPE_3__ {int device; } ;
struct mmp_pdma_chan {TYPE_2__* phy; int drcmr; TYPE_1__ chan; } ;
struct TYPE_4__ {int * vchan; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct mmp_pdma_device* FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mmp_pdma_chan *VAR_0)
{
 struct mmp_pdma_device *VAR_1 = FUNC_3(VAR_0->chan.device);
 unsigned long VAR_2;
 u32 VAR_3;

 if (!VAR_0->phy)
  return;


 VAR_3 = FUNC_0(VAR_0->drcmr);
 FUNC_4(0, VAR_0->phy->base + VAR_3);

 FUNC_1(&VAR_1->phy_lock, VAR_2);
 VAR_0->phy->vchan = ((void*)0);
 VAR_0->phy = ((void*)0);
 FUNC_2(&VAR_1->phy_lock, VAR_2);
}
