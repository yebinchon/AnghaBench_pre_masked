
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int tail_lock; int head_lock; scalar_t__* head_dma; int desc_avail; scalar_t__ descq_head; scalar_t__ descq_tail; } ;


 int FUNC_0 (struct sdma_engine*,int ) ;
 int FUNC_1 (struct sdma_engine*) ;
 int VAR_0 ;
 int FUNC_2 (struct sdma_engine*) ;
 int FUNC_3 (struct sdma_engine*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_1)
{
 struct sdma_engine *VAR_2 = (struct sdma_engine *)VAR_1;
 unsigned long VAR_3;

 FUNC_4(&VAR_2->tail_lock, VAR_3);
 FUNC_6(&VAR_2->head_lock);
 FUNC_3(VAR_2, 0);

 FUNC_2(VAR_2);






 VAR_2->descq_tail = 0;
 VAR_2->descq_head = 0;
 VAR_2->desc_avail = FUNC_1(VAR_2);
 *VAR_2->head_dma = 0;

 FUNC_0(VAR_2, VAR_0);

 FUNC_7(&VAR_2->head_lock);
 FUNC_5(&VAR_2->tail_lock, VAR_3);
}
