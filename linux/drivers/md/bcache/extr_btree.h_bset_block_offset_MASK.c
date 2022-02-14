
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree {TYPE_1__* c; int keys; } ;
struct bset {int dummy; } ;
struct TYPE_2__ {unsigned int block_bits; } ;


 unsigned int FUNC_0 (int *,struct bset*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct btree *VAR_0, struct bset *VAR_1)
{
 return FUNC_0(&VAR_0->keys, VAR_1) >> VAR_0->c->block_bits;
}
