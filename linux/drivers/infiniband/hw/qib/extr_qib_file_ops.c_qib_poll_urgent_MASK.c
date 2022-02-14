
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int uctxt_lock; } ;
struct qib_ctxtdata {scalar_t__ urgent; scalar_t__ urgent_poll; int flag; int wait; struct qib_devdata* dd; } ;
struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct qib_ctxtdata *VAR_3,
        struct file *VAR_4,
        struct poll_table_struct *VAR_5)
{
 struct qib_devdata *VAR_6 = VAR_3->dd;
 __poll_t VAR_7;

 FUNC_0(VAR_4, &VAR_3->wait, VAR_5);

 FUNC_2(&VAR_6->uctxt_lock);
 if (VAR_3->urgent != VAR_3->urgent_poll) {
  VAR_7 = VAR_0 | VAR_1;
  VAR_3->urgent_poll = VAR_3->urgent;
 } else {
  VAR_7 = 0;
  FUNC_1(VAR_2, &VAR_3->flag);
 }
 FUNC_3(&VAR_6->uctxt_lock);

 return VAR_7;
}
