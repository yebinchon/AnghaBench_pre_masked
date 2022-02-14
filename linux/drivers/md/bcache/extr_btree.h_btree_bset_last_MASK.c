
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree {int keys; } ;
struct bset {int dummy; } ;
struct TYPE_2__ {struct bset* data; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static inline struct bset *FUNC_1(struct btree *VAR_0)
{
 return FUNC_0(&VAR_0->keys)->data;
}
