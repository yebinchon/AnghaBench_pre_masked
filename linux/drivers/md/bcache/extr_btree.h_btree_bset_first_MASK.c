
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* set; } ;
struct btree {TYPE_2__ keys; } ;
struct bset {int dummy; } ;
struct TYPE_3__ {struct bset* data; } ;



__attribute__((used)) static inline struct bset *FUNC_0(struct btree *VAR_0)
{
 return VAR_0->keys.set->data;
}
