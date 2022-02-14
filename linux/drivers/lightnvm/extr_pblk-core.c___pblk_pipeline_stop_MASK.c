
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int free_lock; int * data_next; int * data_line; } ;
struct pblk {int state; struct pblk_line_mgmt l_mg; } ;


 int VAR_0 ;
 int FUNC_0 (struct pblk*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct pblk *VAR_1)
{
 struct pblk_line_mgmt *VAR_2 = &VAR_1->l_mg;

 FUNC_1(&VAR_2->free_lock);
 VAR_1->state = VAR_0;
 FUNC_3(FUNC_0(VAR_1), VAR_1->state);
 VAR_2->data_line = ((void*)0);
 VAR_2->data_next = ((void*)0);
 FUNC_2(&VAR_2->free_lock);
}
