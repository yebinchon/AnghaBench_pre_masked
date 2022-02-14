
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ep93xx_dma_chan {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (struct ep93xx_dma_chan*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ep93xx_dma_chan *VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_4(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_2(VAR_4->regs + VAR_0);
 VAR_6 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_4, VAR_6);
 FUNC_5(&VAR_4->lock, VAR_5);

 while (FUNC_0(VAR_4) >= VAR_3)
  FUNC_3();
}
