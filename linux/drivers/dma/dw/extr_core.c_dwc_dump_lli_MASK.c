
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chan {int chan; } ;
struct dw_desc {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct dw_desc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_3(struct dw_dma_chan *VAR_5, struct dw_desc *VAR_6)
{
 FUNC_1(FUNC_0(&VAR_5->chan), "  desc: s0x%x d0x%x l0x%x c0x%x:%x\n",
   FUNC_2(VAR_6, VAR_4),
   FUNC_2(VAR_6, VAR_2),
   FUNC_2(VAR_6, VAR_3),
   FUNC_2(VAR_6, VAR_0),
   FUNC_2(VAR_6, VAR_1));
}
