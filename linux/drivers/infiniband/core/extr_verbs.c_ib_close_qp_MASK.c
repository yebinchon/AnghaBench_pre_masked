
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {scalar_t__ qp_sec; int usecnt; TYPE_1__* device; int open_list; struct ib_qp* real_qp; } ;
struct TYPE_2__ {int event_handler_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ib_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct ib_qp *VAR_1)
{
 struct ib_qp *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_1->real_qp;
 if (VAR_2 == VAR_1)
  return -VAR_0;

 FUNC_4(&VAR_2->device->event_handler_lock, VAR_3);
 FUNC_3(&VAR_1->open_list);
 FUNC_5(&VAR_2->device->event_handler_lock, VAR_3);

 FUNC_0(&VAR_2->usecnt);
 if (VAR_1->qp_sec)
  FUNC_1(VAR_1->qp_sec);
 FUNC_2(VAR_1);

 return 0;
}
