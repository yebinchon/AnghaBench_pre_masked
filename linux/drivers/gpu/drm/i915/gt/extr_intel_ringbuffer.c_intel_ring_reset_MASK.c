
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct intel_ring {void* emit; void* head; void* tail; } ;


 int FUNC_0 (struct intel_ring*) ;
 void* FUNC_1 (struct intel_ring*,void*) ;

void FUNC_2(struct intel_ring *VAR_0, u32 VAR_1)
{
 VAR_1 = FUNC_1(VAR_0, VAR_1);
 VAR_0->tail = VAR_1;
 VAR_0->head = VAR_1;
 VAR_0->emit = VAR_1;
 FUNC_0(VAR_0);
}
