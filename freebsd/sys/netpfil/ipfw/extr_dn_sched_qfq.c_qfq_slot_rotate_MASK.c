
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct qfq_sched {int dummy; } ;
struct qfq_group {unsigned int S; unsigned int slot_shift; unsigned int full_slots; unsigned int front; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct qfq_sched *VAR_1, struct qfq_group *VAR_2, uint64_t VAR_3)
{
 unsigned int VAR_4 = (VAR_2->S - VAR_3) >> VAR_2->slot_shift;

 (void)VAR_1;
 VAR_2->full_slots <<= VAR_4;
 VAR_2->front = (VAR_2->front - VAR_4) % VAR_0;
}
