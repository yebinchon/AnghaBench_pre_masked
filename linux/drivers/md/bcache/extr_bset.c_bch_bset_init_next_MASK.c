
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct btree_keys {size_t nsets; TYPE_1__* set; } ;
struct bset {scalar_t__ keys; scalar_t__ version; int magic; int seq; } ;
struct TYPE_2__ {struct bset* data; } ;


 int FUNC_0 (struct btree_keys*) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct btree_keys *VAR_0, struct bset *VAR_1, uint64_t VAR_2)
{
 if (VAR_1 != VAR_0->set->data) {
  VAR_0->set[++VAR_0->nsets].data = VAR_1;
  VAR_1->seq = VAR_0->set->data->seq;
 } else
  FUNC_1(&VAR_1->seq, sizeof(uint64_t));

 VAR_1->magic = VAR_2;
 VAR_1->version = 0;
 VAR_1->keys = 0;

 FUNC_0(VAR_0);
}
