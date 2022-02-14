
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chan {int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dw_dma_chan*,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct dw_dma_chan *VAR_5)
{
 FUNC_2(FUNC_0(&VAR_5->chan),
  "  SAR: 0x%x DAR: 0x%x LLP: 0x%x CTL: 0x%x:%08x\n",
  FUNC_1(VAR_5, VAR_4),
  FUNC_1(VAR_5, VAR_2),
  FUNC_1(VAR_5, VAR_3),
  FUNC_1(VAR_5, VAR_0),
  FUNC_1(VAR_5, VAR_1));
}
