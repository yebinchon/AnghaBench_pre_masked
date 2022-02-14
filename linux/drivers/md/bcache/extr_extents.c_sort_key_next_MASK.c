
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_iter_set {scalar_t__ k; scalar_t__ end; } ;
struct btree_iter {size_t used; struct btree_iter_set* data; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct btree_iter *VAR_0,
     struct btree_iter_set *VAR_1)
{
 VAR_1->k = FUNC_0(VAR_1->k);

 if (VAR_1->k == VAR_1->end)
  *VAR_1 = VAR_0->data[--VAR_0->used];
}
