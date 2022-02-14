
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct btree_keys {unsigned int nsets; struct bset_tree* set; } ;
struct bset_tree {int size; TYPE_2__* tree; TYPE_1__* data; } ;
struct bset_stats {size_t bytes_written; size_t bytes_unwritten; int sets_unwritten; int failed; int floats; int sets_written; } ;
struct TYPE_4__ {int exponent; } ;
struct TYPE_3__ {int keys; } ;


 scalar_t__ FUNC_0 (struct btree_keys*,struct bset_tree*) ;

void FUNC_1(struct btree_keys *VAR_0, struct bset_stats *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 <= VAR_0->nsets; VAR_2++) {
  struct bset_tree *VAR_3 = &VAR_0->set[VAR_2];
  size_t VAR_4 = VAR_3->data->keys * sizeof(uint64_t);
  size_t VAR_5;

  if (FUNC_0(VAR_0, VAR_3)) {
   VAR_1->sets_written++;
   VAR_1->bytes_written += VAR_4;

   VAR_1->floats += VAR_3->size - 1;

   for (VAR_5 = 1; VAR_5 < VAR_3->size; VAR_5++)
    if (VAR_3->tree[VAR_5].exponent == 127)
     VAR_1->failed++;
  } else {
   VAR_1->sets_unwritten++;
   VAR_1->bytes_unwritten += VAR_4;
  }
 }
}
