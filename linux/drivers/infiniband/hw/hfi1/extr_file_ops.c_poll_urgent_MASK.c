
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct hfi1_filedata {struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {int uctxt_lock; } ;
struct hfi1_ctxtdata {scalar_t__ urgent; scalar_t__ urgent_poll; int event_flags; int wait; struct hfi1_devdata* dd; } ;
struct file {struct hfi1_filedata* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3,
    struct poll_table_struct *VAR_4)
{
 struct hfi1_filedata *VAR_5 = VAR_3->private_data;
 struct hfi1_ctxtdata *VAR_6 = VAR_5->uctxt;
 struct hfi1_devdata *VAR_7 = VAR_6->dd;
 __poll_t VAR_8;

 FUNC_0(VAR_3, &VAR_6->wait, VAR_4);

 FUNC_2(&VAR_7->uctxt_lock);
 if (VAR_6->urgent != VAR_6->urgent_poll) {
  VAR_8 = VAR_0 | VAR_1;
  VAR_6->urgent_poll = VAR_6->urgent;
 } else {
  VAR_8 = 0;
  FUNC_1(VAR_2, &VAR_6->event_flags);
 }
 FUNC_3(&VAR_7->uctxt_lock);

 return VAR_8;
}
