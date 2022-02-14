
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refill_engine {void* refill_va; } ;
struct dmm_txn {long current_pa; void* current_va; struct refill_engine* engine_handle; } ;
typedef long dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 long FUNC_1 (long,int) ;

__attribute__((used)) static void *FUNC_2(struct dmm_txn *VAR_1, size_t VAR_2, dma_addr_t *VAR_3)
{
 void *VAR_4;
 struct refill_engine *VAR_5 = VAR_1->engine_handle;


 VAR_1->current_pa = FUNC_1(VAR_1->current_pa, 16);
 VAR_1->current_va = (void *)FUNC_1((long)VAR_1->current_va, 16);

 VAR_4 = VAR_1->current_va;
 *VAR_3 = VAR_1->current_pa;

 VAR_1->current_pa += VAR_2;
 VAR_1->current_va += VAR_2;

 FUNC_0((VAR_1->current_va - VAR_5->refill_va) > VAR_0);

 return VAR_4;
}
