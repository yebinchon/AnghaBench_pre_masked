
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct virt_dma_desc {int tx; } ;
struct TYPE_2__ {int node; } ;
struct pl08x_txd {int ccfg; int * llis_va; TYPE_1__ vd; } ;
struct pl08x_phy_chan {scalar_t__ reg_config; scalar_t__ reg_control; scalar_t__ ftdmac020; int id; } ;
struct pl08x_driver_data {scalar_t__ base; } ;
struct pl08x_dma_chan {struct pl08x_txd* at; int vc; struct pl08x_phy_chan* phychan; struct pl08x_driver_data* host; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pl08x_phy_chan*) ;
 int FUNC_4 (struct pl08x_driver_data*,struct pl08x_phy_chan*,int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 struct pl08x_txd* FUNC_6 (int *) ;
 struct virt_dma_desc* FUNC_7 (int *) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct pl08x_dma_chan *VAR_5)
{
 struct pl08x_driver_data *VAR_6 = VAR_5->host;
 struct pl08x_phy_chan *VAR_7 = VAR_5->phychan;
 struct virt_dma_desc *VAR_8 = FUNC_7(&VAR_5->vc);
 struct pl08x_txd *VAR_9 = FUNC_6(&VAR_8->tx);
 u32 VAR_10;

 FUNC_2(&VAR_9->vd.node);

 VAR_5->at = VAR_9;


 while (FUNC_3(VAR_7))
  FUNC_1();

 FUNC_4(VAR_6, VAR_7, &VAR_9->llis_va[0], VAR_9->ccfg);



 while (FUNC_5(VAR_6->base + VAR_4) & FUNC_0(VAR_7->id))
  FUNC_1();


 if (VAR_7->ftdmac020) {
  VAR_10 = FUNC_5(VAR_7->reg_config);
  while (VAR_10 & VAR_0)
   VAR_10 = FUNC_5(VAR_7->reg_config);

  VAR_10 = FUNC_5(VAR_7->reg_control);
  while (VAR_10 & VAR_1)
   VAR_10 = FUNC_5(VAR_7->reg_control);

  FUNC_8(VAR_10 | VAR_1,
         VAR_7->reg_control);
 } else {
  VAR_10 = FUNC_5(VAR_7->reg_config);
  while ((VAR_10 & VAR_2) ||
         (VAR_10 & VAR_3))
   VAR_10 = FUNC_5(VAR_7->reg_config);

  FUNC_8(VAR_10 | VAR_3, VAR_7->reg_config);
 }
}
