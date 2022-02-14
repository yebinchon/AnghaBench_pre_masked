
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* versions; int tree; } ;
struct branch {scalar_t__ num_notes; TYPE_2__ branch_tree; } ;
struct TYPE_3__ {int oid; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct branch *VAR_0)
{
 FUNC_2(VAR_0->branch_tree.tree);
 FUNC_1(&VAR_0->branch_tree.versions[0].oid);
 FUNC_1(&VAR_0->branch_tree.versions[1].oid);
 FUNC_0(&VAR_0->branch_tree);
 VAR_0->num_notes = 0;
}
