
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct overflow_queue {size_t tail; size_t size; int n; struct netmap_slot* slots; int name; } ;
struct netmap_slot {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct overflow_queue*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void
FUNC_4(struct overflow_queue *VAR_0, const struct netmap_slot *VAR_1)
{
 if (FUNC_3(FUNC_2(VAR_0))) {
  FUNC_0("%s: queue full!", VAR_0->name);
  FUNC_1();
 }
 VAR_0->slots[VAR_0->tail] = *VAR_1;
 VAR_0->n++;
 VAR_0->tail++;
 if (VAR_0->tail >= VAR_0->size)
  VAR_0->tail = 0;
}
