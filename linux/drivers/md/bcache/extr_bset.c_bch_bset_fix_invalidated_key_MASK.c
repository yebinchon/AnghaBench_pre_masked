
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {struct bset_tree* set; } ;
struct bkey {int dummy; } ;
struct bset_tree {unsigned int size; struct bkey end; TYPE_1__* data; } ;
struct TYPE_2__ {struct bkey* start; } ;


 int FUNC_0 () ;
 struct bkey* FUNC_1 (struct bkey*) ;
 unsigned int FUNC_2 (struct bset_tree*,struct bkey*) ;
 struct bkey* FUNC_3 (TYPE_1__*) ;
 struct bset_tree* FUNC_4 (struct btree_keys*) ;
 int FUNC_5 (struct btree_keys*,struct bset_tree*) ;
 unsigned int FUNC_6 (unsigned int,struct bset_tree*) ;
 int FUNC_7 (struct bset_tree*,unsigned int) ;
 struct bkey* FUNC_8 (struct bset_tree*,unsigned int) ;
 struct bkey* FUNC_9 (struct bset_tree*,unsigned int) ;

void FUNC_10(struct btree_keys *VAR_0, struct bkey *VAR_1)
{
 struct bset_tree *VAR_2;
 unsigned int VAR_3, VAR_4 = 1;

 for (VAR_2 = VAR_0->set; VAR_2 <= FUNC_4(VAR_0); VAR_2++)
  if (VAR_1 < FUNC_3(VAR_2->data))
   goto found_set;

 FUNC_0();
found_set:
 if (!VAR_2->size || !FUNC_5(VAR_0, VAR_2))
  return;

 VAR_3 = FUNC_2(VAR_2, VAR_1);

 if (VAR_1 == VAR_2->data->start)
  goto fix_left;

 if (FUNC_1(VAR_1) == FUNC_3(VAR_2->data)) {
  VAR_2->end = *VAR_1;
  goto fix_right;
 }

 VAR_4 = FUNC_6(VAR_3, VAR_2);

 if (VAR_4 &&
     VAR_4 < VAR_2->size &&
     VAR_1 == FUNC_8(VAR_2, VAR_4))
fix_left: do {
   FUNC_7(VAR_2, VAR_4);
   VAR_4 = VAR_4 * 2;
  } while (VAR_4 < VAR_2->size);

 VAR_4 = FUNC_6(VAR_3 + 1, VAR_2);

 if (VAR_4 &&
     VAR_4 < VAR_2->size &&
     VAR_1 == FUNC_9(VAR_2, VAR_4))
fix_right: do {
   FUNC_7(VAR_2, VAR_4);
   VAR_4 = VAR_4 * 2 + 1;
  } while (VAR_4 < VAR_2->size);
}
