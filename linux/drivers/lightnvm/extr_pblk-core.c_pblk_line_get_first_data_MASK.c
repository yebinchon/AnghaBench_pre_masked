
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_line_mgmt {int free_lock; TYPE_1__* data_next; int d_seq_nr; struct pblk_line* data_line; } ;
struct pblk_line {void* type; scalar_t__ seq_nr; } ;
struct pblk {int rl; int lm; struct pblk_line_mgmt l_mg; } ;
struct TYPE_2__ {void* type; scalar_t__ seq_nr; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct pblk*,struct pblk_line*) ;
 scalar_t__ FUNC_1 (struct pblk*,struct pblk_line*) ;
 void* FUNC_2 (struct pblk*) ;
 int FUNC_3 (struct pblk*,struct pblk_line*,int) ;
 int FUNC_4 (struct pblk*,struct pblk_line*,int *) ;
 struct pblk_line* FUNC_5 (struct pblk*,struct pblk_line*) ;
 int FUNC_6 (struct pblk_line*,struct pblk_line_mgmt*,int *) ;
 int FUNC_7 (int *,struct pblk_line*,int) ;
 int FUNC_8 (struct pblk*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct pblk_line *FUNC_11(struct pblk *VAR_1)
{
 struct pblk_line_mgmt *VAR_2 = &VAR_1->l_mg;
 struct pblk_line *VAR_3;

 FUNC_9(&VAR_2->free_lock);
 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3) {
  FUNC_10(&VAR_2->free_lock);
  return ((void*)0);
 }

 VAR_3->seq_nr = VAR_2->d_seq_nr++;
 VAR_3->type = VAR_0;
 VAR_2->data_line = VAR_3;

 FUNC_6(VAR_3, VAR_2, &VAR_1->lm);


 VAR_2->data_next = FUNC_2(VAR_1);
 if (!VAR_2->data_next) {




  FUNC_8(VAR_1);

  VAR_2->data_next = ((void*)0);
 } else {
  VAR_2->data_next->seq_nr = VAR_2->d_seq_nr++;
  VAR_2->data_next->type = VAR_0;
 }
 FUNC_10(&VAR_2->free_lock);

 if (FUNC_0(VAR_1, VAR_3))
  return ((void*)0);

 if (FUNC_1(VAR_1, VAR_3)) {
  VAR_3 = FUNC_5(VAR_1, VAR_3);
  if (!VAR_3)
   return ((void*)0);
 }

retry_setup:
 if (!FUNC_4(VAR_1, VAR_3, ((void*)0))) {
  VAR_3 = FUNC_5(VAR_1, VAR_3);
  if (!VAR_3)
   return ((void*)0);

  goto retry_setup;
 }

 if (!FUNC_3(VAR_1, VAR_3, 1)) {
  VAR_3 = FUNC_5(VAR_1, VAR_3);
  if (!VAR_3)
   return ((void*)0);

  goto retry_setup;
 }

 FUNC_7(&VAR_1->rl, VAR_3, 1);

 return VAR_3;
}
