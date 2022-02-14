
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int kn; int rdtgroup_list; int flags; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kernfs_node*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kernfs_node *VAR_1,
    struct rdtgroup *VAR_2)
{
 VAR_2->flags = VAR_0;
 FUNC_2(&VAR_2->rdtgroup_list);





 FUNC_0(VAR_1);
 FUNC_1(VAR_2->kn);
 return 0;
}
