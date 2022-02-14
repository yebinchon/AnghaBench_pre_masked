
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int dummy; } ;
struct kernfs_node {struct rdtgroup* priv; struct kernfs_node* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kernfs_node*) ;
 struct kernfs_node* VAR_1 ;

__attribute__((used)) static struct rdtgroup *FUNC_1(struct kernfs_node *VAR_2)
{
 if (FUNC_0(VAR_2) == VAR_0) {






  if (VAR_2 == VAR_1 || VAR_2->parent == VAR_1)
   return ((void*)0);
  else
   return VAR_2->priv;
 } else {
  return VAR_2->parent->priv;
 }
}
