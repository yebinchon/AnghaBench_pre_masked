
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zpci_dev {int dma_table_lock; int dma_table; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (size_t) ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned long*,int *,int) ;
 unsigned long* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct zpci_dev *VAR_8, unsigned long VAR_9,
         dma_addr_t VAR_10, size_t VAR_11, int VAR_12)
{
 unsigned int VAR_13 = FUNC_0(VAR_11) >> VAR_3;
 u8 *VAR_14 = (u8 *) (VAR_9 & VAR_2);
 unsigned long VAR_15;
 unsigned long *VAR_16;
 int VAR_17, VAR_18 = 0;

 if (!VAR_13)
  return -VAR_0;

 FUNC_3(&VAR_8->dma_table_lock, VAR_15);
 if (!VAR_8->dma_table) {
  VAR_18 = -VAR_0;
  goto out_unlock;
 }

 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  VAR_16 = FUNC_2(VAR_8->dma_table, VAR_10);
  if (!VAR_16) {
   VAR_18 = -VAR_1;
   goto undo_cpu_trans;
  }
  FUNC_1(VAR_16, VAR_14, VAR_12);
  VAR_14 += VAR_4;
  VAR_10 += VAR_4;
 }

undo_cpu_trans:
 if (VAR_18 && ((VAR_12 & VAR_7) == VAR_6)) {
  VAR_12 = VAR_5;
  while (VAR_17-- > 0) {
   VAR_14 -= VAR_4;
   VAR_10 -= VAR_4;
   VAR_16 = FUNC_2(VAR_8->dma_table, VAR_10);
   if (!VAR_16)
    break;
   FUNC_1(VAR_16, VAR_14, VAR_12);
  }
 }
out_unlock:
 FUNC_4(&VAR_8->dma_table_lock, VAR_15);
 return VAR_18;
}
