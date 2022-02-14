
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {TYPE_1__* ops; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {int (* key_invalid ) (struct btree_keys*,struct bkey const*) ;} ;


 int FUNC_0 (struct btree_keys*,struct bkey const*) ;

__attribute__((used)) static inline bool FUNC_1(struct btree_keys *VAR_0, const struct bkey *VAR_1)
{
 return VAR_0->ops->key_invalid(VAR_0, VAR_1);
}
