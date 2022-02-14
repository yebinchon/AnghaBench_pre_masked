
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {int dummy; } ;
struct bset_tree {TYPE_1__* data; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {struct bkey* start; } ;


 struct bkey* FUNC_0 (struct btree_keys*,struct bset_tree*,struct bkey const*) ;

__attribute__((used)) static inline struct bkey *FUNC_1(struct btree_keys *VAR_0,
        struct bset_tree *VAR_1,
        const struct bkey *VAR_2)
{
 return VAR_2 ? FUNC_0(VAR_0, VAR_1, VAR_2) : VAR_1->data->start;
}
