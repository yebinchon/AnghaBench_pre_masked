
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int tx; int node; } ;
struct omap_desc {int ccr; scalar_t__ dir; int dev_addr; int ei; int fi; int csdp; int clnk_ctrl; } ;
struct omap_chan {scalar_t__ sgidx; struct omap_desc* desc; int vc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct omap_chan*,unsigned int,int) ;
 int FUNC_4 (struct omap_chan*,struct omap_desc*) ;
 struct omap_desc* FUNC_5 (int *) ;
 struct virt_dma_desc* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct omap_chan *VAR_12)
{
 struct virt_dma_desc *VAR_13 = FUNC_6(&VAR_12->vc);
 struct omap_desc *VAR_14;
 unsigned VAR_15, VAR_16, VAR_17;

 if (!VAR_13) {
  VAR_12->desc = ((void*)0);
  return;
 }

 FUNC_1(&VAR_13->node);

 VAR_12->desc = VAR_14 = FUNC_5(&VAR_13->tx);
 VAR_12->sgidx = 0;






 FUNC_2();

 FUNC_3(VAR_12, VAR_0, VAR_14->ccr);
 if (FUNC_0())
  FUNC_3(VAR_12, VAR_1, VAR_14->ccr >> 16);

 if (VAR_14->dir == VAR_10 || VAR_14->dir == VAR_11) {
  VAR_15 = VAR_9;
  VAR_16 = VAR_7;
  VAR_17 = VAR_8;
 } else {
  VAR_15 = VAR_4;
  VAR_16 = VAR_2;
  VAR_17 = VAR_3;
 }

 FUNC_3(VAR_12, VAR_15, VAR_14->dev_addr);
 FUNC_3(VAR_12, VAR_16, VAR_14->ei);
 FUNC_3(VAR_12, VAR_17, VAR_14->fi);
 FUNC_3(VAR_12, VAR_6, VAR_14->csdp);
 FUNC_3(VAR_12, VAR_5, VAR_14->clnk_ctrl);

 FUNC_4(VAR_12, VAR_14);
}
