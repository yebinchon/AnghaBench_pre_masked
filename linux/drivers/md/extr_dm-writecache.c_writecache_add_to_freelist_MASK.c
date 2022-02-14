
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct wc_entry {int lru; struct rb_node rb_node; } ;
struct TYPE_2__ {struct rb_node* rb_node; } ;
struct dm_writecache {int freelist_size; int freelist; TYPE_1__ freetree; struct wc_entry* current_free; } ;


 scalar_t__ FUNC_0 (struct dm_writecache*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct rb_node*,TYPE_1__*) ;
 int FUNC_3 (struct rb_node*,struct rb_node*,struct rb_node**) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dm_writecache *VAR_0, struct wc_entry *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  struct rb_node **VAR_2 = &VAR_0->freetree.rb_node, *VAR_3 = ((void*)0);
  if (FUNC_4(!*VAR_2))
   VAR_0->current_free = VAR_1;
  while (*VAR_2) {
   VAR_3 = *VAR_2;
   if (&VAR_1->rb_node < *VAR_2)
    VAR_2 = &VAR_3->rb_left;
   else
    VAR_2 = &VAR_3->rb_right;
  }
  FUNC_3(&VAR_1->rb_node, VAR_3, VAR_2);
  FUNC_2(&VAR_1->rb_node, &VAR_0->freetree);
 } else {
  FUNC_1(&VAR_1->lru, &VAR_0->freelist);
 }
 VAR_0->freelist_size++;
}
