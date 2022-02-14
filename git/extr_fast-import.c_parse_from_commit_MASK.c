
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* versions; } ;
struct branch {TYPE_2__ branch_tree; int oid; } ;
struct TYPE_6__ {int hexsz; } ;
struct TYPE_4__ {int oid; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_5(struct branch *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 if (!VAR_2 || VAR_3 < VAR_0->hexsz + 6)
  FUNC_0("Not a valid commit: %s", FUNC_3(&VAR_1->oid));
 if (FUNC_2("tree ", VAR_2, 5)
  || FUNC_1(VAR_2 + 5, &VAR_1->branch_tree.versions[1].oid))
  FUNC_0("The commit %s is corrupt", FUNC_3(&VAR_1->oid));
 FUNC_4(&VAR_1->branch_tree.versions[0].oid,
        &VAR_1->branch_tree.versions[1].oid);
}
