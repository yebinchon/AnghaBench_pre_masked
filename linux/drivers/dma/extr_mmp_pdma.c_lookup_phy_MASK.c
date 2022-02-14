
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_pdma_phy {struct mmp_pdma_chan* vchan; } ;
struct mmp_pdma_device {int dma_channels; int phy_lock; struct mmp_pdma_phy* phy; } ;
struct TYPE_2__ {int device; } ;
struct mmp_pdma_chan {TYPE_1__ chan; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct mmp_pdma_device* FUNC_2 (int ) ;

__attribute__((used)) static struct mmp_pdma_phy *FUNC_3(struct mmp_pdma_chan *VAR_0)
{
 int VAR_1, VAR_2;
 struct mmp_pdma_device *VAR_3 = FUNC_2(VAR_0->chan.device);
 struct mmp_pdma_phy *VAR_4, *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 FUNC_0(&VAR_3->phy_lock, VAR_6);
 for (VAR_1 = 0; VAR_1 <= ((VAR_3->dma_channels - 1) & 0xf) >> 2; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < VAR_3->dma_channels; VAR_2++) {
   if (VAR_1 != (VAR_2 & 0xf) >> 2)
    continue;
   VAR_4 = &VAR_3->phy[VAR_2];
   if (!VAR_4->vchan) {
    VAR_4->vchan = VAR_0;
    VAR_5 = VAR_4;
    goto out_unlock;
   }
  }
 }

out_unlock:
 FUNC_1(&VAR_3->phy_lock, VAR_6);
 return VAR_5;
}
