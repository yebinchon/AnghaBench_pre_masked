
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_keys_ops {int dummy; } ;
struct btree_keys {int* expensive_debug_checks; scalar_t__ last_set_unwritten; scalar_t__ nsets; struct btree_keys_ops const* ops; } ;



void FUNC_0(struct btree_keys *VAR_0, const struct btree_keys_ops *VAR_1,
    bool *VAR_2)
{
 VAR_0->ops = VAR_1;
 VAR_0->expensive_debug_checks = VAR_2;
 VAR_0->nsets = 0;
 VAR_0->last_set_unwritten = 0;
}
