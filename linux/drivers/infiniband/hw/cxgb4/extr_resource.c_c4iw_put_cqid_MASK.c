
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c4iw_rdev {int dummy; } ;
struct c4iw_qid_list {int entry; int qid; } ;
struct c4iw_dev_ucontext {int lock; int cqids; } ;


 int VAR_0 ;
 struct c4iw_qid_list* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(struct c4iw_rdev *VAR_1, u32 VAR_2,
     struct c4iw_dev_ucontext *VAR_3)
{
 struct c4iw_qid_list *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;
 FUNC_4("qid 0x%x\n", VAR_2);
 VAR_4->qid = VAR_2;
 FUNC_2(&VAR_3->lock);
 FUNC_1(&VAR_4->entry, &VAR_3->cqids);
 FUNC_3(&VAR_3->lock);
}
