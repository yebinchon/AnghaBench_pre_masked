
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int flags; int waitcount; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kernfs_node*) ;
 struct rdtgroup* FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

struct rdtgroup *FUNC_4(struct kernfs_node *VAR_2)
{
 struct rdtgroup *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->waitcount);
 FUNC_1(VAR_2);

 FUNC_3(&VAR_1);


 if (VAR_3->flags & VAR_0)
  return ((void*)0);

 return VAR_3;
}
