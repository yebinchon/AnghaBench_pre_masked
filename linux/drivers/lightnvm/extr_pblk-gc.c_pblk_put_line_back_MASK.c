
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int gc_lock; } ;
struct pblk_line {scalar_t__ state; int list; int lock; int gc_group; int id; } ;
struct pblk {struct pblk_line_mgmt l_mg; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct pblk*) ;
 struct list_head* FUNC_3 (struct pblk*,struct pblk_line*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,scalar_t__) ;

void FUNC_7(struct pblk *VAR_3, struct pblk_line *VAR_4)
{
 struct pblk_line_mgmt *VAR_5 = &VAR_3->l_mg;
 struct list_head *VAR_6;

 FUNC_4(&VAR_5->gc_lock);
 FUNC_4(&VAR_4->lock);
 FUNC_0(VAR_4->state != VAR_2);
 VAR_4->state = VAR_1;
 FUNC_6(FUNC_2(VAR_3), VAR_4->id,
     VAR_4->state);






 VAR_4->gc_group = VAR_0;
 VAR_6 = FUNC_3(VAR_3, VAR_4);
 FUNC_5(&VAR_4->lock);
 FUNC_1(&VAR_4->list, VAR_6);
 FUNC_5(&VAR_5->gc_lock);
}
