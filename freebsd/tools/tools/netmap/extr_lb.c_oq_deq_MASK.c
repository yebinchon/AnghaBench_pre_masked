
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct overflow_queue {size_t head; size_t size; int n; int name; struct netmap_slot* slots; } ;
struct netmap_slot {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct overflow_queue*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline struct netmap_slot
FUNC_4(struct overflow_queue *VAR_0)
{
 struct netmap_slot VAR_1 = VAR_0->slots[VAR_0->head];
 if (FUNC_3(FUNC_2(VAR_0))) {
  FUNC_0("%s: queue empty!", VAR_0->name);
  FUNC_1();
 }
 VAR_0->n--;
 VAR_0->head++;
 if (VAR_0->head >= VAR_0->size)
  VAR_0->head = 0;
 return VAR_1;
}
