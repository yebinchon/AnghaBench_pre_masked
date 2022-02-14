
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {TYPE_1__* ops; } ;
struct bkey {int dummy; } ;
struct TYPE_2__ {void (* key_to_text ) (char*,size_t,struct bkey const*) ;} ;


 void FUNC_0 (char*,size_t,struct bkey const*) ;

__attribute__((used)) static inline void FUNC_1(struct btree_keys *VAR_0, char *VAR_1,
        size_t VAR_2, const struct bkey *VAR_3)
{
 return VAR_0->ops->key_to_text(VAR_1, VAR_2, VAR_3);
}
