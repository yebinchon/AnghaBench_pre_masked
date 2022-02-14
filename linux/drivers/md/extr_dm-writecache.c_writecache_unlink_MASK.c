
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wc_entry {int rb_node; int lru; } ;
struct dm_writecache {int tree; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_writecache *VAR_0, struct wc_entry *VAR_1)
{
 FUNC_0(&VAR_1->lru);
 FUNC_1(&VAR_1->rb_node, &VAR_0->tree);
}
