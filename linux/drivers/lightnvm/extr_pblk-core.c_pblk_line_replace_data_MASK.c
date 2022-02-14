
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int free_lock; struct pblk_line* data_next; int d_seq_nr; struct pblk_line* data_line; } ;
struct pblk_line {int type; scalar_t__ seq_nr; int left_eblks; int left_seblks; } ;
struct pblk {int rl; int lm; struct pblk_line_mgmt l_mg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pblk*,struct pblk_line*) ;
 scalar_t__ FUNC_3 (struct pblk*,struct pblk_line*) ;
 struct pblk_line* FUNC_4 (struct pblk*) ;
 int FUNC_5 (struct pblk*,struct pblk_line*,int) ;
 int FUNC_6 (struct pblk*,struct pblk_line*,struct pblk_line*) ;
 struct pblk_line* FUNC_7 (struct pblk*,struct pblk_line*) ;
 int FUNC_8 (struct pblk_line*,struct pblk_line_mgmt*,int *) ;
 int FUNC_9 (int *,struct pblk_line*,int) ;
 int FUNC_10 (struct pblk*,struct pblk_line*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

struct pblk_line *FUNC_13(struct pblk *VAR_1)
{
 struct pblk_line_mgmt *VAR_2 = &VAR_1->l_mg;
 struct pblk_line *VAR_3, *VAR_4 = ((void*)0);
 unsigned int VAR_5;

 VAR_4 = VAR_2->data_next;
 if (!VAR_4)
  goto out;

 FUNC_11(&VAR_2->free_lock);
 VAR_3 = VAR_2->data_line;
 VAR_2->data_line = VAR_4;

 FUNC_8(VAR_4, VAR_2, &VAR_1->lm);
 FUNC_12(&VAR_2->free_lock);

retry_erase:
 VAR_5 = FUNC_0(&VAR_4->left_seblks);
 if (VAR_5) {

  if (FUNC_0(&VAR_4->left_eblks)) {
   if (FUNC_3(VAR_1, VAR_4))
    goto out;
  } else {
   FUNC_1();
  }
  goto retry_erase;
 }

 if (FUNC_2(VAR_1, VAR_4))
  return ((void*)0);

retry_setup:
 if (!FUNC_6(VAR_1, VAR_4, VAR_3)) {
  VAR_4 = FUNC_7(VAR_1, VAR_4);
  if (!VAR_4)
   goto out;

  goto retry_setup;
 }

 if (!FUNC_5(VAR_1, VAR_4, 1)) {
  VAR_4 = FUNC_7(VAR_1, VAR_4);
  if (!VAR_4)
   goto out;

  goto retry_setup;
 }

 FUNC_9(&VAR_1->rl, VAR_4, 1);


 FUNC_11(&VAR_2->free_lock);
 VAR_2->data_next = FUNC_4(VAR_1);
 if (!VAR_2->data_next) {




  FUNC_10(VAR_1, VAR_4);
  VAR_2->data_next = ((void*)0);
 } else {
  VAR_2->data_next->seq_nr = VAR_2->d_seq_nr++;
  VAR_2->data_next->type = VAR_0;
 }
 FUNC_12(&VAR_2->free_lock);

out:
 return VAR_4;
}
