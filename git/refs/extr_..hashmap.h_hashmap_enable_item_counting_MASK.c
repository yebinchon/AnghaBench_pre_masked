
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_iter {int dummy; } ;
struct hashmap {int do_count_items; unsigned int private_size; } ;


 int FUNC_0 (struct hashmap*,struct hashmap_iter*) ;
 scalar_t__ FUNC_1 (struct hashmap_iter*) ;

__attribute__((used)) static inline void FUNC_2(struct hashmap *VAR_0)
{
 unsigned int VAR_1 = 0;
 struct hashmap_iter VAR_2;

 if (VAR_0->do_count_items)
  return;

 FUNC_0(VAR_0, &VAR_2);
 while (FUNC_1(&VAR_2))
  VAR_1++;

 VAR_0->do_count_items = 1;
 VAR_0->private_size = VAR_1;
}
