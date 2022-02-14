
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hfi1_filedata {TYPE_2__* uctxt; TYPE_1__* dd; int subctxt; int rec_cpu_num; } ;
struct TYPE_5__ {int in_use_ctxts; int numa_id; int event_flags; int wait; } ;
struct TYPE_4__ {int uctxt_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct hfi1_filedata*,TYPE_2__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct hfi1_filedata *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;





 VAR_4 = FUNC_7(
  VAR_3->uctxt->wait,
  !FUNC_6(VAR_2, &VAR_3->uctxt->event_flags));

 if (FUNC_6(VAR_1, &VAR_3->uctxt->event_flags))
  VAR_4 = -VAR_0;


 if (!VAR_4) {
  VAR_3->rec_cpu_num = FUNC_1(VAR_3->uctxt->numa_id);
  VAR_4 = FUNC_3(VAR_3, VAR_3->uctxt);
 }

 if (VAR_4) {
  FUNC_4(&VAR_3->dd->uctxt_lock, VAR_5);
  FUNC_0(VAR_3->subctxt, VAR_3->uctxt->in_use_ctxts);
  FUNC_5(&VAR_3->dd->uctxt_lock, VAR_5);
  FUNC_2(VAR_3->uctxt);
  VAR_3->uctxt = ((void*)0);
 }

 return VAR_4;
}
