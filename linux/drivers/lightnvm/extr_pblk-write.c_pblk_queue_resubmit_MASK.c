
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_c_ctx {int nr_valid; int list; int nr_padded; int sentry; int * lun_bitmap; } ;
struct pblk {int recov_writes; int resubmit_lock; int resubmit_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct pblk_c_ctx* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pblk *VAR_1, struct pblk_c_ctx *VAR_2)
{
 struct pblk_c_ctx *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct pblk_c_ctx), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->lun_bitmap = ((void*)0);
 VAR_3->sentry = VAR_2->sentry;
 VAR_3->nr_valid = VAR_2->nr_valid;
 VAR_3->nr_padded = VAR_2->nr_padded;

 FUNC_3(&VAR_1->resubmit_lock);
 FUNC_2(&VAR_3->list, &VAR_1->resubmit_list);
 FUNC_4(&VAR_1->resubmit_lock);




}
