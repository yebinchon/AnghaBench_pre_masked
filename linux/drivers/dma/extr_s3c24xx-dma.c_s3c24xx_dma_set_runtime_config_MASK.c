
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dma_slave_config {scalar_t__ src_addr_width; scalar_t__ dst_addr_width; } ;
struct s3c24xx_dma_chan {TYPE_1__ vc; struct dma_slave_config cfg; int slave; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct s3c24xx_dma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_2,
      struct dma_slave_config *VAR_3)
{
 struct s3c24xx_dma_chan *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 int VAR_6 = 0;


 if (VAR_3->src_addr_width == VAR_0 ||
     VAR_3->dst_addr_width == VAR_0)
  return -VAR_1;

 FUNC_0(&VAR_4->vc.lock, VAR_5);

 if (!VAR_4->slave) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_4->cfg = *VAR_3;

out:
 FUNC_1(&VAR_4->vc.lock, VAR_5);
 return VAR_6;
}
