
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btree_keys {int nsets; TYPE_2__* set; } ;
struct bset_sort_state {unsigned int crit_factor; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {unsigned int keys; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct btree_keys*) ;
 int FUNC_1 (struct btree_keys*,struct bset_sort_state*) ;
 int FUNC_2 (struct btree_keys*,int,struct bset_sort_state*) ;

void FUNC_3(struct btree_keys *VAR_2, struct bset_sort_state *VAR_3)
{
 unsigned int VAR_4 = VAR_1;
 int VAR_5;


 if (!VAR_2->nsets)
  goto out;

 for (VAR_5 = VAR_2->nsets - 1; VAR_5 >= 0; --VAR_5) {
  VAR_4 *= VAR_3->crit_factor;

  if (VAR_2->set[VAR_5].data->keys < VAR_4) {
   FUNC_2(VAR_2, VAR_5, VAR_3);
   return;
  }
 }


 if (VAR_2->nsets + 1 == VAR_0) {
  FUNC_1(VAR_2, VAR_3);
  return;
 }

out:
 FUNC_0(VAR_2);
}
