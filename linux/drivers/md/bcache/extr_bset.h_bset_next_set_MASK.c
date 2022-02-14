
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btree_keys {int dummy; } ;
typedef void bset ;
struct TYPE_2__ {void* data; } ;


 TYPE_1__* FUNC_0 (struct btree_keys*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static inline struct bset *FUNC_3(struct btree_keys *VAR_0,
      unsigned int VAR_1)
{
 struct bset *VAR_2 = FUNC_0(VAR_0)->data;

 return ((void *) VAR_2) + FUNC_1(FUNC_2(VAR_2), VAR_1);
}
