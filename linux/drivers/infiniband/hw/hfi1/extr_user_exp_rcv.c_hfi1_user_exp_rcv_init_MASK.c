
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rb_node {int dummy; } ;
struct hfi1_filedata {int tid_limit; int subctxt; int tid_lock; int handler; int mm; int * entry_to_rb; void* invalid_tids; scalar_t__ invalid_tid_idx; int invalid_lock; } ;
struct hfi1_devdata {TYPE_1__* pport; } ;
struct hfi1_ctxtdata {int expected_count; int subctxt_cnt; int flags; struct hfi1_devdata* dd; } ;
struct TYPE_2__ {int hfi1_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int FUNC_2 (struct hfi1_filedata*,int ,int *,int ,int *) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

int FUNC_8(struct hfi1_filedata *VAR_4,
      struct hfi1_ctxtdata *VAR_5)
{
 struct hfi1_devdata *VAR_6 = VAR_5->dd;
 int VAR_7 = 0;

 FUNC_6(&VAR_4->tid_lock);
 FUNC_6(&VAR_4->invalid_lock);

 VAR_4->entry_to_rb = FUNC_3(VAR_5->expected_count,
      sizeof(struct rb_node *),
      VAR_1);
 if (!VAR_4->entry_to_rb)
  return -VAR_0;

 if (!FUNC_0(VAR_5->flags, VAR_2)) {
  VAR_4->invalid_tid_idx = 0;
  VAR_4->invalid_tids = FUNC_3(VAR_5->expected_count,
        sizeof(*VAR_4->invalid_tids),
        VAR_1);
  if (!VAR_4->invalid_tids) {
   FUNC_4(VAR_4->entry_to_rb);
   VAR_4->entry_to_rb = ((void*)0);
   return -VAR_0;
  }





  VAR_7 = FUNC_2(VAR_4, VAR_4->mm, &VAR_3,
        VAR_6->pport->hfi1_wq,
        &VAR_4->handler);
  if (VAR_7) {
   FUNC_1(VAR_6,
        "Failed MMU notifier registration %d\n",
        VAR_7);
   VAR_7 = 0;
  }
 }
 FUNC_5(&VAR_4->tid_lock);
 if (VAR_5->subctxt_cnt && VAR_4->handler) {
  u16 VAR_8;

  VAR_4->tid_limit = VAR_5->expected_count / VAR_5->subctxt_cnt;
  VAR_8 = VAR_5->expected_count % VAR_5->subctxt_cnt;
  if (VAR_8 && VAR_4->subctxt < VAR_8)
   VAR_4->tid_limit++;
 } else {
  VAR_4->tid_limit = VAR_5->expected_count;
 }
 FUNC_7(&VAR_4->tid_lock);

 return VAR_7;
}
