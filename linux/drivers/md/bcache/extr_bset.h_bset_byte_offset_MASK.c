
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {TYPE_1__* set; } ;
struct bset {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct btree_keys *VAR_0,
         struct bset *VAR_1)
{
 return ((size_t) VAR_1) - ((size_t) VAR_0->set->data);
}
