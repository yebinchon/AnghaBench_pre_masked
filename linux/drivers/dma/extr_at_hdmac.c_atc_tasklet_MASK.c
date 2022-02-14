
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at_dma_chan {int lock; int status; } ;


 int VAR_0 ;
 int FUNC_0 (struct at_dma_chan*) ;
 scalar_t__ FUNC_1 (struct at_dma_chan*) ;
 int FUNC_2 (struct at_dma_chan*) ;
 int FUNC_3 (struct at_dma_chan*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct at_dma_chan *VAR_2 = (struct at_dma_chan *)VAR_1;
 unsigned long VAR_3;

 FUNC_4(&VAR_2->lock, VAR_3);
 if (FUNC_6(VAR_0, &VAR_2->status))
  FUNC_3(VAR_2);
 else if (FUNC_1(VAR_2))
  FUNC_2(VAR_2);
 else
  FUNC_0(VAR_2);

 FUNC_5(&VAR_2->lock, VAR_3);
}
