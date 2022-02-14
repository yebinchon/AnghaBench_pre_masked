
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ebus_dma_info {int lock; scalar_t__ regs; } ;
typedef size_t dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (size_t,scalar_t__) ;

int FUNC_4(struct ebus_dma_info *VAR_7, dma_addr_t VAR_8, size_t VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (VAR_9 >= (1 << 24))
  return -VAR_6;

 FUNC_1(&VAR_7->lock, VAR_10);
 VAR_11 = FUNC_0(VAR_7->regs + VAR_2);
 VAR_12 = -VAR_6;
 if (!(VAR_11 & VAR_3))
  goto out;
 VAR_12 = -VAR_5;
 if (VAR_11 & VAR_4)
  goto out;

 FUNC_3(VAR_9, VAR_7->regs + VAR_1);
 FUNC_3(VAR_8, VAR_7->regs + VAR_0);
 VAR_12 = 0;

out:
 FUNC_2(&VAR_7->lock, VAR_10);

 return VAR_12;
}
