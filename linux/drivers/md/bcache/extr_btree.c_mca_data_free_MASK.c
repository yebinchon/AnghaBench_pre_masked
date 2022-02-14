
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
struct btree {TYPE_2__* c; int list; int keys; TYPE_1__ io_mutex; } ;
struct TYPE_4__ {int btree_cache_freed; int btree_cache_used; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct btree *VAR_0)
{
 FUNC_0(VAR_0->io_mutex.count != 1);

 FUNC_1(&VAR_0->keys);

 VAR_0->c->btree_cache_used--;
 FUNC_2(&VAR_0->list, &VAR_0->c->btree_cache_freed);
}
