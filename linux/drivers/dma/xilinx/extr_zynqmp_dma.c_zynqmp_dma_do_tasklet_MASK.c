
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct zynqmp_dma_chan {int err; int lock; scalar_t__ idle; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct zynqmp_dma_chan*) ;
 int FUNC_4 (struct zynqmp_dma_chan*) ;
 int FUNC_5 (struct zynqmp_dma_chan*) ;
 int FUNC_6 (struct zynqmp_dma_chan*) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct zynqmp_dma_chan *VAR_2 = (struct zynqmp_dma_chan *)VAR_1;
 u32 VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);

 if (VAR_2->err) {
  FUNC_5(VAR_2);
  VAR_2->err = 0;
  goto unlock;
 }

 VAR_3 = FUNC_0(VAR_2->regs + VAR_0);

 while (VAR_3) {
  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
  VAR_3--;
 }

 if (VAR_2->idle)
  FUNC_6(VAR_2);

unlock:
 FUNC_2(&VAR_2->lock, VAR_4);
}
