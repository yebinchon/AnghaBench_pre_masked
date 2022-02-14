
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* ptr; } ;
struct btree {TYPE_2__* c; int list; int hash; TYPE_1__ key; } ;
struct TYPE_4__ {int btree_cache_freeable; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct btree*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct btree *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));

 VAR_0->key.ptr[0] = 0;
 FUNC_2(&VAR_0->hash);
 FUNC_3(&VAR_0->list, &VAR_0->c->btree_cache_freeable);
}
