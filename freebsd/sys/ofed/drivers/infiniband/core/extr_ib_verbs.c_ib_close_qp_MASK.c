
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp {int usecnt; TYPE_1__* device; int open_list; struct ib_qp* real_qp; } ;
struct TYPE_2__ {int event_handler_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ib_qp *VAR_1)
{
 struct ib_qp *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_1->real_qp;
 if (VAR_2 == VAR_1)
  return -VAR_0;

 FUNC_3(&VAR_2->device->event_handler_lock, VAR_3);
 FUNC_2(&VAR_1->open_list);
 FUNC_4(&VAR_2->device->event_handler_lock, VAR_3);

 FUNC_0(&VAR_2->usecnt);
 FUNC_1(VAR_1);

 return 0;
}
