
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_qnode {struct throtl_grp* tg; int bios; int node; } ;
struct throtl_grp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct throtl_qnode *VAR_0, struct throtl_grp *VAR_1)
{
 FUNC_0(&VAR_0->node);
 FUNC_1(&VAR_0->bios);
 VAR_0->tg = VAR_1;
}
