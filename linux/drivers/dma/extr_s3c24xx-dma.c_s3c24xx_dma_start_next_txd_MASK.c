
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int tx; } ;
struct TYPE_3__ {int next; } ;
struct TYPE_4__ {int node; } ;
struct s3c24xx_txd {TYPE_1__ dsg_list; int at; TYPE_2__ vd; } ;
struct s3c24xx_dma_phy {int dummy; } ;
struct s3c24xx_dma_chan {struct s3c24xx_txd* at; int vc; struct s3c24xx_dma_phy* phy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct s3c24xx_dma_phy*) ;
 int FUNC_3 (struct s3c24xx_dma_chan*,struct s3c24xx_txd*) ;
 struct s3c24xx_txd* FUNC_4 (int *) ;
 struct virt_dma_desc* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct s3c24xx_dma_chan *VAR_0)
{
 struct s3c24xx_dma_phy *VAR_1 = VAR_0->phy;
 struct virt_dma_desc *VAR_2 = FUNC_5(&VAR_0->vc);
 struct s3c24xx_txd *VAR_3 = FUNC_4(&VAR_2->tx);

 FUNC_1(&VAR_3->vd.node);

 VAR_0->at = VAR_3;


 while (FUNC_2(VAR_1))
  FUNC_0();


 VAR_3->at = VAR_3->dsg_list.next;
 FUNC_3(VAR_0, VAR_3);
}
