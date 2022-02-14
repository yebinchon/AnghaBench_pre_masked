
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree_iterator_entry ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ base; int root; int entry_pool; } ;
typedef TYPE_2__ tree_iterator ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int FUNC_2(tree_iterator *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->entry_pool, sizeof(tree_iterator_entry));

 if ((VAR_2 = FUNC_1(VAR_1, VAR_1->root, ((void*)0))) < 0)
  return VAR_2;

 VAR_1->base.flags &= ~VAR_0;

 return 0;
}
