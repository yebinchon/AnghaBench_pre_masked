
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {struct rb_node* rb_node; } ;
struct rb_root_cached {TYPE_1__ rb_root; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct drm_mm_node {scalar_t__ hole_size; int rb_hole_size; } ;


 int FUNC_0 (int *,struct rb_root_cached*,int) ;
 int FUNC_1 (int *,struct rb_node*,struct rb_node**) ;
 scalar_t__ FUNC_2 (struct rb_node*) ;

__attribute__((used)) static void FUNC_3(struct rb_root_cached *VAR_0,
        struct drm_mm_node *VAR_1)
{
 struct rb_node **VAR_2 = &VAR_0->rb_root.rb_node, *VAR_3 = ((void*)0);
 u64 VAR_4 = VAR_1->hole_size;
 bool VAR_5 = 1;

 while (*VAR_2) {
  VAR_3 = *VAR_2;
  if (VAR_4 > FUNC_2(VAR_3)) {
   VAR_2 = &VAR_3->rb_left;
  } else {
   VAR_2 = &VAR_3->rb_right;
   VAR_5 = 0;
  }
 }

 FUNC_1(&VAR_1->rb_hole_size, VAR_3, VAR_2);
 FUNC_0(&VAR_1->rb_hole_size, VAR_0, VAR_5);
}
