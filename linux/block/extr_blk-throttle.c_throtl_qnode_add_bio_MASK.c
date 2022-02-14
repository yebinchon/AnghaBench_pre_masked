
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_qnode {int tg; int node; int bios; } ;
struct list_head {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct list_head*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_0, struct throtl_qnode *VAR_1,
     struct list_head *VAR_2)
{
 FUNC_0(&VAR_1->bios, VAR_0);
 if (FUNC_3(&VAR_1->node)) {
  FUNC_2(&VAR_1->node, VAR_2);
  FUNC_1(FUNC_4(VAR_1->tg));
 }
}
