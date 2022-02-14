
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_group {size_t front; int full_slots; struct qfq_class** slots; } ;
struct qfq_class {struct qfq_class* next; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct qfq_group *VAR_0)
{
 struct qfq_class **VAR_1 = &VAR_0->slots[VAR_0->front];

 *VAR_1 = (*VAR_1)->next;
 if (!*VAR_1)
  FUNC_0(0, &VAR_0->full_slots);
}
