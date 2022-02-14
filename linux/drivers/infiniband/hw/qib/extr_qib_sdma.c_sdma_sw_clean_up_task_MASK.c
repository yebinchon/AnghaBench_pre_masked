
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int sdma_lock; scalar_t__ sdma_generation; scalar_t__* sdma_head_dma; scalar_t__ sdma_descq_head; scalar_t__ sdma_descq_tail; int sdma_descq_added; int sdma_descq_removed; } ;


 int FUNC_0 (struct qib_pportdata*,int ) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int VAR_0 ;
 int FUNC_2 (struct qib_pportdata*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct qib_pportdata *VAR_2 = (struct qib_pportdata *) VAR_1;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->sdma_lock, VAR_3);
 FUNC_2(VAR_2);

 FUNC_1(VAR_2);





 VAR_2->sdma_descq_removed = VAR_2->sdma_descq_added;






 VAR_2->sdma_descq_tail = 0;
 VAR_2->sdma_descq_head = 0;
 VAR_2->sdma_head_dma[0] = 0;
 VAR_2->sdma_generation = 0;

 FUNC_0(VAR_2, VAR_0);

 FUNC_4(&VAR_2->sdma_lock, VAR_3);
}
