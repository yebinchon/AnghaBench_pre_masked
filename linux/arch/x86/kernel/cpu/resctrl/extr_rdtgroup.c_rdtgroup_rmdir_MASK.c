
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdtgroup {scalar_t__ type; scalar_t__ mode; } ;
struct kernfs_node {int name; struct kernfs_node* parent; } ;
typedef int cpumask_var_t ;
struct TYPE_2__ {struct kernfs_node* kn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kernfs_node*,int ) ;
 int FUNC_2 (struct kernfs_node*,struct rdtgroup*) ;
 TYPE_1__ VAR_7 ;
 struct rdtgroup* FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct kernfs_node*) ;
 int FUNC_5 (struct kernfs_node*,struct rdtgroup*,int ) ;
 int FUNC_6 (struct kernfs_node*,struct rdtgroup*,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct kernfs_node *VAR_8)
{
 struct kernfs_node *VAR_9 = VAR_8->parent;
 struct rdtgroup *VAR_10;
 cpumask_var_t VAR_11;
 int VAR_12 = 0;

 if (!FUNC_7(&VAR_11, VAR_2))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_8);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto out;
 }
 if (VAR_10->type == VAR_3 && VAR_9 == VAR_7.kn) {
  if (VAR_10->mode == VAR_6 ||
      VAR_10->mode == VAR_5) {
   VAR_12 = FUNC_2(VAR_8, VAR_10);
  } else {
   VAR_12 = FUNC_5(VAR_8, VAR_10, VAR_11);
  }
 } else if (VAR_10->type == VAR_4 &&
   FUNC_1(VAR_9, VAR_8->name)) {
  VAR_12 = FUNC_6(VAR_8, VAR_10, VAR_11);
 } else {
  VAR_12 = -VAR_1;
 }

out:
 FUNC_4(VAR_8);
 FUNC_0(VAR_11);
 return VAR_12;
}
