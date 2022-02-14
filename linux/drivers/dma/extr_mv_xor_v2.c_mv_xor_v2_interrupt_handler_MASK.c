
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mv_xor_v2_device {int irq_tasklet; scalar_t__ dma_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct mv_xor_v2_device *VAR_7 = VAR_6;
 unsigned int VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7->dma_base + VAR_2);

 VAR_8 = ((VAR_9 >> VAR_4) &
    VAR_3);


 if (!VAR_8)
  return VAR_1;


 FUNC_1(&VAR_7->irq_tasklet);

 return VAR_0;
}
