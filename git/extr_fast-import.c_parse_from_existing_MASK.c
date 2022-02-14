
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* versions; } ;
struct branch {int oid; TYPE_1__ branch_tree; } ;
struct TYPE_4__ {int oid; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct branch*,char*,unsigned long) ;
 char* FUNC_4 (int ,int *,int ,unsigned long*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct branch *VAR_2)
{
 if (FUNC_1(&VAR_2->oid)) {
  FUNC_2(&VAR_2->branch_tree.versions[0].oid);
  FUNC_2(&VAR_2->branch_tree.versions[1].oid);
 } else {
  unsigned long VAR_3;
  char *VAR_4;

  VAR_4 = FUNC_4(VAR_1,
       &VAR_2->oid, VAR_0, &VAR_3,
       &VAR_2->oid);
  FUNC_3(VAR_2, VAR_4, VAR_3);
  FUNC_0(VAR_4);
 }
}
