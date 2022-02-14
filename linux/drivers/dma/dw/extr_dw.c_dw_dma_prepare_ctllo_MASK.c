
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int m_master; int p_master; } ;
struct dma_slave_config {int dst_maxburst; int src_maxburst; } ;
struct dw_dma_chan {scalar_t__ direction; TYPE_1__ dws; struct dma_slave_config dma_sconfig; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_5(struct dw_dma_chan *VAR_5)
{
 struct dma_slave_config *VAR_6 = &VAR_5->dma_sconfig;
 bool VAR_7 = FUNC_4(VAR_5->direction);
 u8 VAR_8 = VAR_7 ? VAR_6->src_maxburst : VAR_4;
 u8 VAR_9 = VAR_7 ? VAR_6->dst_maxburst : VAR_4;
 u8 VAR_10 = VAR_5->dws.p_master;
 u8 VAR_11 = VAR_5->dws.m_master;
 u8 VAR_12 = (VAR_5->direction == VAR_1) ? VAR_10 : VAR_11;
 u8 VAR_13 = (VAR_5->direction == VAR_0) ? VAR_10 : VAR_11;

 return VAR_2 | VAR_3 |
        FUNC_1(VAR_9) | FUNC_3(VAR_8) |
        FUNC_0(VAR_12) | FUNC_2(VAR_13);
}
