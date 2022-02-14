
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct node {TYPE_1__* n_parent; } ;
struct TYPE_2__ {int n_children; } ;


 int FUNC_0 (int *,struct node*,struct node*,int ) ;
 int FUNC_1 (int *,struct node*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct node *VAR_1, struct node *VAR_2)
{

 FUNC_1(&VAR_1->n_parent->n_children, VAR_1, VAR_0);
 VAR_1->n_parent = VAR_2->n_parent;
 FUNC_0(&VAR_2->n_parent->n_children, VAR_2, VAR_1, VAR_0);
}
