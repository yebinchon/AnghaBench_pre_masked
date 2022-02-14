
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; } ;
struct dw_dma_chan {int direction; struct dma_slave_config dma_sconfig; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct dw_dma_chan *VAR_3)
{
 struct dma_slave_config *VAR_4 = &VAR_3->dma_sconfig;
 bool VAR_5 = FUNC_2(VAR_3->direction);
 u8 VAR_6 = VAR_5 ? VAR_4->src_maxburst : VAR_2;
 u8 VAR_7 = VAR_5 ? VAR_4->dst_maxburst : VAR_2;

 return VAR_0 | VAR_1 |
        FUNC_0(VAR_7) | FUNC_1(VAR_6);
}
