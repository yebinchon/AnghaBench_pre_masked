
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int free_lock; } ;
struct pblk {scalar_t__ state; int bb_wq; struct pblk_line_mgmt l_mg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pblk*) ;
 int FUNC_2 (struct pblk*,char*,int) ;
 int FUNC_3 (struct pblk*) ;
 int FUNC_4 (struct pblk*) ;
 int FUNC_5 (struct pblk*) ;
 int FUNC_6 (struct pblk*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__) ;

void FUNC_10(struct pblk *VAR_2)
{
 struct pblk_line_mgmt *VAR_3 = &VAR_2->l_mg;
 int VAR_4;

 FUNC_7(&VAR_3->free_lock);
 if (VAR_2->state == VAR_0 ||
     VAR_2->state == VAR_1) {
  FUNC_8(&VAR_3->free_lock);
  return;
 }
 VAR_2->state = VAR_0;
 FUNC_9(FUNC_1(VAR_2), VAR_2->state);
 FUNC_8(&VAR_3->free_lock);

 FUNC_3(VAR_2);
 FUNC_6(VAR_2);

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_2, "could not close data on teardown(%d)\n", VAR_4);
  return;
 }

 FUNC_0(VAR_2->bb_wq);
 FUNC_4(VAR_2);
}
