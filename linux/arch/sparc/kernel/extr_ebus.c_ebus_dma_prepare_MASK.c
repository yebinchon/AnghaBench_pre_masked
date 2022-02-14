
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ebus_dma_info {int flags; int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ebus_dma_info*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct ebus_dma_info *VAR_8, int VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11;

 FUNC_1(&VAR_8->lock, VAR_10);
 FUNC_0(VAR_8, 0);

 VAR_11 = (VAR_4 |
        VAR_2 |
        VAR_1 |
        VAR_3);

 if (VAR_9)
  VAR_11 |= VAR_6;
 if (VAR_8->flags & VAR_7)
  VAR_11 |= VAR_5;

 FUNC_3(VAR_11, VAR_8->regs + VAR_0);

 FUNC_2(&VAR_8->lock, VAR_10);
}
