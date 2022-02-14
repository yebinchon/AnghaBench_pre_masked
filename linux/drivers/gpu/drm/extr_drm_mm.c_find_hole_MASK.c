
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rb_node {int dummy; } ;
struct TYPE_4__ {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct drm_mm_node {scalar_t__ hole_size; TYPE_2__ rb_hole_addr; } ;
struct TYPE_3__ {struct rb_node* rb_node; } ;
struct drm_mm {TYPE_1__ holes_addr; } ;


 scalar_t__ FUNC_0 (struct drm_mm_node*) ;
 struct drm_mm_node* FUNC_1 (struct rb_node*) ;

__attribute__((used)) static struct drm_mm_node *FUNC_2(struct drm_mm *VAR_0, u64 VAR_1)
{
 struct rb_node *VAR_2 = VAR_0->holes_addr.rb_node;
 struct drm_mm_node *VAR_3 = ((void*)0);

 while (VAR_2) {
  u64 VAR_4;

  VAR_3 = FUNC_1(VAR_2);
  VAR_4 = FUNC_0(VAR_3);

  if (VAR_1 < VAR_4)
   VAR_2 = VAR_3->rb_hole_addr.rb_left;
  else if (VAR_1 > VAR_4 + VAR_3->hole_size)
   VAR_2 = VAR_3->rb_hole_addr.rb_right;
  else
   break;
 }

 return VAR_3;
}
