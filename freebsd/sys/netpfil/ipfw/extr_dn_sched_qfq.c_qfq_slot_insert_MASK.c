
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct qfq_group {unsigned int S; unsigned int slot_shift; unsigned int front; int full_slots; struct qfq_class** slots; } ;
struct qfq_class {struct qfq_class* next; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct qfq_group *VAR_1, struct qfq_class *VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4 = (VAR_3 - VAR_1->S) >> VAR_1->slot_shift;
 unsigned int VAR_5 = (VAR_1->front + VAR_4) % VAR_0;

 VAR_2->next = VAR_1->slots[VAR_5];
 VAR_1->slots[VAR_5] = VAR_2;
 FUNC_0(VAR_4, &VAR_1->full_slots);
}
