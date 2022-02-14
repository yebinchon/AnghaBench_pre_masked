
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct hfi1_filedata {struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_devdata {int uctxt_lock; } ;
struct hfi1_ctxtdata {int event_flags; int wait; struct hfi1_devdata* dd; } ;
struct file {struct hfi1_filedata* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (struct hfi1_devdata*,int ,struct hfi1_ctxtdata*) ;
 int FUNC_2 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static __poll_t FUNC_6(struct file *VAR_4,
         struct poll_table_struct *VAR_5)
{
 struct hfi1_filedata *VAR_6 = VAR_4->private_data;
 struct hfi1_ctxtdata *VAR_7 = VAR_6->uctxt;
 struct hfi1_devdata *VAR_8 = VAR_7->dd;
 __poll_t VAR_9;

 FUNC_2(VAR_4, &VAR_7->wait, VAR_5);

 FUNC_4(&VAR_8->uctxt_lock);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_2, &VAR_7->event_flags);
  FUNC_1(VAR_8, VAR_3, VAR_7);
  VAR_9 = 0;
 } else {
  VAR_9 = VAR_0 | VAR_1;
 }
 FUNC_5(&VAR_8->uctxt_lock);

 return VAR_9;
}
