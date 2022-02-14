
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btree_keys {size_t page_order; unsigned int nsets; TYPE_2__* set; } ;
struct btree_iter {int dummy; } ;
struct bset_sort_state {int dummy; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {scalar_t__ keys; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btree_keys*,struct btree_iter*,int *,TYPE_2__*) ;
 int FUNC_2 (struct btree_keys*,struct btree_iter*,unsigned int,size_t,int,struct bset_sort_state*) ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (struct btree_keys*) ;
 size_t FUNC_5 (int ) ;

void FUNC_6(struct btree_keys *VAR_0, unsigned int VAR_1,
       struct bset_sort_state *VAR_2)
{
 size_t VAR_3 = VAR_0->page_order, VAR_4 = 0;
 struct btree_iter VAR_5;
 int VAR_6 = FUNC_4(VAR_0);

 FUNC_1(VAR_0, &VAR_5, ((void*)0), &VAR_0->set[VAR_1]);

 if (VAR_1) {
  unsigned int VAR_7;

  for (VAR_7 = VAR_1; VAR_7 <= VAR_0->nsets; VAR_7++)
   VAR_4 += VAR_0->set[VAR_7].data->keys;

  VAR_3 = FUNC_5(FUNC_3(VAR_0->set->data, VAR_4));
 }

 FUNC_2(VAR_0, &VAR_5, VAR_1, VAR_3, 0, VAR_2);

 FUNC_0(VAR_6 >= 0 && FUNC_4(VAR_0) != VAR_6);
}
