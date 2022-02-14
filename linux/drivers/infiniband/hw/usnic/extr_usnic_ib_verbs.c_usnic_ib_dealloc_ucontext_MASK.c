
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_ucontext {int link; int qp_grp_list; } ;
struct usnic_ib_dev {int usdev_lock; } ;
struct ib_ucontext {int device; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct usnic_ib_dev* FUNC_5 (int ) ;
 struct usnic_ib_ucontext* FUNC_6 (struct ib_ucontext*) ;
 int FUNC_7 (char*) ;

void FUNC_8(struct ib_ucontext *VAR_0)
{
 struct usnic_ib_ucontext *VAR_1 = FUNC_6(VAR_0);
 struct usnic_ib_dev *VAR_2 = FUNC_5(VAR_0->device);
 FUNC_7("\n");

 FUNC_3(&VAR_2->usdev_lock);
 FUNC_0(!FUNC_2(&VAR_1->qp_grp_list));
 FUNC_1(&VAR_1->link);
 FUNC_4(&VAR_2->usdev_lock);
}
