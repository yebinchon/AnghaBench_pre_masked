
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {TYPE_1__* set; } ;
struct bset_tree {unsigned int size; unsigned int* prev; unsigned int tree; int data; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {unsigned int tree; } ;


 struct bkey* FUNC_0 (struct bkey*) ;
 unsigned int FUNC_1 (struct bset_tree*,struct bkey*) ;
 void* FUNC_2 (struct bset_tree*,unsigned int,struct bkey*) ;
 unsigned int FUNC_3 (struct bkey*) ;
 struct bkey* FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct btree_keys*) ;
 struct bkey* FUNC_6 (struct bset_tree*,unsigned int,int ) ;
 struct bkey* FUNC_7 (struct bset_tree*,int) ;

__attribute__((used)) static void FUNC_8(struct btree_keys *VAR_0,
          struct bset_tree *VAR_1,
          struct bkey *VAR_2)
{
 unsigned int VAR_3 = FUNC_3(VAR_2);
 unsigned int VAR_4 = FUNC_1(VAR_1, VAR_2);


 if (!VAR_1->size)
  return;






 while (VAR_4 < VAR_1->size &&
        FUNC_7(VAR_1, VAR_4) <= VAR_2)
  VAR_4++;





 for (; VAR_4 < VAR_1->size; VAR_4++) {
  VAR_1->prev[VAR_4] += VAR_3;

  if (VAR_1->prev[VAR_4] > 7) {
   VAR_2 = FUNC_7(VAR_1, VAR_4 - 1);

   while (VAR_2 < FUNC_6(VAR_1, VAR_4, 0))
    VAR_2 = FUNC_0(VAR_2);

   VAR_1->prev[VAR_4] = FUNC_2(VAR_1, VAR_4, VAR_2);
  }
 }

 if (VAR_1->size == VAR_0->set->tree + FUNC_5(VAR_0) - VAR_1->tree)
  return;



 for (VAR_2 = FUNC_7(VAR_1, VAR_1->size - 1);
      VAR_2 != FUNC_4(VAR_1->data);
      VAR_2 = FUNC_0(VAR_2))
  if (VAR_1->size == FUNC_1(VAR_1, VAR_2)) {
   VAR_1->prev[VAR_1->size] =
    FUNC_2(VAR_1, VAR_1->size, VAR_2);
   VAR_1->size++;
  }
}
