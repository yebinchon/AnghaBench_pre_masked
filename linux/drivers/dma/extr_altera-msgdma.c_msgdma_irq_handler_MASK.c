
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msgdma_device {int idle; scalar_t__ csr; int irq_tasklet; int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct msgdma_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct msgdma_device *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->csr + VAR_1);
 if ((VAR_7 & VAR_2) == 0) {

  FUNC_3(&VAR_6->lock);
  VAR_6->idle = 1;
  FUNC_2(VAR_6);
  FUNC_4(&VAR_6->lock);
 }

 FUNC_5(&VAR_6->irq_tasklet);


 FUNC_1(VAR_3, VAR_6->csr + VAR_1);

 return VAR_0;
}
