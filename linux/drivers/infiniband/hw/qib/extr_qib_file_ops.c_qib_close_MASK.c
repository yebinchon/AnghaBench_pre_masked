
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_filedata {int rec_cpu_num; int subctxt; scalar_t__ pq; struct qib_ctxtdata* rcd; } ;
struct qib_devdata {int freectxts; scalar_t__ pageshadow; int (* f_clear_tids ) (struct qib_devdata*,struct qib_ctxtdata*) ;int (* f_rcvctrl ) (int ,int,unsigned int) ;scalar_t__ kregbase; int uctxt_lock; int ** rcd; } ;
struct qib_ctxtdata {int active_slaves; unsigned int ctxt; int piocnt; int pio_base; int ppd; scalar_t__ flag; scalar_t__ pionowait; scalar_t__ rcvnowait; scalar_t__ piowait_to; scalar_t__ rcvwait_to; scalar_t__ pid; scalar_t__* subpid; scalar_t__ cnt; struct qib_devdata* dd; } ;
struct inode {int dummy; } ;
struct file {struct qib_filedata* private_data; } ;
struct TYPE_2__ {int sps_ctxts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct qib_filedata*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qib_devdata*,int ,int ,int ,int *) ;
 int FUNC_5 (struct qib_ctxtdata*,struct qib_devdata*) ;
 int VAR_3 ;
 int FUNC_6 (struct qib_devdata*,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ,int,unsigned int) ;
 int FUNC_14 (struct qib_devdata*,struct qib_ctxtdata*) ;
 int FUNC_15 (struct qib_ctxtdata*) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_6, struct file *VAR_7)
{
 struct qib_filedata *VAR_8;
 struct qib_ctxtdata *VAR_9;
 struct qib_devdata *VAR_10;
 unsigned long VAR_11;
 unsigned VAR_12;

 FUNC_2(&VAR_4);

 VAR_8 = VAR_7->private_data;
 VAR_7->private_data = ((void*)0);
 VAR_9 = VAR_8->rcd;
 if (!VAR_9) {
  FUNC_3(&VAR_4);
  goto bail;
 }

 VAR_10 = VAR_9->dd;


 FUNC_7();


 if (VAR_8->pq) {
  FUNC_10(VAR_9->ppd, VAR_8->pq);
  FUNC_9(VAR_8->pq);
 }

 if (VAR_8->rec_cpu_num != -1)
  FUNC_0(VAR_8->rec_cpu_num, VAR_3);

 if (--VAR_9->cnt) {





  VAR_9->active_slaves &= ~(1 << VAR_8->subctxt);
  VAR_9->subpid[VAR_8->subctxt] = 0;
  FUNC_3(&VAR_4);
  goto bail;
 }


 FUNC_11(&VAR_10->uctxt_lock, VAR_11);
 VAR_12 = VAR_9->ctxt;
 VAR_10->rcd[VAR_12] = ((void*)0);
 VAR_9->pid = 0;
 FUNC_12(&VAR_10->uctxt_lock, VAR_11);

 if (VAR_9->rcvwait_to || VAR_9->piowait_to ||
     VAR_9->rcvnowait || VAR_9->pionowait) {
  VAR_9->rcvwait_to = 0;
  VAR_9->piowait_to = 0;
  VAR_9->rcvnowait = 0;
  VAR_9->pionowait = 0;
 }
 if (VAR_9->flag)
  VAR_9->flag = 0;

 if (VAR_10->kregbase) {

  VAR_10->f_rcvctrl(VAR_9->ppd, VAR_0 |
      VAR_1, VAR_12);


  FUNC_5(VAR_9, VAR_10);
  FUNC_6(VAR_10, VAR_9->pio_base, VAR_9->piocnt);
  FUNC_4(VAR_10, VAR_9->pio_base,
           VAR_9->piocnt, VAR_2, ((void*)0));

  VAR_10->f_clear_tids(VAR_10, VAR_9);

  if (VAR_10->pageshadow)
   FUNC_15(VAR_9);
  VAR_5.sps_ctxts--;
  VAR_10->freectxts++;
 }

 FUNC_3(&VAR_4);
 FUNC_8(VAR_10, VAR_9);

bail:
 FUNC_1(VAR_8);
 return 0;
}
