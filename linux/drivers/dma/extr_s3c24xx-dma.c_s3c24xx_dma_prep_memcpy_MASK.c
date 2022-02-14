
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_txd {int width; int disrcc; int didstc; int dcon; int vd; int dsg_list; } ;
struct s3c24xx_sg {int src_addr; int dst_addr; size_t len; int node; } ;
struct s3c24xx_dma_engine {TYPE_1__* pdev; } ;
struct s3c24xx_dma_chan {int vc; int name; struct s3c24xx_dma_engine* host; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,size_t,int ) ;
 int FUNC_1 (int *,char*,size_t) ;
 struct s3c24xx_sg* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct s3c24xx_txd*) ;
 struct s3c24xx_txd* FUNC_5 () ;
 struct s3c24xx_dma_chan* FUNC_6 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_7 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_8(
  struct dma_chan *VAR_9, dma_addr_t VAR_10, dma_addr_t VAR_11,
  size_t VAR_12, unsigned long VAR_13)
{
 struct s3c24xx_dma_chan *VAR_14 = FUNC_6(VAR_9);
 struct s3c24xx_dma_engine *VAR_15 = VAR_14->host;
 struct s3c24xx_txd *VAR_16;
 struct s3c24xx_sg *VAR_17;
 int VAR_18, VAR_19;

 FUNC_0(&VAR_15->pdev->dev, "prepare memcpy of %zu bytes from %s\n",
   VAR_12, VAR_14->name);

 if ((VAR_12 & VAR_4) != VAR_12) {
  FUNC_1(&VAR_15->pdev->dev, "memcpy size %zu to large\n", VAR_12);
  return ((void*)0);
 }

 VAR_16 = FUNC_5();
 if (!VAR_16)
  return ((void*)0);

 VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_0);
 if (!VAR_17) {
  FUNC_4(VAR_16);
  return ((void*)0);
 }
 FUNC_3(&VAR_17->node, &VAR_16->dsg_list);

 VAR_17->src_addr = VAR_11;
 VAR_17->dst_addr = VAR_10;
 VAR_17->len = VAR_12;







 VAR_18 = VAR_11 % 4;
 VAR_19 = VAR_10 % 4;
 switch (VAR_12 % 4) {
 case 0:
  VAR_16->width = (VAR_18 == 0 && VAR_19 == 0) ? 4 : 1;
  break;
 case 2:
  VAR_16->width = ((VAR_18 == 2 || VAR_18 == 0) &&
         (VAR_19 == 2 || VAR_19 == 0)) ? 2 : 1;
  break;
 default:
  VAR_16->width = 1;
  break;
 }

 VAR_16->disrcc = VAR_8 | VAR_7;
 VAR_16->didstc = VAR_6 | VAR_5;
 VAR_16->dcon |= VAR_1 | VAR_3 |
       VAR_2;

 return FUNC_7(&VAR_14->vc, &VAR_16->vd, VAR_13);
}
