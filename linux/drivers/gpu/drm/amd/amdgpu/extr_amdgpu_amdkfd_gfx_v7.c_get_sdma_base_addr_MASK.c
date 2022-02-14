
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cik_sdma_rlc_registers {int sdma_engine_id; int sdma_queue_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct cik_sdma_rlc_registers *VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = VAR_2->sdma_engine_id * VAR_1 +
   VAR_2->sdma_queue_id * VAR_0;

 FUNC_0("sdma base address: 0x%x\n", VAR_3);

 return VAR_3;
}
