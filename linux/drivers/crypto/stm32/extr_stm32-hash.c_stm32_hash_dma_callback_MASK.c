
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_hash_dev {int flags; int dma_completion; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct stm32_hash_dev *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->dma_completion);

 VAR_2->flags |= VAR_0;
}
