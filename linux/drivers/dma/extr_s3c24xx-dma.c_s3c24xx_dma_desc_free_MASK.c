
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct s3c24xx_txd {int dummy; } ;
struct s3c24xx_dma_chan {int slave; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct s3c24xx_txd*) ;
 struct s3c24xx_dma_chan* FUNC_2 (int ) ;
 struct s3c24xx_txd* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct virt_dma_desc *VAR_0)
{
 struct s3c24xx_txd *VAR_1 = FUNC_3(&VAR_0->tx);
 struct s3c24xx_dma_chan *VAR_2 = FUNC_2(VAR_0->tx.chan);

 if (!VAR_2->slave)
  FUNC_0(&VAR_0->tx);

 FUNC_1(VAR_1);
}
