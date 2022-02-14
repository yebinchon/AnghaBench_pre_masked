
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int flags; scalar_t__ mode; int kn; int waitcount; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct rdtgroup* FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct rdtgroup*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (struct rdtgroup*) ;

void FUNC_7(struct kernfs_node *VAR_4)
{
 struct rdtgroup *VAR_5 = FUNC_2(VAR_4);

 if (!VAR_5)
  return;

 FUNC_5(&VAR_3);

 if (FUNC_0(&VAR_5->waitcount) &&
     (VAR_5->flags & VAR_0)) {
  if (VAR_5->mode == VAR_2 ||
      VAR_5->mode == VAR_1)
   FUNC_6(VAR_5);
  FUNC_3(VAR_4);
  FUNC_1(VAR_5->kn);
  FUNC_4(VAR_5);
 } else {
  FUNC_3(VAR_4);
 }
}
