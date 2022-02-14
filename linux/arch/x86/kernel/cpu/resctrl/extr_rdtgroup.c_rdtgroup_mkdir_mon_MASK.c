
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_2__ {int crdtgrp_list; struct rdtgroup* parent; } ;
struct rdtgroup {TYPE_1__ mon; int closid; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct kernfs_node*,struct kernfs_node*,char const*,int ,int ,struct rdtgroup**) ;
 int FUNC_2 (struct kernfs_node*) ;

__attribute__((used)) static int FUNC_3(struct kernfs_node *VAR_1,
         struct kernfs_node *VAR_2,
         const char *VAR_3,
         umode_t VAR_4)
{
 struct rdtgroup *VAR_5, *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0,
    &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_5->mon.parent;
 VAR_5->closid = VAR_6->closid;





 FUNC_0(&VAR_5->mon.crdtgrp_list, &VAR_6->mon.crdtgrp_list);

 FUNC_2(VAR_2);
 return VAR_7;
}
