
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qfq_group {int full_slots; int front; struct qfq_class** slots; int index; } ;
struct qfq_class {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline struct qfq_class *
FUNC_2(struct qfq_group *VAR_1)
{
 int VAR_2;

 FUNC_0("grp %d full %x", VAR_1->index, VAR_1->full_slots);
 if (!VAR_1->full_slots)
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_1->full_slots) - 1;
 if (VAR_2 > 0) {
  VAR_1->front = (VAR_1->front + VAR_2) % VAR_0;
  VAR_1->full_slots >>= VAR_2;
 }

 return VAR_1->slots[VAR_1->front];
}
