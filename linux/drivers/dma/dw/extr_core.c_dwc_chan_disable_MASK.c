
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chan {int mask; } ;
struct dw_dma {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dw_dma*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dw_dma*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct dw_dma *VAR_1, struct dw_dma_chan *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, VAR_2->mask);
 while (FUNC_2(VAR_1, VAR_0) & VAR_2->mask)
  FUNC_1();
}
